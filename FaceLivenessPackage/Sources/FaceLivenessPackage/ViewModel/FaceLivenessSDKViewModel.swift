//
//  FaceLivenessSDKViewModel.swift
//  FaceAuthIprove
//
//  Created by Gabriel Caldeira Martins on 16/05/23.
//

import Foundation
import iProov

protocol FaceLivenessSDKViewModelDelegate {
    func didFinishHelper()
}

public class FaceLivenessSDKViewModel {
    private let streamingURL = "wss://us.rp.secure.iproov.me/ws"
    
    private let faceLivenessSDK: FaceLivenessSDK
    private let server: Server
    private let stage: CAFStage
    private let filter: Filter
    var delegate: FaceLivenessSDKViewModelDelegate?
    
    public init(stage: CAFStage, faceLivenessSDK: FaceLivenessSDK, filter: Filter) {
        self.faceLivenessSDK = faceLivenessSDK
        self.stage = stage
        self.filter = filter
        
        server = Server(
            mobileToken: faceLivenessSDK.mobileToken,
            requestTimeout: 10
        )
    }
    
    public func launchSDKHelper(completion: @escaping (FaceLivenessResult) -> Void) {
        getToken { [weak self] tokenResponse in
            guard let tokenResponse = tokenResponse,
                  let self = self
            else { return }
            
            self.startSDKHelper(
                with: tokenResponse,
                completion: completion
            )
        }
    }
    
    // MARK: - private funcs
    
    private func getToken(completion: @escaping (TokenLivenessResponse?) -> Void) {
        let body = try? TokenBodyRequest(personId: faceLivenessSDK.personId).encoded()
        
        server.request(
            a: TokenLivenessResponse.self,
            to: TokenRequestRoute(stage: faceLivenessSDK.stage),
            sending: body)
        { httpCode, response, error in
            completion(response)
        }
    }
    
    private func startSDKHelper(with tokenResponse: TokenLivenessResponse, completion: @escaping (FaceLivenessResult) -> Void) {
        IProov.launch(streamingURL: streamingURL, token: tokenResponse.token, options: filter.defineFilter(filter: filter)) { [weak self] status in
            guard let self = self else { return }
            
            self.validate(
                status: status,
                tokenLivenessResponse: tokenResponse,
                completion: completion
            )
        }
    }
    
    private func validate(status: Status, tokenLivenessResponse: TokenLivenessResponse, completion: @escaping (FaceLivenessResult) -> Void) {
        switch status {
        case .success:
            delegate?.didFinishHelper()
            validateSuccess(with: tokenLivenessResponse, completion: completion)
        case .failure(let result):
            validateFailure(
                with: result,
                tokenResponse: tokenLivenessResponse,
                completion: completion
            )
        case .cancelled(_):
            validateCancelled(with: tokenLivenessResponse, completion: completion)
        case .error(let error):
            validateError(with: error)
        default:
            break
        }
    }
    
    private func validateSuccess(with tokenResponse: TokenLivenessResponse, completion: @escaping (FaceLivenessResult) -> Void) {
        registerConsumption(
            tokenResponse: tokenResponse,
            personId: faceLivenessSDK.personId
        ) { faceLivenessResult in
            
            completion(faceLivenessResult)
        }
    }
    
    private func validateFailure(with failureResult: FailureResult, tokenResponse: TokenLivenessResponse, completion: @escaping (FaceLivenessResult) -> Void) {
        completion(FaceLivenessResult(
            isAlive: false,
            token: tokenResponse.token,
            errorMessage: "Fail: \(tokenResponse.message)",
            imageUrl: nil,
            signedResponse: nil
        )
        )
    }
    
    private func validateCancelled(with tokenResponse: TokenLivenessResponse, completion: @escaping (FaceLivenessResult) -> Void) {
        completion(FaceLivenessResult(
            isAlive: false,
            token: tokenResponse.token,
            errorMessage: "Cancelled: \(tokenResponse.message)",
            imageUrl: nil,
            signedResponse: nil
        )
        )
    }
    
    
    private func validateError(with error: IProovError) {
        print("ERROR - \(error.localizedTitle) - \(error.localizedDescription)")
    }
    
    private func registerConsumption(tokenResponse: TokenLivenessResponse, personId: String, completion: @escaping (FaceLivenessResult) -> Void) {
        let data = try? FaceLivenessConsumptionRequest(
            token: tokenResponse.token,
            personId: personId,
            userId: tokenResponse.userId
        ).encoded()
        
        server.request(
            a: FaceLivenessConsumptionResponse.self,
            to: FaceLivenessConsumptionRoute(stage: faceLivenessSDK.stage),
            sending: data
        ) { httpCode, response, error in
            
            guard let resp = response else {
                print(response)
                completion(FaceLivenessResult(
                    isAlive: false,
                    token: tokenResponse.token,
                    errorMessage: error,
                    imageUrl: nil,
                    signedResponse: nil
                    )
                )
                return
            }
            
            guard httpCode == 200 else {
                completion(
                    FaceLivenessResult(
                        isAlive: false,
                        token: tokenResponse.token,
                        errorMessage: resp.message,
                        imageUrl: nil,
                        signedResponse: nil
                    )
                )
                return
            }
            
            completion(FaceLivenessResult(
                isAlive: resp.isAlive ?? true,
                token: tokenResponse.token,
                errorMessage: error,
                imageUrl: resp.imageUrl,
                signedResponse: resp.signedResponse
            ))
        }
    }
}

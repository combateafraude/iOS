//
//  Server.swift
//  ios-sdk-pfl-cs
//
//  Created by Gabriel Caldeira Martins on 02/05/23.
//

import Foundation

typealias ServerResponse = (Int?, Data?, String?) -> Void
typealias DecodedResponse<T:Decodable> = (Int?, T?, String?) -> Void

class Server {
    
    // MARK: Properties
    private var mobileToken: String?
    private var requestTimeout: TimeInterval
    private var currentRequest: URLRequest!
    private var currentSession: URLSession!
    
    
    init(mobileToken: String?, requestTimeout: TimeInterval) {
        self.mobileToken = mobileToken
        self.requestTimeout = requestTimeout
    }
    
    // MARK: Functions
    
    func request<Model: Decodable>(a model: Model.Type, to route: APIRoute,sending params: Data? = nil, completion: @escaping DecodedResponse<Model>) {
        debugPrint("Calling route to", route.fullURL )
        currentRequest = makeRequest(url: route.fullURL, httpMethod: route.method, params: params)
        currentSession = makeSession()
        
        currentSession.dataTask(with: currentRequest) { (data, response, error) in
            self.handleRequestResponse(model: model, data: data, response: response, error: error, completion: completion)
        }
        .resume()
    }
    
    func request(to route: APIRoute,sending params: Data? = nil, completion: @escaping ServerResponse) {
        debugPrint("Calling route to", route.fullURL )
        currentRequest = makeRequest(url: route.fullURL, httpMethod: route.method, params: params)
        currentSession = makeSession()
        
        currentSession.dataTask(with: currentRequest) { (data, response, error) in
            self.handleRequestResponse(data: data, response: response, error: error, completion: completion)
        }
        .resume()
    }

    func handleRequestResponse<Model: Decodable>(model: Model.Type, data: Data?, response: URLResponse?, error: Error?, completion: @escaping DecodedResponse<Model>) {
        guard error == nil else {
            completion(nil, nil, self.getErrorMessage(from: data, error: error))
            return
        }
        let httpResponse = response as? HTTPURLResponse
        guard let statusCode = httpResponse?.statusCode, let data else {
            completion(nil, nil, self.getErrorMessage(from: data, error: error))
            return
        }
        completion(statusCode, data.decoded(as: model), nil)
    }
    
    func handleRequestResponse(data: Data?, response: URLResponse?, error: Error?, completion: @escaping ServerResponse) {
        guard error == nil else {
            completion(nil, nil, self.getErrorMessage(from: data, error: error))
            return
        }
        #if DEBUG
        data?.jsonPrint()
        #endif
        let httpResponse = response as? HTTPURLResponse
        completion(httpResponse?.statusCode, data, nil)
    }
    
    
    // MARK: Private Functions
    
    private func makeRequest(url: URL, httpMethod: HTTPMethod, params: Data?) -> URLRequest {
        var request = URLRequest(url: url, timeoutInterval: requestTimeout)
        
        request.httpMethod = httpMethod.rawValue
        
        if let mobileToken {
            request.setValue(mobileToken, forHTTPHeaderField: "Authorization")
        }
        
        request.setValue("application/json", forHTTPHeaderField: "content-type")
        
        if let params {
            let body = params
            request.httpBody = body
        }
        
        return request
    }
    
    private func makeSession() -> URLSession {
        let config = URLSessionConfiguration.default
        let session = URLSession(configuration: config, delegate: nil, delegateQueue: OperationQueue.current)
        return session
    }
    
    private func getErrorMessage(from data: Data?, error: Error?) -> String? {
//        return data?.decoded(as: ErrorMessage.self)?.message ?? error?.localizedDescription
        return ""
    }
}

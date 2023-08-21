//
//  LivenessResponse.swift
//  FaceAuthIprove
//
//  Created by Gabriel Caldeira Martins on 17/05/23.
//

import Foundation

struct FaceLivenessConsumptionResponse: Codable {
    let requestId: String?
    let message: String?
    let isAlive: Bool?
    let token: String?
    let imageUrl: String?
    let signedResponse: String?
}

struct FaceLivenessConsumptionRequest: Codable {
    let token: String
    var sdk_version: String = "ios-iproov-1.0"
    let personId: String
    let userId: String
    
    init(token: String, personId: String, userId: String){
        self.token = token
        self.personId = personId
        self.userId = userId
    }
}

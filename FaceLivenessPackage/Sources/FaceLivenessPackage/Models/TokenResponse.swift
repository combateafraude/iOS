//
//  TokenResponse.swift
//  FaceAuthIprove
//
//  Created by Gabriel Caldeira Martins on 17/05/23.
//

import Foundation
struct TokenLivenessResponse: Codable {
    let message: String
    let requestId: String
    let token: String
    let userId: String
}

struct TokenBodyRequest: Codable {
    let personId: String
    
    init(personId: String) {
        self.personId = personId
    }
}

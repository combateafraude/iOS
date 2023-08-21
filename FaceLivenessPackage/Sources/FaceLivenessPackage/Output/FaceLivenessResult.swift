//
//  FaceLivenessResult.swift
//  FaceAuthIprove
//
//  Created by Jessica Santana on 17/05/23.
//

import Foundation

public struct FaceLivenessResult {
    public let isAlive: Bool
    public let token: String?
    public let errorMessage: String?
    public let imageUrl: String?
    public let signedResponse: String?
}

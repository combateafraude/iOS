//
//  CAFStage.swift
//  ios-sdk-pfl-cs
//
//  Created by Gabriel Caldeira Martins on 28/04/23.
//

import Foundation

@objc public enum CAFStage: Int {
    case BETA, PROD, DEV
    
    func getDefaultURL(environment: Environment) -> String {
        switch self {
        case .BETA:
            return environment.getDefaultURLFromBeta()
        case .DEV:
            return environment.getDefaultURLFromDEV()
        default:
            return environment.getDefaultURLFromProd()
        }
    }

    func getDefaultHMACSecret() -> String {
        switch self {
        case .BETA:
            return "jESHZ5GpZPvPe5pXt5D9WXrXWvvKAawrdzYDPRE3yNN2Uur78RGZAdrZvVwXrvdnMKHsBpHU"
        case .DEV:
            return "LLKK9HgKNjCsxgyPScq5xz727mPB9z73yfcL2sc4BbTTNJ3KMrDWDM3UTe3BpuTzbS6epmvk"
        default:
            return "m9hTENV2aUyqDvBrgK8VZVm7x89Xfjt4z2UrfNGNUvWAHfgAFaZk78LzS3KkfzJ7HPVxJa96"
        }
    }
}

//
//  Environment.swift
//  ios-sdk-pfl-cs
//
//  Created by Gabriel Caldeira Martins on 28/04/23.
//

import Foundation

internal enum Environment {
    case mobile
    case analytics
    case caf

    func getDefaultURLFromDEV() -> String {
        switch self {
        case .mobile:
            return "https://api.public.dev.caf.io/v1/sdks/"
        case .analytics:
            return "https://api.analytics.combateafraude.com/"
        case .caf:
            return "https://api.dev.public.caf.io/v1/sdks/"
        }
    }
    
    func getDefaultURLFromBeta() -> String {
        switch self {
        case .mobile:
            return "https://api.public.caf.io/v1/sdks/"
        case .analytics:
            return "https://api.analytics.combateafraude.com/"
        case .caf:
            return "https://api.beta.public.caf.io/v1/sdks/"
        }
    }
    
    func getDefaultURLFromProd() -> String {
        switch self {
        case .mobile:
            return "https://api.public.caf.io/v1/sdks/" 
        case .analytics:
            return "https://api.analytics.combateafraude.com/"
        case .caf:
            return "https://api.public.caf.io/v1/sdks/"
        }
    }
}

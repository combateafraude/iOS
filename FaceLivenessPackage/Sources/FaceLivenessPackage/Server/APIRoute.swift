//
//  APIRoute.swift
//  ios-sdk-pfl-cs
//
//  Created by Gabriel Caldeira Martins on 02/05/23.
//

import Foundation

enum HTTPMethod: String {
    case get = "GET"
    case head = "HEAD"
    case post = "POST"
    case put = "PUT"
    case patch = "PATCH"
}

protocol APIRoute {
    var baseUrl: String { get }
    var method: HTTPMethod { get }
    var relativeUrl: String { get }
}

extension APIRoute {
    func getCustomUrl(pathArray: [String]) -> String {
        var url = baseUrl + relativeUrl
        for path in pathArray {
            url = url + path + "/"
        }
        return url
    }
    
    func getUrl(pathParam: String = "") -> String {
        return baseUrl + relativeUrl + pathParam;
    }
    
    func getUrlWithQueryParam(name: String = "", value: String = "") -> String {
        return baseUrl + relativeUrl + "?" + name + "=" + value;
    }
    
    var fullURL: URL {
        return URL(string: self.baseUrl + self.relativeUrl)!
    }
}

struct TokenRequestRoute: APIRoute {
    let stage: CAFStage
    let method: HTTPMethod = .post
    var relativeUrl: String {
        return ""
    }
    var baseUrl: String {
        URL.getTokenURL(for: stage)
    }
}

struct FaceAuthRoute: APIRoute {
    let stage: CAFStage
    let method: HTTPMethod = .post
    var relativeUrl: String {
        return ""
    }
    var baseUrl: String {
        URL.getFaceAuthURL(for: stage)
    }
}

struct FaceLivenessConsumptionRoute: APIRoute {
    let stage: CAFStage
    var method: HTTPMethod = .post
    var relativeUrl: String {
        return ""
    }
    var baseUrl: String {
        URL.getLivenessConsumptionURL(for: stage)
    }
}

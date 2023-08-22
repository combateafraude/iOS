//
//  Extensions.swift
//  ios-sdk-pfl-cs
//
//  Created by Gabriel Caldeira Martins on 02/05/23.
//

import Foundation
extension Encodable {
    func encoded() throws -> Data {
        let encoder = JSONEncoder()
        encoder.outputFormatting = .prettyPrinted
        return try encoder.encode(self)
    }
}

extension Data {
    
#if DEBUG
    func jsonPrint(){
        do {
            let json = try JSONSerialization.jsonObject(with: self, options: [])
            debugPrint("json : \(json)")
        } catch let error as NSError {
            debugPrint("Failed to load: \(error.localizedDescription)")
        }
    }
#endif
    
    func decoded<T: Decodable>(as model: T.Type) -> T? {
        do {
            return try JSONDecoder().decode(T.self, from: self)
        } catch let err as NSError {
            #if DEBUG
            debugPrint("Failed to decode: \(err) \nJSON:")
            self.jsonPrint()
            #endif
            return nil
        }
    }
}

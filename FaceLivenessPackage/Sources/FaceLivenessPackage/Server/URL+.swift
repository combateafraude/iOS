import Foundation

extension URL {
    static func getTokenURL(for stage: CAFStage) -> String {
        switch stage {
        case .DEV:
            return "https://api.public.dev.caf.io/v1/sdks/faces/authorization-partner"
        case .BETA:
            return "https://api.public.dev.caf.io/v1/sdks/faces/authorization-partner"
        case .PROD:
            return "https://api.public.caf.io/v1/sdks/faces/authorization-partner"
        }
    }
    
    static func getLivenessConsumptionURL(for stage: CAFStage) -> String {
        switch stage {
        case .DEV:
            return "https://api.public.dev.caf.io/v1/sdks/faces/liveness-iproov?shouldSignResponse=true"
        case .BETA:
            return "https://api.public.dev.caf.io/v1/sdks/faces/liveness-iproov?shouldSignResponse=true"
        case .PROD:
            return "https://api.public.caf.io/v1/sdks/faces/liveness-iproov?shouldSignResponse=true"
        }
    }
    
    static func getFaceAuthURL(for stage: CAFStage) -> String {
        switch stage {
        case .DEV:
            return "https://api.public.dev.caf.io/v1/sdks/faces/authentication-iproov"
        case .BETA:
            return "https://api.public.dev.caf.io/v1/sdks/faces/authentication-iproov"
        case .PROD:
            return "https://api.public.caf.io/v1/sdks/faces/authentication-iproov"
        }
    }
}

//
//  FaceLivenessSDK.swift
//  FaceAuthIprove
//
//  Created by Jessica Santana on 17/05/23.
//

import UIKit
import iProov

public enum Filter: Int {
    case lineDrawing, natural
    
    func defineFilter(filter: Filter) -> Options{
        let options = Options()
        
        if filter == .lineDrawing {
            options.filter
            = Options.LineDrawingFilter()
            return options
        } else {
            options.filter = Options.NaturalFilter()
            return options
        }
    }
}

public protocol FaceLivenessDelegate {
    func didFinishLiveness(with faceLivenessResult: FaceLivenessResult)
    func startLoadingScreen()
}

open class FaceLivenessSDK : NSObject {
    public static let SDK_NAME = "Caf-PFL-IPROVE"
    
    public var mobileToken: String
    public var personId: String
    
    public var stage: CAFStage
    public var sdkVersion: String
    public var filter: Filter
    
    public var delegate: FaceLivenessDelegate?
    
    private var userViewController: UIViewController?
    private var viewModel: FaceLivenessSDKViewModel?
    
    private init(builder: Build) {
        self.stage = builder.stage
        self.personId = builder.personId
        self.sdkVersion = builder.sdkVersion
        self.mobileToken = builder.mobileToken
        self.filter = builder.filter
        super.init()
        
        viewModel = .init(stage: .DEV, faceLivenessSDK: self, filter: filter)
        viewModel?.delegate = self
    }
    
    open func startSDK(viewController: UIViewController) {
        userViewController = viewController
        
        viewModel?.launchSDKHelper { [weak self] faceLivenessResult in
            guard let self = self else { return }
            
            self.delegate?.didFinishLiveness(
                with: faceLivenessResult
            )
        }
    }
    
    @objc open class Build: NSObject {
        internal var stage: CAFStage
        internal var sdkVersion: String
        internal var filter: Filter
        public var mobileToken: String
        public var personId: String
        
        public override init() {
            stage = .PROD
            sdkVersion = "1.0.0"
            personId = ""
            mobileToken = ""
            filter = .lineDrawing
            super.init()
        }
        
        open func setStage(stage: CAFStage) -> Build {
            self.stage = stage
            return self
        }
        
        open func setFilter(filter: Filter) -> Build {
            self.filter = filter
            return self
        }
        
        open func setCredentials(mobileToken: String, personId: String) -> Build {
            self.mobileToken = mobileToken
            self.personId = personId
            return self
        }
        
        open func build() -> FaceLivenessSDK {
            return FaceLivenessSDK(builder: self)
        }
    }
}

extension FaceLivenessSDK: FaceLivenessSDKViewModelDelegate {
    func didFinishHelper() {
        print("FinishSDKIprov")
        delegate?.startLoadingScreen()
    }
}

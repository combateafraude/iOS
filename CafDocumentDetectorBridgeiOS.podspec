Pod::Spec.new do |s|
  s.name         = 'CafDocumentDetectorBridgeiOS'
  s.version      = '1.0.0-beta16'
  s.summary      = 'CafDocumentDetector framework for document detection'
  s.homepage     = 'https://github.com/combateafraude/iOS'
  s.license      = { :type => 'MIT', :file => 'CafDocumentDetectorBridgeiOS/LICENSE' }
  s.author       = { 'services@caf.io' => 'services@caf.io' }
  s.source       = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
  
  s.ios.deployment_target = '13.0'
  s.swift_version = '5.0'

  s.vendored_frameworks = 'CafDocumentDetectorBridgeiOS/CafDocumentDetectorBridge.xcframework'

  s.dependency 'CafSDKiOS/DocumentDetector', '4.1.1'
  s.dependency 'CafSDKCommonsBridgeiOS', '1.0.0-beta38'
  s.dependency 'CafSolutions', '2.0.3'
end

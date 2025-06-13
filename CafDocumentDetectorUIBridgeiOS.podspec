Pod::Spec.new do |s|
  s.name         = 'CafDocumentDetectorUIBridgeiOS'
  s.version      = '1.0.0-beta4'
  s.summary      = 'CafDocumentDetector framework for document detection'
  s.homepage     = 'https://github.com/combateafraude/iOS'
  s.license      = { :type => 'MIT', :file => 'CafDocumentDetectorUIBridgeiOS/LICENSE' }
  s.author       = { 'services@caf.io' => 'services@caf.io' }
  s.source       = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
  
  s.ios.deployment_target = '13.0'
  s.swift_version = '5.0'

  s.vendored_frameworks = 'CafDocumentDetectorUIBridgeiOS/CafDocumentDetectorUIBridge.xcframework'

  s.dependency 'CafSDKiOS/DocumentDetector', '4.1.1'
  s.dependency 'CafSDKCommonsBridgeiOS', '1.0.0-beta37'
  s.dependency 'CafSolutions', '2.0.3'
end

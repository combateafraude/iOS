Pod::Spec.new do |s|
  s.name         = 'CafSDKCommonsBridgeiOS'
  s.version      = '1.0.0-beta23'
  s.summary      = 'CafFaceLiveness framework for facial recognition'
  s.homepage     = 'https://github.com/combateafraude/iOS'
  s.license      = { :type => 'MIT', :file => 'CafSDKCommonsBridgeiOS/LICENSE' }
  s.author       = { 'services@caf.io' => 'services@caf.io' }
  s.source       = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
  
  s.ios.deployment_target = '13.0'
  s.swift_version = '5.0'
  
  s.vendored_frameworks = 'CafSDKCommonsBridgeiOS/CafSDKCommonsBridge.xcframework'
  
  s.dependency 'CafSDKiOS/Core', '2.0.0-beta6'
  s.dependency 'CafSolutions', '2.0.3'
end

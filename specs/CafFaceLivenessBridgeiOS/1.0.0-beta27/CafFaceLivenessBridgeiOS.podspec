Pod::Spec.new do |s|
  s.name         = 'CafFaceLivenessBridgeiOS'
  s.version      = '1.0.0-beta27'
  s.summary      = 'CafFaceLiveness framework for facial recognition'
  s.homepage     = 'https://github.com/combateafraude/iOS'
  s.license      = { :type => 'MIT', :file => 'CafFaceLivenessBridgeiOS/LICENSE' }
  s.author       = { 'services@caf.io' => 'services@caf.io' }
  s.source       = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
  
  s.ios.deployment_target = '13.0'
  s.swift_version = '5.0'
  
  s.vendored_frameworks = 'CafFaceLivenessBridgeiOS/CafFaceLivenessBridge.xcframework'

  s.dependency 'CafSDKiOS/CafFaceLiveness', '2.0.0'
  s.dependency 'CafSDKCommonsBridgeiOS', '1.0.0-beta31'
  s.dependency 'CafSolutions', '2.0.3'
end

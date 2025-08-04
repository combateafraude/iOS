Pod::Spec.new do |s|
  s.name             = 'CafSDKiOSBridges'
  s.version          = '1.0.0-beta29'
  s.summary          = 'Caf iOS Bridges SDK'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'CafBridgesFrameworks/LICENSE' }
  s.author           = { 'Caf' => 'service@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }

  s.ios.deployment_target = '13.0'
  s.swift_version = '5.0'

  s.default_subspec = 'Core'

  caf_solutions_version = '2.0.5'
  caf_sdk_ios_version = '5.2.1'

  s.subspec 'Core' do |core|
    core.dependency 'CafSDKiOS/DocumentDetector'
    core.dependency 'CafSDKiOS/CafFaceLiveness'
  end

  s.subspec 'CafSDKCommonsBridgeiOS' do |cb|
    cb.vendored_frameworks = 'CafBridgesFrameworks/CafSDKCommonsBridge.xcframework'
    cb.dependency 'CafSDKiOS/Core', caf_sdk_ios_version
    cb.dependency 'CafSolutions', caf_solutions_version
  end

  # --- Document Detector

  s.subspec 'CafDocumentDetectorBridgeiOS' do |dd|
    dd.vendored_frameworks = 'CafBridgesFrameworks/CafDocumentDetectorBridge.xcframework'
    dd.dependency 'CafSDKiOS/DocumentDetector', caf_sdk_ios_version
    dd.dependency 'CafSDKiOSBridges/CafSDKCommonsBridgeiOS'
    dd.dependency 'CafSolutions', caf_solutions_version
  end

  s.subspec 'CafDocumentDetectorUIBridgeiOS' do |ddui|
    ddui.vendored_frameworks = 'CafBridgesFrameworks/CafDocumentDetectorUIBridge.xcframework'
    ddui.dependency 'CafSDKiOS/DocumentDetector', caf_sdk_ios_version
    ddui.dependency 'CafSDKiOSBridges/CafSDKCommonsBridgeiOS'
    ddui.dependency 'CafSolutions', caf_solutions_version
  end

  # --- Face Liveness

  s.subspec 'CafFaceLivenessBridgeiOS' do |fl|
    fl.vendored_frameworks = 'CafBridgesFrameworks/CafFaceLivenessBridge.xcframework'
    fl.dependency 'CafSDKiOS/CafFaceLiveness', caf_sdk_ios_version
    fl.dependency 'CafSDKiOSBridges/CafSDKCommonsBridgeiOS'
    fl.dependency 'CafSolutions', caf_solutions_version
  end

  s.subspec 'CafFaceLivenessUIBridgeiOS' do |flui|
    flui.vendored_frameworks = 'CafBridgesFrameworks/CafFaceLivenessUIBridge.xcframework'
    flui.dependency 'CafSDKiOS/CafFaceLiveness', caf_sdk_ios_version
    flui.dependency 'CafSDKiOSBridges/CafSDKCommonsBridgeiOS'
    flui.dependency 'CafSolutions', caf_solutions_version
  end

end
Pod::Spec.new do |s|
  s.name             = 'CafSDKiOS'
  s.version          = '6.3.2-rc.1'
  s.summary          = 'Caf iOS SDK'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Caf' => 'service@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.version.to_s }

  s.ios.deployment_target = '15.0'
  s.swift_version = '5.0'
  s.default_subspec = 'CafSDK'

  caf_solutions_version = '2.0.5'
  
  # Main SDK framework
  s.subspec 'CafCore' do |core|
    core.vendored_frameworks = 'Frameworks/CafSDK.xcframework'
  end

  # Full installation (convenience subspec)
  s.subspec 'CafSDK' do |caf|
    caf.dependency 'CafSDKiOS/DocumentDetector'
    caf.dependency 'CafSDKiOS/CafFaceLiveness'
  end

  # Document Detector component
  s.subspec 'DocumentDetector' do |dd|
    dd.vendored_frameworks = 'Frameworks/DocumentDetector.xcframework'
    dd.dependency 'CafSDKiOS/CafCore'
    dd.dependency 'TensorFlowLiteC', '2.14.0'
  end

  # Face Liveness
  s.subspec 'CafFaceLiveness' do |fl|
    fl.dependency 'CafSDKiOS/CafFaceLivenessCore'
    fl.dependency 'CafSDKiOS/IproovProvider'
    fl.dependency 'CafSDKiOS/FaceTec2DProvider'
    fl.dependency 'CafSDKiOS/FortfaceProvider'
  end

  # Face Liveness core
  s.subspec 'CafLivenessBase' do |base|
    base.vendored_frameworks = 'Frameworks/CafLivenessBase.xcframework'
  end

  s.subspec 'CafFaceLivenessCore' do |flc|
    flc.vendored_frameworks = 'Frameworks/CafFaceLiveness.xcframework'
    flc.dependency 'CafSDKiOS/CafCore'
    flc.dependency 'FingerprintPro', '2.7.0'
    flc.dependency 'CafSDKiOS/CafLivenessBase'
  end

  # Iproov integration
  s.subspec 'IproovProvider' do |ip|
    ip.vendored_frameworks = 'Frameworks/IproovProvider.xcframework'
    ip.dependency 'iProov', '13.1.0'
    ip.dependency 'CafSDKiOS/CafFaceLivenessCore'
  end

  # FaceTec integration
  s.subspec 'FaceTec2DProvider' do |fp|
    fp.vendored_frameworks = 'Frameworks/FaceTec2DProvider.xcframework'
    fp.dependency 'CafSDKiOS/CafFaceLivenessCore'
  end

  # Fortface integration
  s.subspec 'FortfaceProvider' do |ff|
    ff.vendored_frameworks = [
      'Frameworks/Fortface.xcframework',
      'Frameworks/FortfaceProvider.xcframework'
    ]
    ff.dependency 'CafSDKiOS/CafFaceLivenessCore'
  end

  # --- Bridges --- #

  s.subspec 'CafSDKCommonsBridgeiOS' do |cb|
    cb.vendored_frameworks = 'Frameworks/CafSDKCommonsBridge.xcframework'
    cb.dependency 'CafSDKiOS/CafCore'
    cb.dependency 'CafSolutions', caf_solutions_version
  end

  # --- Document Detector

  s.subspec 'CafDocumentDetectorBridgeiOS' do |dd|
    dd.vendored_frameworks = 'Frameworks/CafDocumentDetectorBridge.xcframework'
    dd.dependency 'CafSDKiOS/DocumentDetector'
    dd.dependency 'CafSDKiOS/CafSDKCommonsBridgeiOS'
    dd.dependency 'CafSolutions', caf_solutions_version
  end

  s.subspec 'CafDocumentDetectorUIBridgeiOS' do |ddui|
    ddui.vendored_frameworks = 'Frameworks/CafDocumentDetectorUIBridge.xcframework'
    ddui.dependency 'CafSDKiOS/DocumentDetector'
    ddui.dependency 'CafSDKiOS/CafSDKCommonsBridgeiOS'
    ddui.dependency 'CafSolutions', caf_solutions_version
  end

  # --- Face Liveness

  s.subspec 'CafFaceLivenessBridgeiOS' do |fl|
    fl.vendored_frameworks = 'Frameworks/CafFaceLivenessBridge.xcframework'
    fl.dependency 'CafSDKiOS/CafFaceLivenessCore'
    fl.dependency 'CafSDKiOS/CafSDKCommonsBridgeiOS'
    fl.dependency 'CafSolutions', caf_solutions_version
  end

  s.subspec 'CafFaceLivenessUIBridgeiOS' do |flui|
    flui.vendored_frameworks = 'Frameworks/CafFaceLivenessUIBridge.xcframework'
    flui.dependency 'CafSDKiOS/CafFaceLivenessCore'
    flui.dependency 'CafSDKiOS/CafSDKCommonsBridgeiOS'
    flui.dependency 'CafSolutions', caf_solutions_version
  end
end

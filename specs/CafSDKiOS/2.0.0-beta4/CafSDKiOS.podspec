Pod::Spec.new do |s|
  s.name             = 'CafSDKiOS'
  s.version          = '2.0.0-beta4'
  s.summary          = 'Caf iOS SDK'
  s.homepage         = 'https://github.com/combateafraude/caf-ios-sdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Caf' => 'service@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s  }

  s.ios.deployment_target = '13.0'
  s.swift_version = '5.0'
  s.default_subspec = 'CafSDK'

  # Main SDK framework
  s.subspec 'Core' do |core|
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
    dd.dependency 'TensorFlowLiteC', '2.14.0'
    dd.dependency 'CafSolutions', '2.0.3'
  end

  # Face Liveness
  s.subspec 'CafFaceLiveness' do |fl|
    fl.dependency 'CafSDKiOS/CafFaceLivenessCore'
    fl.dependency 'CafSDKiOS/IproovProvider'
    fl.dependency 'CafSDKiOS/FaceTec2DProvider'
  end

  # Face Liveness core
  s.subspec 'CafFaceLivenessCore' do |flc|
    flc.vendored_frameworks = 'Frameworks/CafFaceLiveness.xcframework'
    flc.dependency 'FingerprintPro', '2.7.0'
    flc.dependency 'CafSolutions', '2.0.3'
  end

  # Iproov integration
  s.subspec 'IproovProvider' do |ip|
    ip.vendored_frameworks = 'Frameworks/IproovProvider.xcframework'
    ip.dependency 'iProov', '12.3.0'
    ip.dependency 'CafSDKiOS/CafFaceLivenessCore'
  end

  # FaceTec integration
  s.subspec 'FaceTec2DProvider' do |fp|
    fp.vendored_frameworks = 'Frameworks/FaceTec2DProvider.xcframework'
    fp.dependency 'CafSDKiOS/CafFaceLivenessCore'
  end
end

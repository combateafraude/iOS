#
# Be sure to run `pod lib lint FaceLiveness.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FaceLiveness'
  s.version          = '7.5.0-rc.2'
  s.summary          = 'Face Liveness'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'services@caf.io' => 'services@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/FaceLiveness.git', :tag => s.version.to_s }


  s.swift_version = '5.3.2'
  s.ios.deployment_target = '15.0'
  s.ios.vendored_frameworks = 'Sources/FaceLiveness.xcframework'

  s.dependency 'iProov', '13.1.0'
  s.dependency 'FingerprintPro', '2.16.0'
  s.dependency 'CafSolutions', '2.0.5'
end

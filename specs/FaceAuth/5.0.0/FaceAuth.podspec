#
# Be sure to run `pod lib lint CFPassiveFaceLiveness.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FaceAuth'
  s.version          = '5.0.0'
  s.summary          = 'FaceAuth'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'FaceAuth/LICENSE' }
  s.author           = { 'services@caf.io' => 'services@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }


  s.swift_version = '5.3.1'
  s.ios.deployment_target = '12.0'
  s.ios.vendored_frameworks = 'FaceAuth/FaceAuth.xcframework'

  s.dependency 'FaceLiveness', '5.0.0'
end

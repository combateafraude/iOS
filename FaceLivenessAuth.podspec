#
# Be sure to run `pod lib lint CFPassiveFaceLiveness.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FaceLivenessAuth'
  s.version          = '1.2.0'
  s.summary          = 'FaceLivenessAuth'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'face-liveness-auth/LICENSE' }
  s.author           = { 'ti@combateafraude.com' => 'ti@combateafraude.com' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }


  s.swift_version = '5.3.1'
  s.ios.deployment_target = '11.0'
  s.ios.vendored_frameworks = 'face-liveness-auth/FaceLivenessAuth.xcframework'

  s.dependency 'iProov', '10.3.0'
end

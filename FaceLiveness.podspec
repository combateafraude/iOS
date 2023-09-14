#
# Be sure to run `pod lib lint CFPassiveFaceLiveness.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FaceLiveness'
  s.version          = '3.1.0'
  s.summary          = 'Face Liveness'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'face-liveness/LICENSE' }
  s.author           = { 'services@caf.io' => 'services@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.swift_version = '5.3.2'
  s.ios.deployment_target = '12.0'
  s.ios.vendored_frameworks = 'face-liveness/FaceLiveness.xcframework'

  s.dependency 'iProov', '10.3.1'
end

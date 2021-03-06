#
# Be sure to run `pod lib lint CFPassiveFaceLiveness.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'PassiveFaceLiveness'
  s.version          = '1.2.0'
  s.summary          = 'Passive Faceliveness'
  s.description      = <<-DESC
Passive FaceLiveness description
                       DESC

  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'passive-face-liveness/LICENSE' }
  s.author           = { 'ti@combateafraude.com' => 'ti@combateafraude.com' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.swift_version = '5'
  s.ios.deployment_target = '12.0'
  s.ios.vendored_frameworks = 'passive-face-liveness/PassiveFaceLiveness.framework'

  s.dependency 'SwiftJWT', '~> 3.5.3'
 
end

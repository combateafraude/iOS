#
# Be sure to run `pod lib lint CFPassiveFaceLiveness.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FaceAuthenticator'
  s.version          = '1.0.0'
  s.summary          = 'Face Authenticator'
  s.description      = <<-DESC
Face Authenticator description
                       DESC

  s.homepage         = 'https://github.com/combateafraude/Mobile'
  s.license          = { :type => 'MIT', :file => 'face-authenticator/LICENSE' }
  s.author           = { 'ti@combateafraude.com' => 'ti@combateafraude.com' }
  s.source           = { :git => 'https://github.com/combateafraude/Mobile.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.ios.deployment_target = '12.0'
  s.ios.vendored_frameworks = 'face-authenticator/FaceAuthenticator.framework'
 
end

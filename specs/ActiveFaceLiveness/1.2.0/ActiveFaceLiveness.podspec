#
# Be sure to run `pod lib lint CFPassiveFaceLiveness.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ActiveFaceLiveness'
  s.version          = '1.2.0'
  s.summary          = 'Active Faceliveness'
  s.description      = <<-DESC
Active FaceLiveness description
                       DESC

  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'active-face-liveness/LICENSE' }
  s.author           = { 'ti@combateafraude.com' => 'ti@combateafraude.com' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.ios.deployment_target = '12.0'
  s.ios.vendored_frameworks = 'active-face-liveness/ActiveFaceLiveness.framework'
 
end

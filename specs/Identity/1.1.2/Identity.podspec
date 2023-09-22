#
# Be sure to run `pod lib lint CFIdentity.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'Identity'
  s.version          = '1.1.2'
  s.summary          = 'Identity'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'identity/LICENSE' }
  s.author           = { 'services@caf.io' => 'services@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.swift_version = '5.7.0'
  s.ios.deployment_target = '12.4'
  s.ios.vendored_frameworks = 'identity/Identity.xcframework'

  s.dependency 'Sentry', '7.11.0'
  s.dependency 'FingerprintPro'
end

#
# Be sure to run `pod lib lint CFDocumentDetection.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'DocumentDetector'
  s.version          = '8.0.5'
  s.summary          = 'DocumentDetector'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'document-detector/LICENSE' }
  s.author           = { 'services@caf.io' => 'services@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.swift_version = '5.3.2'
  s.ios.deployment_target = '11.0'
  s.ios.vendored_frameworks = 'document-detector/DocumentDetector.xcframework'

  s.dependency 'Sentry', '7.11.0'
end

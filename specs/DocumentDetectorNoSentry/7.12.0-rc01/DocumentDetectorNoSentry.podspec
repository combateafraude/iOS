#
# Be sure to run `pod lib lint CFDocumentDetection.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'DocumentDetectorNoSentry'
  s.version          = '7.12.0-rc01'
  s.summary          = 'DocumentDetectorNoSentry'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'document-detector-nosentry/LICENSE' }
  s.author           = { 'ti@combateafraude.com' => 'ti@combateafraude.com' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.swift_version = '5.3.2'
  s.ios.deployment_target = '11.0'
  s.ios.vendored_frameworks = 'document-detector-nosentry/DocumentDetector.xcframework'
 
end

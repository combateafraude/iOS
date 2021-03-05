#
# Be sure to run `pod lib lint CFDocumentDetection.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'DocumentDetector'
  s.version          = '4.3.2'
  s.summary          = 'DocumentDetector'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'document-detector/LICENSE' }
  s.author           = { 'ti@combateafraude.com' => 'ti@combateafraude.com' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.swift_version = '5'
  s.ios.deployment_target = '11.0'
  s.ios.vendored_frameworks = 'document-detector/DocumentDetector.framework'

  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  s.dependency 'TensorFlowLiteSwift', '2.1.0'
  s.dependency 'Sentry', '5.2.0'
 
end

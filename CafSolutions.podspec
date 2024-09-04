Pod::Spec.new do |s|
  s.name             = 'CafSolutions'
  s.version          = '1.0.0'
  s.summary          = 'CafSolutions'
  s.homepage         = 'https://github.com/combateafraude/iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'services@caf.io' => 'services@caf.io' }
  s.source           = { :git => 'https://github.com/combateafraude/iOS.git', :tag => s.name + "-" + s.version.to_s }
 
  
  s.ios.deployment_target = '13.0'
  s.ios.vendored_frameworks = 'caf-solutions/CafSolutions.xcframework'
end

Pod::Spec.new do |s|
    s.name             = 'opencv_brightness'
    s.version          = '0.0.1'
    s.summary          = 'A Flutter plugin for adjusting brightness using OpenCV.'
    s.description      = 'This plugin allows Flutter applications to adjust the brightness using OpenCV.'
  
    s.homepage         = 'https://github.com/AnthonyFisi/opencv_brigthness'
    s.license          = { :file => '../LICENSE' }
    s.author           = { 'Anthony Fisi' => 'tu-email@example.com' }
  
    s.source           = { :git => 'https://github.com/AnthonyFisi/opencv_brigthness.git', :tag => s.version.to_s }
    s.source_files     = 'Classes/**/*.{h,m}'
    s.dependency 'Flutter'
    s.ios.deployment_target = '12.0'
    s.dependency 'OpenCV'
  end
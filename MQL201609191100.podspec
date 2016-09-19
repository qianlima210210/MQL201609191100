Pod::Spec.new do |s|
  s.name         = "MQL201609191100"
  s.version      = "1.0.0"
  s.summary      = "client library"
  s.description  = "client library for iOS (static lib), Supports iPhone Simulator (i386), armv7, armv7s."
  s.homepage     = "https://github.com/qianlima210210/MQL201609191100"
  s.license      = "MIT"

  s.author       = { 'maqianli' => 'qianlima210210@163.com' }
  s.source       = { :git => "https://github.com/qianlima210210/MQL201609191100.git", :tag => '1.0.0' }

  s.platform     = :ios, '5.0'
  s.source_files = 'Libraries/EGMonitor.h'
  s.ios.vendored_library = 'Libraries/libuniversal.a'

  s.frameworks = 'CoreTelephony','SystemConfiguration','AdSupport'                 #所需的framework，多个用逗号隔开
  s.libraries  = 'z'
  
  s.requires_arc = true
  
end
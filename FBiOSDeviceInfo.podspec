
Pod::Spec.new do |s|
  s.name             = 'FBiOSDeviceInfo'
  s.version          = '0.1.0'
  s.summary          = '快速获取iOS设备的一些信息'


  s.description      = <<-DESC
快速获取iOS设备的一些信息,包括(获取设备型号,机主名字,总内存,占用内存.CPU等一些常用信息)
                       DESC

  s.homepage         = 'https://github.com/zhangxueyang/FBiOSDeviceInfo'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhangxueyang' => 'cocoazxy@gmail.com' }
  s.source           = { :git => 'https://github.com/zhangxueyang/FBiOSDeviceInfo.git', :tag => s.version.to_s }
  s.ios.deployment_target = '7.0'

  s.source_files = 'FBiOSDeviceInfo/Classes/**/*'
  s.requires_arc = true
end

Pod::Spec.new do |s|
  s.name         = "CityInfo"
  s.version      = "0.0.7"
  s.summary      = "CityInfo"
  s.homepage     = "https://github.com/xiaowu2016/CityInfo"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "zhangchao" => "942777491@qq.com" }
  s.source       = { :git => "https://github.com/xiaowu2016/CityInfo.git", :tag => "0.0.7"}
  s.public_header_files = "CityInfo/**/*.h"
  #s.public_header_files = "CityInfo/{*}.h"
  s.preserve_paths = 'CityInfo/*.h'
  s.libraries = 'CityInfo'
  s.resources = "CityInfo/CitySelect.bundle"
  s.vendored_libraries = 'lib/libCityInfo.a'
  s.requires_arc = true
  s.platform = :ios,"7.0"
  s.xcconfig = { 'HEADER_SEARCH_PATHS' => "${PODS_ROOT}/#{s.name}/include/**", "LIBRARY_SEARCH_PATHS" => "${PODS_ROOT}/#{s.name}/lib/**" }
  s.dependency 'FCCurrentLocationGeocoder','~> 1.1.11'
  s.dependency 'FMDB','~> 2.6.2'
end

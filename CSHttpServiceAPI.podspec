Pod::Spec.new do |s|


s.name         = "CSHttpServiceAPI"
s.version      = "0.0.1"
s.summary      = "cocoaservice http service api."

s.description  = <<-DESC
    http请求组件API
DESC

s.homepage     = "https://github.com/yunhaiwu"


s.license      = { :type => "MIT", :file => "LICENSE" }

s.author       = { "吴云海" => "halayun@gamil.com" }


s.platform     = :ios, "7.0"

s.source       = { :git => "https://github.com/yunhaiwu/CSHttpServiceAPI.git", :tag => "#{s.version}" }

s.source_files  = "CSHttpServiceAPI/*.{h,m}"
s.exclude_files = "Example"

s.public_header_files = "CSHttpServiceAPI/*.h"

s.frameworks = "Foundation"

s.requires_arc = true

s.dependency "CocoaService"

end

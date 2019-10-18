# WJHttpEngineAPI

http 请求组件api

### CocoaPods 安装

```
在Podfile 文件头部添加：
source：https://github.com/yunhaiwu/ios-wj-framework-cocoapods-specs.git

//HTTP服务API
pod WJHttpServiceAPI

//基于AFNetworking 对 WJHttpServiceAPI 实现
pod WJHttpServiceAF

```

### 要求
* ARC支持
* iOS 6.0+


### 配置

在Config种配置
```
WJHttpServiceAPI:(NSDictionary<NSString*,NSObject*>*)
        allowInvalidCertificates:(BOOL)
        maxConcurrentCount:(NSInteger)
```

### 使用方法

```
id<WJHttpService> httpService = WJAppContextCreateService(@protocol(WJHttpService));

[httpService asynRequest:[ConfigInfoHttpRequest new] responseClass:[ConfigInfoHttpResponse class] responseBlock:^(id<WJHttpResponse> res, NSError *error) {
    
}];

```

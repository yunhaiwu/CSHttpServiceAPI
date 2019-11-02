# CSHttpServiceAPI

cocoaservice http 请求组件api

### CocoaPods 安装

```
在Podfile 文件头部添加：
source：https://github.com/yunhaiwu/ios-wj-framework-cocoapods-specs.git

//HTTP服务API
pod 'CSHttpServiceAPI'

```

### 要求
* ARC支持
* iOS 7.0+
* CocoaService (1.0+)

### 使用方法

方式一：
```
    id<CSHttpService> httpService = [[[CocoaService sharedInstance] applicationContext] fetchService:@protocol(CSHttpService)];
    id<CSHttpTask> task = [httpService request:request responseClass:[SimpleResponseObject class] responseBlock:^(id<CSHttpResponse> response, NSError *error) {
        if (error) {
            //处理网络环境错误
        } else {
            if ([response isError]) {
                //接口数据逻辑错误
            } else {
                SimpleResponseObject *simpleResponseObject = (SimpleResponseObject*)response;
                //请求成功
            }
        }
    }];
```

方式二：
```
id<CSHttpTask> httpTask = CSHttpServiceSugar.build([NSURL URLWithString:@"https://www.baidu.com"]).method(CSHTTPMethodGET).submit(^(NSData *responseData, NSError *error){
    NSString *responseString = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
    NSLog(@"%@", responseString);
});

```

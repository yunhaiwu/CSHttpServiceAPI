# CSHttpServiceAPI

### 1、概述

### 2、使用
- 安装
	* 要求
		1. ARC支持
		2. iOS 7.0+
		3. CocoaService (1.0+)
	* CocoaPods
	
		```
		在Podfile 文件头部添加：
		source：https://github.com/yunhaiwu/ios-wj-framework-		cocoapods-specs.git

		//HTTP服务API
		pod 'CSHttpServiceAPI'
		```

- 示例
	* 方式一：
	
	```
    id<CSHttpService> httpService = [[[CocoaService sharedInstance] applicationContext] getService:@protocol(CSHttpService)];
    id<CSHttpTask> task = [httpService request:request
                                 responseClass:[SimpleResponseObject class]
                                 responseBlock:^(id<CSHttpResponse> response, NSError *error) {
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

	* 方式二：

	```
	id<CSHttpTask> httpTask = CSHttpServiceBuilder.GET([NSURL URLWithString:@"https://www.testexample.com"]).submit(^(NSData *responseData, NSError *error){
        NSString *responseString = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
        NSLog(@"%@", responseString);
    });
	```

# CSHttpServiceAPI

### 1、概述

- 描述
    * 基于CocoaService容器提供HTTP服务API，解决业务层直接依赖第三方库的耦合问题。第三方库由于有大版本升级和API变更，导致业务层大量修改和测试问题。

- 特点
    * 拦截器插件
    * 数据统一解析和错误处理
    * 调用更简单

### 2、使用
- 安装
	* 要求
		1. ARC支持
		2. iOS 7.0+
		3. CocoaService (1.0+)
	* CocoaPods
	
	```
		在Podfile 文件头部添加：
		source：https://github.com/yunhaiwu/ios-wj-framework-cocoapods-specs.git

		//HTTP服务API
		pod 'CSHttpServiceAPI'
	```

- 示例
	* 方式一：
	
	```
    id<CSHttpService> httpService = CSGetService(@protocol(CSHttpService));
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
	id<CSHttpTask> httpTask = CSHttpServiceBuilder.GET([NSURL URLWithString:@"https://www.testexample.com"]).buildAndSubmit(^(NSData *responseData, NSError *error){
        NSString *responseString = [[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding];
        NSLog(@"%@", responseString);
    });
	```

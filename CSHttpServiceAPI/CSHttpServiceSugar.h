//
//  CSHttpServiceSugar.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpRequest.h"
#import "CSHttpTask.h"
#import "CSHttpService.h"

NS_ASSUME_NONNULL_BEGIN

/*
 Http 服务语法糖（函数式调用）
 */
@interface CSHttpServiceSugar : NSObject

+ (CSHttpServiceSugar*(^)(NSURL *url))build;

- (id<CSHttpTask>(^)(CSHttpServiceResponseDataBlock responseDataBlock))submit;

- (CSHttpServiceSugar*(^)(CSHTTPMethod method))method;

- (CSHttpServiceSugar*(^)(NSDictionary<NSString* ,NSString*> *headers))headers;

- (CSHttpServiceSugar*(^)(NSString *key, NSString *value))addHeader;

- (CSHttpServiceSugar*(^)(NSDictionary<NSString*, NSObject*> *params))params;

- (CSHttpServiceSugar*(^)(NSString *key, NSObject *value))addParam;

- (CSHttpServiceSugar*(^)(int timeoutDuration))timeoutDuration;

- (CSHttpServiceSugar*(^)(NSArray<CSHttpFileUploadModel*> *uploadFiles))uploadFiles;

- (CSHttpServiceSugar*(^)(CSHttpFileUploadModel *uploadFile))addUploadFile;

@end

NS_ASSUME_NONNULL_END

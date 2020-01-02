//
//  CSHttpServiceBuilder.h
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
@interface CSHttpServiceBuilder : NSObject

/*
 GET
 */
+ (CSHttpServiceBuilder* (^)(NSURL *url))GET;

/*
 POST
 */
+ (CSHttpServiceBuilder* (^)(NSURL *url))POST;

/*
 PUT
 */
+ (CSHttpServiceBuilder* (^)(NSURL *url))PUT;

/*
 DELETE
 */
+ (CSHttpServiceBuilder* (^)(NSURL *url))DELETE;

/*
 PATCH
 */
+ (CSHttpServiceBuilder* (^)(NSURL *url))PATCH;

/*
 http 请求头
 */
- (CSHttpServiceBuilder*(^)(NSDictionary<NSString* ,NSString*> *headers))headers;

/*
 添加请求头
 */
- (CSHttpServiceBuilder*(^)(NSString *key, NSString *value))addHeader;

/*
 http 参数
 */
- (CSHttpServiceBuilder*(^)(NSDictionary<NSString*, NSObject*> *params))params;

/*
 添加参数
 */
- (CSHttpServiceBuilder*(^)(NSString *key, NSObject *value))addParam;

/*
 超时时间
 */
- (CSHttpServiceBuilder*(^)(int timeoutDuration))timeoutDuration;

/*
 上传文件
 */
- (CSHttpServiceBuilder*(^)(NSArray<CSHttpFileUploadModel*> *uploadFiles))uploadFiles;

/*
 添加上传文件
 */
- (CSHttpServiceBuilder*(^)(CSHttpFileUploadModel *uploadFile))addUploadFile;

/*
 提交
 */
- (id<CSHttpTask>(^)(CSHttpServiceResponseDataBlock responseDataBlock))submit;

@end

NS_ASSUME_NONNULL_END

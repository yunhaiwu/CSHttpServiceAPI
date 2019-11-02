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

/*
 GET
 */
+ (CSHttpServiceSugar* (^)(NSURL *url))GET;

/*
 POST
 */
+ (CSHttpServiceSugar* (^)(NSURL *url))POST;

/*
 PUT
 */
+ (CSHttpServiceSugar* (^)(NSURL *url))PUT;

/*
 DELETE
 */
+ (CSHttpServiceSugar* (^)(NSURL *url))DELETE;

/*
 PATCH
 */
+ (CSHttpServiceSugar* (^)(NSURL *url))PATCH;

/*
 http 请求头
 */
- (CSHttpServiceSugar*(^)(NSDictionary<NSString* ,NSString*> *headers))headers;

/*
 添加请求头
 */
- (CSHttpServiceSugar*(^)(NSString *key, NSString *value))addHeader;

/*
 http 参数
 */
- (CSHttpServiceSugar*(^)(NSDictionary<NSString*, NSObject*> *params))params;

/*
 添加参数
 */
- (CSHttpServiceSugar*(^)(NSString *key, NSObject *value))addParam;

/*
 超时时间
 */
- (CSHttpServiceSugar*(^)(int timeoutDuration))timeoutDuration;

/*
 上传文件
 */
- (CSHttpServiceSugar*(^)(NSArray<CSHttpFileUploadModel*> *uploadFiles))uploadFiles;

/*
 添加上传文件
 */
- (CSHttpServiceSugar*(^)(CSHttpFileUploadModel *uploadFile))addUploadFile;

/*
 提交
 */
- (id<CSHttpTask>(^)(CSHttpServiceResponseDataBlock responseDataBlock))submit;

@end

NS_ASSUME_NONNULL_END

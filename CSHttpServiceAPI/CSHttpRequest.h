//
//  CSHttpRequest.h
//  CocoaService-HttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpFileUpload.h"

typedef NS_ENUM(NSInteger, CSHTTPMethod) {
    CSHTTPMethodGET = 0,
    CSHTTPMethodPOST = 1,
    CSHTTPMethodPUT = 2,
    CSHTTPMethodDELETE = 3,
    CSHTTPMethodTRACE = 4,
    CSHTTPMethodOPTIONS = 5,
    CSHTTPMethodLOCK = 6,
    CSHTTPMethodMKCOL = 7,
    CSHTTPMethodCOPY = 8,
    CSHTTPMethodMOVE = 9,
};

@protocol CSHttpRequest <NSObject>

/**
 请求url
 */
- (NSURL*)url;

/**
 请求方法
 */
- (CSHTTPMethod)method;

/**
 请求头
 */
- (NSDictionary*)headers;

/**
 请求参数
 */
- (NSDictionary*)params;

/**
 超时时长
 */
- (int)timeoutDuration;

/**
 上传文件
 */
- (NSArray<CSHttpFileUpload*>*) uploadFiles;

/**
 验证参数
 */
- (void)validateParamsByError:(NSError**)error;


@end

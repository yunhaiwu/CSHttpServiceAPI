//
//  CSHttpRequest.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpFileUploadModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CSHTTPMethod) {
    
    CSHTTPMethodGET = 0,
    
    CSHTTPMethodPOST,
    
    CSHTTPMethodPUT,
    
    CSHTTPMethodDELETE,
    
    CSHTTPMethodPATCH,
};

@protocol CSHttpRequest <NSObject>

/**
 请求url
 */
- (NSURL*_Nullable)url;

@optional
/**
 请求方法
 deault GET
 */
- (CSHTTPMethod)method;

/**
 请求头
 */
- (NSDictionary<NSString*, NSString*>*_Nullable)headers;

/**
 请求参数
 */
- (NSDictionary<NSString*, NSObject*>*_Nullable)params;

/**
 超时时长(秒)
 default 30
 */
- (int)timeoutDurationBySeconds;

/**
 上传文件
 */
- (NSArray<CSHttpFileUploadModel*>*_Nullable)uploadFiles;

/**
 验证参数
 */
- (void)validateParamsByError:(NSError*_Nullable*_Nullable)error;


@end

NS_ASSUME_NONNULL_END

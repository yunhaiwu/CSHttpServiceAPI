//
//  CSHttpResponse.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpRequest.h"

@protocol CSHttpResponse <NSObject>

/*
 响应数据
 */
@property (nonatomic, copy) NSData * _Nonnull responseData;

/*
 构建响应对象
 */
+ (id<CSHttpResponse>_Nullable)createResponseWithData:(NSData*_Nullable)responseData;


@optional

/*
 是否出现逻辑错误，子类判断
 */
- (BOOL)isError;

/*
 服务端返回的逻辑错误码
 */
- (NSString*_Nullable)errorCode;

/*
 服务端返回的逻辑错误说明
 */
- (NSString*_Nullable)errorMessage;

@end

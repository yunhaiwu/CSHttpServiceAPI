//
//  CSHttpServiceInterceptor.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpRequest.h"
#import "CSHttpResponse.h"

NS_ASSUME_NONNULL_BEGIN

/*
 http 服务拦截器
 */
@protocol CSHttpServiceInterceptor <NSObject>

/*
 请求响应前
 */
- (BOOL)preRequestHandle:(id<CSHttpRequest>)request;

/*
 请求响应后
 */
- (void)afterResponseHandle:(id<CSHttpResponse>)response;

@end

NS_ASSUME_NONNULL_END

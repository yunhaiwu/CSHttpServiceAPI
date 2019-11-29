//
//  CSHttpServiceInterceptor.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpContext.h"

NS_ASSUME_NONNULL_BEGIN

/*
 Http Service拦截器
 */
@protocol CSHttpServiceInterceptor <NSObject>

@optional

/*
 请求响应前
 */
- (BOOL)preRequestHandle:(id<CSHttpContext>)context;

/*
 请求响应后
 */
- (void)afterResponseHandle:(id<CSHttpContext>)context;

@end

NS_ASSUME_NONNULL_END

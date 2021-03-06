//
//  CSHttpServiceConfig.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//最大并发数
#ifndef CSHttpServiceDefaultMaxConcurrentNumber
    #define CSHttpServiceDefaultMaxConcurrentNumber     5
#endif

//默认超时时间（以秒为单位）
#ifndef CSHttpServiceDefaultTimeoutBySeconds
    #define CSHttpServiceDefaultTimeoutBySeconds        30
#endif

/*
 服务配置
 */
@protocol CSHttpServiceConfig <NSObject>

/*
 服务最大并发数
 default 5
 */
- (NSUInteger)maxConcurrentNumber;

/*
 默认超时时长
 default 30 seconds
 */
- (int)defaultTimeoutBySeconds;

@end

NS_ASSUME_NONNULL_END

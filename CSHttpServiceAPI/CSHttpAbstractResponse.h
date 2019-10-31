//
//  CSHttpAbstractResponse.h
//  CocoaService-HttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpResponse.h"

NS_ASSUME_NONNULL_BEGIN

/*
HTTP 响应抽象类
*/
@interface CSHttpAbstractResponse : NSObject<CSHttpResponse>

/*
 响应数据
 */
@property (nonatomic, copy) NSData *responseData;

/*
 子类重写
 */
+ (id<CSHttpResponse>)buildResponseWithString:(NSString*)responseString;

@end

NS_ASSUME_NONNULL_END

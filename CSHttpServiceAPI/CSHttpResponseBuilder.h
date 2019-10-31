//
//  CSHttpResponseBuilder.h
//  CocoaService-HttpService-example
//
//  Created by wuyunhai on 2019/10/29.
//  Copyright © 2019 wuyunhai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface CSHttpResponseBuilder : NSObject

+ (id<CSHttpResponse>)buildResponseWithData:(NSData*)responseData responseClass:(Class<CSHttpResponse>)responseClass;

@end

NS_ASSUME_NONNULL_END

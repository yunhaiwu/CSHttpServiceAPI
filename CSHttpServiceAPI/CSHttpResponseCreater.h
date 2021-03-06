//
//  CSHttpResponseCreater.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface CSHttpResponseCreater : NSObject

+ (id<CSHttpResponse>)createResponseWithData:(NSData*)responseData responseClass:(Class<CSHttpResponse>)responseClass;

@end

NS_ASSUME_NONNULL_END

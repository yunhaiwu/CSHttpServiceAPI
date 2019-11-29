//
//  CSHttpContext.h
//  CocoaService-HttpService-example
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSHttpRequest.h"
#import "CSHttpResponse.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CSHttpContext <NSObject>

- (id<CSHttpRequest> _Nullable)httpRequest;

- (id<CSHttpResponse> _Nullable)httpResponse;

@end

NS_ASSUME_NONNULL_END

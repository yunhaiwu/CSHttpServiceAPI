//
//  CSHttpService.h
//  CocoaService-HttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CocoaService/CSService.h>
#import "CSHttpRequest.h"
#import "CSHttpResponse.h"

typedef void(^CSHttpServiceResponseBlock)(id<CSHttpResponse> response, NSError *error);

typedef void(^CSHttpServiceResponseDataBlock)(NSData *responseData, NSError *error);

typedef void (^CSHttpServiceDownloadResponseBlock)(NSString* filePath, NSError *error);

typedef void (^CSHttpServiceProgressBlock)(float progress);

/*
 HTTP 服务接口
 */
@protocol CSHttpService <CSService>

- (void)request:(id<CSHttpRequest> _Nonnull)request
  responseClass:(Class)resClass
  responseBlock:(CSHttpServiceResponseBlock)responseBlock;


- (void)requestWithURL:(NSURL* _Nonnull)url
                method:(CSHTTPMethod)method
                params:(NSDictionary<NSString*, NSObject*>*)params
               headers:(NSDictionary<NSString*, NSString*>*)headers
         responseBlock:(CSHttpServiceResponseDataBlock) responseBlock;


- (void)downloadWithURL:(NSURL* _Nonnull)url
          responseBlock:(CSHttpServiceDownloadResponseBlock)downloadResponseBlock
               progress:(CSHttpServiceProgressBlock)progressBlock;

@end

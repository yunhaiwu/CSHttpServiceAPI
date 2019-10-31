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
#import "CSHttpTask.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^CSHttpServiceResponseBlock)(id<CSHttpResponse> _Nullable response, NSError * _Nullable error);

typedef void(^CSHttpServiceResponseDataBlock)(NSData * _Nullable responseData, NSError * _Nullable error);

typedef void (^CSHttpServiceDownloadResponseBlock)(NSString* _Nullable filePath, NSError * _Nullable error);

typedef void (^CSHttpServiceProgressBlock)(float progress);

/*
 HTTP 服务接口
 */
@protocol CSHttpService <CSService>

- (id<CSHttpTask> _Nullable)request:(id<CSHttpRequest>)request
  responseClass:(Class)resClass
  responseBlock:(CSHttpServiceResponseBlock)responseBlock;


- (id<CSHttpTask> _Nullable)requestWithURL:(NSURL*)url
                method:(CSHTTPMethod)method
                params:(NSDictionary<NSString*, NSObject*>* _Nullable)params
               headers:(NSDictionary<NSString*, NSString*>* _Nullable)headers
         responseBlock:(CSHttpServiceResponseDataBlock) responseBlock;


- (id<CSHttpTask> _Nullable)downloadWithURL:(NSURL*)url
          responseBlock:(CSHttpServiceDownloadResponseBlock)downloadResponseBlock
               progress:(CSHttpServiceProgressBlock _Nullable)progressBlock;

@end

NS_ASSUME_NONNULL_END

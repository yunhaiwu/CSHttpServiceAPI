//
//  CSHttpAbstractRequest.m
//  CocoaService-HttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import "CSHttpAbstractRequest.h"
#import <CocoaService/CocoaService.h>
#import "CSHttpServiceConfig.h"

@implementation CSHttpAbstractRequest

- (NSURL*)url {
    return nil;
}

- (CSHTTPMethod)method {
    return CSHTTPMethodGET;
}

- (NSDictionary*)headers {
    return nil;
}

- (NSDictionary*)params {
    return nil;
}

- (int)timeoutDuration {
    id<CSHttpServiceConfig> httpServiceConfig = [[[CocoaService sharedInstance] applicationContext] fetchService:@protocol(CSHttpServiceConfig)];
    if (httpServiceConfig) {
        return [httpServiceConfig defaultTimeoutBySeconds];
    }
    return CSHttpServiceDefaultTimeoutBySeconds;
}

- (NSArray<CSHttpFileUpload*>*) uploadFiles {
    return nil;
}

- (void)validateParamsByError:(NSError**)error {}

@end

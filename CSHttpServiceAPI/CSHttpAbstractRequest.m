//
//  CSHttpAbstractRequest.m
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import "CSHttpAbstractRequest.h"
#import <CocoaService/CocoaService.h>

@implementation CSHttpAbstractRequest

- (NSURL*)url {
    return nil;
}

- (CSHTTPMethod)method {
    return CSHTTPMethodGET;
}

- (NSDictionary<NSString *,NSString *> *)headers {
    return nil;
}

- (NSDictionary<NSString *,NSObject *> *)params {
    return nil;
}

@end

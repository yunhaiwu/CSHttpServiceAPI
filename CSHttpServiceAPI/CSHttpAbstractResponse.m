//
//  CSHttpAbstractResponse.m
//  CocoaService-HttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import "CSHttpAbstractResponse.h"

@implementation CSHttpAbstractResponse

+(id<CSHttpResponse>) buildResponseByData:(NSData*) responseData {
    id<CSHttpResponse> response = nil;
    if ([responseData length]) {
        response = [self buildResponseByString:[[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding]];
        [response setResponseData:responseData];
    }
    return response;
}

+(id<CSHttpResponse>) buildResponseByString:(NSString*)responseDataStr {
    return nil;
}

- (BOOL)isError {
    return NO;
}

- (NSString*)errorCode {
    return nil;
}

- (NSString*)errorMessage {
    return nil;
}

@end

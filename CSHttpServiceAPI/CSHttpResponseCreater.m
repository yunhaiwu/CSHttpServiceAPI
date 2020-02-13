//
//  CSHttpResponseCreater.m
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import "CSHttpResponseCreater.h"
#import "CSHttpAbstractResponse.h"

@interface CSHttpResponseDataParseErrorResponse : CSHttpAbstractResponse

@end

@implementation CSHttpResponseDataParseErrorResponse

- (BOOL)isError {
    return YES;
}

- (NSString *)errorCode {
    return @"-10000";
}

- (NSString *)errorMessage {
    return @"数据解析错误~";
}

@end

@implementation CSHttpResponseCreater

+ (id<CSHttpResponse>)createResponseWithData:(NSData *)responseData responseClass:(Class<CSHttpResponse>)responseClass {
    id<CSHttpResponse> response = nil;
    @try {
        response = [responseClass createResponseWithData:responseData];
    } @catch (NSException *exception) {
        response = [[CSHttpResponseDataParseErrorResponse alloc] init];
    } @finally {
        [response setResponseData:responseData];
    }
    return response;
}

@end

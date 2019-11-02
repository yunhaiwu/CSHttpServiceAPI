//
//  CSHttpServiceSugar.m
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import "CSHttpServiceSugar.h"
#import <CocoaService/CocoaService.h>

@interface CSHttpServiceSugar ()

@property (nonatomic, copy) NSURL *url;

@property (nonatomic, assign) CSHTTPMethod httpMethod;

@property (nonatomic, strong) NSMutableDictionary<NSString*, NSString*> *httpHeaders;

@property (nonatomic, strong) NSMutableDictionary<NSString*, NSObject*> *httpParams;

@property (nonatomic, strong) NSMutableArray *httpUploadFiles;

@property (nonatomic, assign) int httpTimeoutDuration;

@end

@implementation CSHttpServiceSugar

- (NSMutableDictionary<NSString*, NSString*> *)httpHeaders {
    if (!_httpHeaders) {
        _httpHeaders = [NSMutableDictionary new];
    }
    return _httpHeaders;
}

- (NSMutableDictionary<NSString*, NSObject*> *)httpParams {
    if (!_httpParams) {
        _httpParams = [NSMutableDictionary new];
    }
    return _httpParams;
}

- (NSMutableArray<CSHttpFileUploadModel*> *)httpUploadFiles {
    if (!_httpUploadFiles) {
        _httpUploadFiles = [NSMutableArray new];
    }
    return _httpUploadFiles;
}

- (instancetype)initWithURL:(NSURL*)url method:(CSHTTPMethod)method {
    self = [super init];
    if (self) {
        self.url = url;
        _httpMethod = method;
    }
    return self;
}

+ (CSHttpServiceSugar* (^)(NSURL *url))GET {
    return ^(NSURL *url) {
        CSHttpServiceSugar *sugar = [[CSHttpServiceSugar alloc] initWithURL:url method:CSHTTPMethodGET];
        return sugar;
    };
}

+ (CSHttpServiceSugar* (^)(NSURL *url))POST {
    return ^(NSURL *url) {
        CSHttpServiceSugar *sugar = [[CSHttpServiceSugar alloc] initWithURL:url method:CSHTTPMethodPOST];
        return sugar;
    };
}

+ (CSHttpServiceSugar* (^)(NSURL *url))PUT {
    return ^(NSURL *url) {
        CSHttpServiceSugar *sugar = [[CSHttpServiceSugar alloc] initWithURL:url method:CSHTTPMethodPUT];
        return sugar;
    };
}

+ (CSHttpServiceSugar* (^)(NSURL *url))DELETE {
    return ^(NSURL *url) {
        CSHttpServiceSugar *sugar = [[CSHttpServiceSugar alloc] initWithURL:url method:CSHTTPMethodDELETE];
        return sugar;
    };
}

+ (CSHttpServiceSugar* (^)(NSURL *url))PATCH {
    return ^(NSURL *url) {
        CSHttpServiceSugar *sugar = [[CSHttpServiceSugar alloc] initWithURL:url method:CSHTTPMethodPATCH];
        return sugar;
    };
}

- (id<CSHttpTask> (^)(CSHttpServiceResponseDataBlock responseDataBlock))submit {
    return ^(CSHttpServiceResponseDataBlock responseDataBlock) {
        id<CSHttpService> httpService = [[[CocoaService sharedInstance] applicationContext] fetchService:@protocol(CSHttpService)];
        return [httpService requestWithURL:self.url method:self.httpMethod params:self.httpParams headers:self.httpHeaders responseBlock:responseDataBlock];
    };
}

- (CSHttpServiceSugar*(^)(NSDictionary<NSString*, NSString*> *headers))headers {
    return ^(NSDictionary<NSString*, NSString*> *headers) {
        if ([headers count]) {
            [self.httpHeaders addEntriesFromDictionary:headers];
        }
        return self;
    };
}

- (CSHttpServiceSugar*(^)(NSString *key, NSString *value))addHeader {
    return ^(NSString *key, NSString *value) {
        if (key && value) {
            self.httpHeaders[key] = value;
        }
        return self;
    };
}

- (CSHttpServiceSugar*(^)(NSDictionary<NSString*, NSObject*> *params))params {
    return ^(NSDictionary<NSString*, NSObject*> *params) {
        if ([params count]) {
            [self.httpParams addEntriesFromDictionary:params];
        }
        return self;
    };
}

- (CSHttpServiceSugar*(^)(NSString *key, NSObject *value))addParam {
    return ^(NSString *key, NSObject *value) {
        if (key && value) {
            self.httpParams[key] = value;
        }
        return self;
    };
}

- (CSHttpServiceSugar*(^)(int timeoutDuration))timeoutDuration {
    return ^(int timeoutDuration) {
        self.httpTimeoutDuration = timeoutDuration;
        return self;
    };
}

- (CSHttpServiceSugar*(^)(NSArray<CSHttpFileUploadModel*> *uploadFiles))uploadFiles {
    return ^(NSArray<CSHttpFileUploadModel*> *uploadFiles) {
        if ([uploadFiles count]) {
            [self.httpUploadFiles addObjectsFromArray:uploadFiles];
        }
        return self;
    };
}

- (CSHttpServiceSugar*(^)(CSHttpFileUploadModel *uploadFile))addUploadFile {
    return ^(CSHttpFileUploadModel *uploadFile) {
        if (uploadFile) {
            [self.httpUploadFiles addObject:uploadFile];
        }
        return self;
    };
}

@end

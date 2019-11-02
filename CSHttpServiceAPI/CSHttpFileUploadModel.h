//
//  CSHttpFileUploadModel.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

__attribute__((objc_subclassing_restricted))
@interface CSHttpFileUploadModel : NSObject

@property(nonatomic, copy) NSString * _Nullable requestKey;

//mime type
@property(nonatomic, copy) NSString * _Nullable mimeType;

//文件路径
@property(nonatomic, copy) NSString * _Nullable filePath;

//文件名
@property(nonatomic, copy) NSString * _Nullable fileName;

- (instancetype)initWithRequestKey:(NSString* _Nullable)requestKey mimeType:(NSString* _Nullable)mimeType fileName:(NSString* _Nullable)fileName filePath:(NSString* _Nullable)filePath;

/*
 文件是否存在
 */
- (BOOL)fileExist;

@end

NS_ASSUME_NONNULL_END

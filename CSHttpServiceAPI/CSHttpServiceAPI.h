//
//  CSHttpServiceAPI.h
//  CSHttpServiceAPI
//
//  Created by 吴云海
//  Copyright © 2018年 yunhai.wu. All rights reserved.
//

#ifndef CSHttpServiceAPI_h
#define CSHttpServiceAPI_h

#import "CSHttpService.h"
#import "CSHttpServiceInterceptor.h"
#import "CSHttpServiceConfig.h"
#import "CSHttpAbstractRequest.h"
#import "CSHttpAbstractResponse.h"
#import "CSHttpResponseCreater.h"
#import "CSHttpServiceBuilder.h"

#ifndef CSHttpServiceObject
    #define CSHttpServiceObject         [[[CocoaService sharedInstance] applicationContext] getService:@protocol(CSHttpService)]
#endif

#endif /* CSHttpServiceAPI_h */

//
//  ViewController.m
//  CocoaService-HttpService-example
//
//  Created by wuyunhai on 2019/10/16.
//  Copyright © 2019 wuyunhai. All rights reserved.
//

#import "ViewController.h"
#import <CocoaService/CocoaService.h>
#import "CSHttpServiceAPI.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"CSHttpService-Demo";
    
    id<CSHttpRequest> request = nil;
    id<CSHttpService> httpService = [[[CocoaService sharedInstance] applicationContext] fetchService:@protocol(CSHttpService)];
//    id<CSHttpTask> task = [httpService request:request responseClass:[SimpleResponseObject class] responseBlock:^(id<CSHttpResponse> response, NSError *error) {
//        if (error) {
//            //处理网络环境错误
//        } else {
//            if ([response isError]) {
//                //接口数据逻辑错误
//            } else {
//                //请求成功
//            }
//        }
//    }];
}


@end

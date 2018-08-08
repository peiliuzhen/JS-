//
//  AppJSObject.m
//  JSDemo
//
//  Created by plz on 2017/12/5.
//  Copyright © 2017年 XiaomaTV. All rights reserved.
//

#import "AppJSObject.h"

@implementation AppJSObject

-(void)scan:(NSString *)message{
    NSLog(@"%@",message);
    [self.delegate scan:message];
}

@end

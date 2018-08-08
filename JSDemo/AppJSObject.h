//
//  AppJSObject.h
//  JSDemo
//
//  Created by plz on 2017/12/5.
//  Copyright © 2017年 XiaomaTV. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

@protocol AppJSObjectDelegate <JSExport>

-(void)scan:(NSString *)message;

@end

@interface AppJSObject : NSObject<AppJSObjectDelegate>

@property(nonatomic,weak) id<AppJSObjectDelegate> delegate;

@end

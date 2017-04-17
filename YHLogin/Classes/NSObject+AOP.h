//
//  NSObject+AOP.h
//  AOP权限控制
//
//  Created by qianfeng on 15/12/23.
//  Copyright (c) 2015年 苏威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (AOP)
+(void)aop_methodChangeWithOld:(SEL)oldMethod andNew:(SEL)newMethod;
@end

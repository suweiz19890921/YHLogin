//
//  NSObject+AOP.m
//  AOP权限控制
//
//  Created by qianfeng on 15/12/23.
//  Copyright (c) 2015年 苏威. All rights reserved.
//

#import "NSObject+AOP.h"
#import <objc/runtime.h>
@implementation NSObject (AOP)
+(void)aop_methodChangeWithOld:(SEL)oldMethod andNew:(SEL)newMethod{
    Method old=class_getInstanceMethod([self class], oldMethod);
    Method new=class_getInstanceMethod([self class], newMethod);
    method_exchangeImplementations(old, new);
    
}

@end

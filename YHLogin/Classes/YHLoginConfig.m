//
//  YHLoginConfig.m
//  TestPod
//
//  Created by 苏威 on 2017/4/18.
//  Copyright © 2017年 苏威. All rights reserved.
//

#import "YHLoginConfig.h"
#import <ShareSDK/ShareSDK.h>
#import <ShareSDK2/WXApi.h>
#define YHSHAREAPPID @"133ae01fb8cf3"
#define YHWECHATAPPID @"wxbe0ad38452785d01"
#define YHWECHATSECRET @"022865bf3031d5cac78b203d140344c8"

#define YHFACEBOOKAPPID @"689916774464925"
#define YHFACEBOOKSECRET @"696fa0e83a2b3220d15021864a2049ca"
@implementation YHLoginConfig

+ (void)loginParamsConfig {
    [ShareSDK registerApp:YHSHAREAPPID];
    [ShareSDK connectWeChatWithAppId:YHWECHATAPPID
                           appSecret:YHWECHATSECRET
                           wechatCls:[WXApi class]];
    [ShareSDK connectFacebookWithAppKey:YHFACEBOOKAPPID appSecret:YHFACEBOOKSECRET];

}

+ (void)cancelAuthWithType:(YHShareType)shareType {
    [ShareSDK cancelAuthWithType:shareType];
}

+ (BOOL)hasAuthWithType:(YHShareType)shareType {
    BOOL isAuth = [ShareSDK hasAuthorizedWithType:shareType];
    return isAuth;
}
    
+ (void)getUserInfoWithType:(YHShareType)shareType callBack:(void (^)(YHAuthStatu))callBack {
    [self authWithType:shareType callBack:callBack];
}
    
+ (void)authWithType:(YHShareType)shareType callBack:(void (^)(YHAuthStatu))callBack
    {
      
        [ShareSDK getUserInfoWithType:shareType authOptions:nil result:^(BOOL result, id<ISSPlatformUser> userInfo, id<ICMErrorInfo> error) {
            NSLog(@"%@",userInfo);
            //!callBack ?: callBack(state);
        }];
}
@end

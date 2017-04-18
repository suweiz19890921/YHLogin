//
//  YHLoginConfig.h
//  TestPod
//
//  Created by 苏威 on 2017/4/18.
//  Copyright © 2017年 苏威. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum
{
    YHShareTypeSinaWeibo = 1,         /**< 新浪微博 */
    YHShareTypeTencentWeibo = 2,      /**< 腾讯微博 */
    YHShareTypeDouBan = 5,            /**< 豆瓣社区 */
    YHShareTypeQQSpace = 6,           /**< QQ空间 */
    YHShareTypeRenren = 7,            /**< 人人网 */
    YHShareTypeKaixin = 8,            /**< 开心网 */
    YHShareTypePengyou = 9,           /**< 朋友网 */
    YHShareTypeFacebook = 10,         /**< Facebook */
    YHShareTypeTwitter = 11,          /**< Twitter */
    YHShareTypeEvernote = 12,         /**< 印象笔记 */
    YHShareTypeFoursquare = 13,       /**< Foursquare */
    YHShareTypeGooglePlus = 14,       /**< Google＋ */
    YHShareTypeInstagram = 15,        /**< Instagram */
    YHShareTypeLinkedIn = 16,         /**< LinkedIn */
    YHShareTypeTumblr = 17,           /**< Tumbir */
    YHShareTypeMail = 18,             /**< 邮件分享 */
    YHShareTypeSMS = 19,              /**< 短信分享 */
    YHShareTypeAirPrint = 20,         /**< 打印 */
    YHShareTypeCopy = 21,             /**< 拷贝 */
    YHShareTypeWeixiSession = 22,     /**< 微信好友 */
    YHShareTypeWeixiTimeline = 23,    /**< 微信朋友圈 */
    YHShareTypeQQ = 24,               /**< QQ */
    YHShareTypeInstapaper = 25,       /**< Instapaper */
    YHShareTypePocket = 26,           /**< Pocket */
    YHShareTypeYouDaoNote = 27,       /**< 有道云笔记 */
    YHShareTypePinterest = 30,        /**< Pinterest */
    YHShareTypeFlickr = 34,           /**< Flickr */
    YHShareTypeDropbox = 35,          /**< Dropbox */
    YHShareTypeVKontakte = 36,        /**< VKontakte */
    YHShareTypeWeixiFav = 37,         /**< 微信收藏 */
    YHShareTypeYiXinSession = 38,     /**< 易信好友 */
    YHShareTypeYiXinTimeline = 39,    /**< 易信朋友圈 */
    YHShareTypeYiXinFav = 40,         /**< 易信收藏 */
    YHShareTypeMingDao = 41,          /**< 明道 */
    YHShareTypeLine = 42,             /**< Line */
    YHShareTypeWhatsApp = 43,         /**< Whats App */
    YHShareTypeKaKaoTalk = 44,        /**< KaKao Talk */
    YHShareTypeKaKaoStory = 45,       /**< KaKao Story */
    YHShareTypeAliPaySocial = 50,     /**< 支付宝 */
    YHShareTypeOther = -1,            /**< > */
    YHShareTypeAny = 99               /**< 任意平台 */
}
YHShareType;

typedef enum
{
    YHSSAuthStateBegan = 0, /**< 开始 */
    YHSSAuthStateSuccess = 1, /**< 成功 */
    YHSSAuthStateFail = 2, /**< 失败 */
    YHSSAuthStateCancel = 3 /**< 取消 */
}
YHAuthStatu;

@interface YHLoginConfig : NSObject

+ (void)loginParamsConfig;
    
+ (void)getUserInfoWithType:(YHShareType)shareType callBack:(void(^)(YHAuthStatu statu))callBack;
@end

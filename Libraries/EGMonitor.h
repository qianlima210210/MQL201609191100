//
//  EGMonitor.h
//
//  Created by MQL on 15/5/22.
//  Copyright (c) 2015年 MQL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface EGMonitor : NSObject

/**
 *  设置是否调试模式，默认非调试模式
 *
 *  @param value 设置为YES，切换至调试模式，SDK会将统计数据发送到回传测试服务器；
 *  设置为NO，切换至发布模式，SDK会将统计数据发送到正式服务器。记得release产品时要设置回NO。
 *
 *  必须在startWithAppkey方法前调用。
 */
+(void)setDebugEnabled:(BOOL)value;

/**
 *  设置是否打印sdk的log信息，默认不开启
 *
 *  @param value 设置为YES, sdk 会输出log信息, 记得release产品时要设置回NO.
 */
+(void)setLogEnabled:(BOOL)value;

/** 开启统计
 @param appKey 易观appKey.
 @param channelId 渠道名称,为nil或@""时, 默认为@"App Store"渠道
 @return void
 */
+ (void)startWithAppkey:(NSString *)appKey channelId:(NSString *)cid;

/**
 *  设置应用用户标识
 *
 *  @param applicationUserId
 */
+(void)setApplicationUserId:(NSString*)applicationUserId;

/**
 * 页面时长统计
 *
 *  @param pageName   页面名称(不能为nil或@"")
 *  @param contentTag 页面内容标签
 */
+ (void)beginLogPageView:(NSString *)pageName contentTag:(NSString*)contentTag;
+ (void)endLogPageView:(NSString *)pageName  contentTag:(NSString*)contentTag;

/**
 *  自定义事件统计.
 *
 *  @param eventID      事件ID(不能为nil或@"")
 *  @param eventName    事件名称
 *  @param eventPropertyDictionary 事件属性字典
 */
+ (void)eventID:(NSString *)eventID eventName:(NSString *)eventName eventPropertyDictionary:(NSDictionary*)eventPropertyDictionary;

/**
 *  网页信息统计入口
 *  request为webView请求
 *  如果request里包含统计信息，返回YES
 */
+(BOOL)h5InfoStatEnterWithRequest:(NSURLRequest *)request webView:(UIWebView *)webView;

/**
 *  唤醒信息统计入口
 *  @param url
 *  @return 如果url里包含统计信息，返回YES
 */
+(BOOL)wakeupInfoStatEnterWithOpenURL:(NSURL*)url;


@end









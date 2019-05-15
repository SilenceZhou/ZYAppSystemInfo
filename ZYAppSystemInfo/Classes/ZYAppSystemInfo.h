//
//  ZYAppSystemInfo.h
//  Pods-ZYAppSystemInfo_Example
//
//  Created by zhouyun on 2019/5/13.


#import <Foundation/Foundation.h>
#import "ZYAppSystemInfoConst.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZYIMSI : NSObject

@property (nonatomic, copy)NSString * nationCode; /// 国家代码
@property (nonatomic, copy)NSString * mobieCode; /// 网络代码
@property (nonatomic, copy)NSString * carrierName; /// 运营商
@end


@interface ZYAppSystemInfo : NSObject


/**
 获取手机型号种类

 @return 手机类型 例如:iPhone XS Max
 */
+ (NSString *)zy_getDeviceType;

/**
 获取操作系统版本
 
 @return 12.1
 */
+ (NSString *)zy_getSystemVersion;


+ (NSString *)zy_appVersion;


/**
 获取当前网络状态
 
 @return 'no network'/'Wifi'
 */
+ (NSString *)zy_getNetconnType;


/**
 获取屏幕分辨率
 
 @return width x height
 */
+ (NSString *)zy_getScreenSize:(ScreenResolutionType)type;

/**
 获取本机运营商名称
 
 @return 中国移动/中国联通/中国电信/运营商/无运营商
 */
+ (NSString *)zy_serviceCompany;

/**
 获取IMSI部分信息
 
 @return ZYIMSI
 */

+ (ZYIMSI *)zy_getImsiPart;

/**
 应用运行占用的内存
 
 @return int64_t
 */

+ (int64_t)zy_getMemoryMB;

/**
 设备总内存
 
 @return int64_t
 */

+ (int64_t)zy_totalMemorySize;


/**
 获取CPU核心数
 
 @return NSInteger
 */

+ (NSInteger)zy_getCPUNum;

/**
 获取CPU类型
 
 @return CPU_TYPE_ARM、 CPU_TYPE_ARM64、 CPU_TYPE_X86、CPU_TYPE_X86_64
 */

+ (NSString *)zy_getCPUType;


/**
 是否被破解
 
 @return BOOL
 */
+ (BOOL)zy_isJailbreak;


/**
 是否越狱
 
 @return BOOL
 */

+ (BOOL)zy_jailbroken;

/**
 应用序列号，UUID可以替代
 
 ps: 获取UUID，删除重新安装会变，但如果有同一厂商的app，则不变
 
 @return NSString
 */
+ (NSString *)zy_getUUID;

/**
 获取应用安装与更新时间
 
 @return NSString
 */
+ (NSString *)zy_getAppCreateTime;


/**
 获取系统当前时间
 */
+ (NSString *)zy_getCurrentSystemTime;


/**
 获取当前通知状态是否打开
 */
+ (void)zy_checkNotificationHandler:(nullable void(^)(BOOL isOpenPush))handler;



+ (NSString * )zy_macString;

+ (NSString *)zy_idfaString;

+ (NSString *)zy_idfvString;

@end

NS_ASSUME_NONNULL_END

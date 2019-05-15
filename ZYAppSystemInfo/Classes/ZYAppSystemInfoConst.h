//
//  ZYAppSystemInfoConst.h
//  Pods
//
//  Created by zhouyun on 2019/5/13.
//

#import <Foundation/Foundation.h>

#ifndef ZYAppSystemInfoConst_h
#define ZYAppSystemInfoConst_h


/**
 IMSI 相关信息
 */
typedef struct {
    NSString * _Nullable nationCode; /// 国家代码
    NSString * _Nonnull mobieCode; /// 网络代码
    NSString * _Nullable carrierName; /// 运营商
}ZYIMSI;


/**
 屏幕分辨率
 
 下面以 iPhone XS Max为例 (高 x 宽)
 - ScreenResolutionType_actual: 物理分辨率 1242x2688
 - ScreenResolutionType_logic:  逻辑分辨率 414x896
 */
typedef NS_ENUM(NSUInteger, ScreenResolutionType) {
    ScreenResolutionType_physical,
    ScreenResolutionType_logic
};


#endif /* ZYAppSystemInfoConst_h */

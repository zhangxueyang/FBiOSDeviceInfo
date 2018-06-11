//
//  FBDeviceDataInfoLibrary.h
//  ClientTest
//
//  Created by 张学阳 on 2018/5/22.
//

#import <UIKit/UIKit.h>

@interface FBDeviceDataInfoLibrary : NSObject

+(instancetype)sharedDeviceDataInfoLibrary;

/** 获取设备名称 */
- (const NSString *)fb_getDiviceName;
/** 获取设备初始系统型号 */
- (const NSString *)fb_getInitialVersion;
/** 获取设备支持的最高系统型号 */
- (const NSString *)fb_getLatestVersion;
/** 获取设备电池容量，单位 mA 毫安 */
- (NSInteger)fb_getBatteryCapacity;
/** 获取电池电压，单位 V 福特 */
- (CGFloat)fb_getBatterVolocity;
/** 获取CPU处理器名称 */
- (const NSString *)fb_getCPUProcessor;

@end

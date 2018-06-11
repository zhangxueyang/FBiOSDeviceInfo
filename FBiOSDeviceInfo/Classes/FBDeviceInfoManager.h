//
//  FBDeviceInfoManager.h
//  ClientTest
//
//  Created by 张学阳 on 2018/5/22.
//

#import <Foundation/Foundation.h>

@interface FBDeviceInfoManager : NSObject

#pragma mark -------- 单例管理类
+(instancetype)sharedDevieInfoManager;


#pragma mark -------- HARDWARE INFO(硬件设备信息)
/** 获取设备型号 */
- (const NSString *)fb_getDeviceName;
/**  获取设备机主名字 **/
-(NSString *)fb_getDeviceUserName;
/** 获取设备装机时的系统版本（最低支持版本） */
- (const NSString *)fb_getInitialFirmware;
/** 获取设备可支持的最高系统版本 */
- (const NSString *)fb_getLatestFirmware;

/** 获取mac地址 */
- (NSString *)fb_getMacAddress;
/** 获取广告标识符 */
//- (NSString *)fb_getIDFA;
- (NSString *)fb_getDeviceModel;
/** 获取设备上次重启的时间 */
- (NSDate *)fb_getSystemUptime;


#pragma mark -------- 获取设备CPU信息
- (NSUInteger)fb_getCPUFrequency;
/** 获取总线程频率 */
- (NSUInteger)fb_getBusFrequency;
/** 获取当前设备主存 */
- (NSUInteger)fb_getRamSize;

- (NSString *)fb_getCPUProcessor;
/** 获取CPU数量 */
- (NSUInteger)fb_getCPUCount;
/** 获取CPU总的使用百分比 */
- (float)fb_getCPUUsage;
/** 获取单个CPU使用百分比 */
- (NSArray *)fb_getPerCPUUsage;



#pragma mark -------- DISK MEMORY(内存管理的内容)
/** 获取本 App 所占磁盘空间 */
- (NSString *)fb_getApplicationSize;
/** 获取磁盘总空间 */
- (int64_t)fb_getTotalDiskSpace;
/** 获取未使用的磁盘空间 */
- (int64_t)fb_getFreeDiskSpace;
/** 获取已使用的磁盘空间 */
- (int64_t)fb_getUsedDiskSpace;

/** 获取总内存空间 */
- (int64_t)fb_getTotalMemory;
/** 获取活跃的内存空间 */
- (int64_t)fb_getActiveMemory;
/** 获取不活跃的内存空间 */
- (int64_t)fb_getInActiveMemory;
/** 获取空闲的内存空间 */
- (int64_t)fb_getFreeMemory;
/** 获取正在使用的内存空间 */
- (int64_t)fb_getUsedMemory;
/** 获取存放内核的内存空间 */
- (int64_t)fb_getWiredMemory;
/** 获取可释放的内存空间 */
- (int64_t)fb_getPurgableMemory;
#pragma mark -------- 获取WiFi 信息


//获取WiFi 信息，返回的字典中包含了WiFi的名称、路由器的Mac地址、还有一个Data(转换成字符串打印出来是wifi名称)
//fetchSSIDInfo --- {
//    BSSID = "88:25:93:cd:f3:f6";
//    SSID = acxw;
//    SSIDDATA = <61637877>;
//}
- (NSDictionary *)fetchSSIDInfo;



@end

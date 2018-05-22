//
//  FBViewController.m
//  FBiOSDeviceInfo
//
//  Created by zhangxueyang on 05/22/2018.
//  Copyright (c) 2018 zhangxueyang. All rights reserved.
//

#import "FBViewController.h"
#import <FBiOSDeviceInfo/FBDeviceInfoManager.h>

@interface FBViewController ()

@end

@implementation FBViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSLog(@"---- %@",[[FBDeviceInfoManager sharedDevieInfoManager] fb_getDeviceName]);
    NSLog(@"---- %@",[[FBDeviceInfoManager sharedDevieInfoManager] fb_getDeviceUserName]);

}


@end

//
//  ZYViewController.m
//  ZYAppSystemInfo
//
//  Created by SilenceZhou on 05/13/2019.
//  Copyright (c) 2019 SilenceZhou. All rights reserved.
//

#import "ZYViewController.h"
#import "ZYAppSystemInfo.h"

@interface ZYViewController ()

@end

@implementation ZYViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
    NSLog(@"%@",NSStringFromCGRect([UIScreen mainScreen].bounds));
    
}

@end

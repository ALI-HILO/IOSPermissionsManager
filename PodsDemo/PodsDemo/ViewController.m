//
//  ViewController.m
//  PodsDemo
//
//  Created by Fogao Zhang on 2017/12/27.
//  Copyright © 2017年 zhang. All rights reserved.
//

#import "ViewController.h"
#import "IOSPermissionsManager.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    IOSPermissionsManager *manager = [[IOSPermissionsManager alloc]init];
   [manager CameraAuthority];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

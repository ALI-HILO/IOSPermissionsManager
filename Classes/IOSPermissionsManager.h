//
//  IOSPermissionsManager.h
//  ZhimixCaiGou
//
//  Created by Fogao Zhang on 2017/12/27.
//  Copyright © 2017年 Fogao Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    
    systemAuthorityCamera,
    systemAuthorityPhotoLibrary,
    systemAuthorityNotifacation,
    systemAuthorityNetwork,
    systemAuthorityAudio,
    systemAuthorityLocation,
    systemAuthorityAddressBook,
    systemAuthorityCalendar,
    systemAuthorityReminder,
    
} systemAuthorityType;

@interface IOSPermissionsManager : NSObject

/**
 相机权限开关
 @return YES／NO
 */
- (BOOL)CameraAuthority;
/**
 相册权限开关
 @return YES／NO
 */
- (BOOL)PhotoLibraryAuthority;
/**
 推送权限开关
 @return YES/NO
 */
- (BOOL)notificationAuthority;
/**
 连网权限开关
 @return YES/NO
 */
- (BOOL)netWorkAuthority;
/**
 麦克风权限开关
 @return YES/NO
 */
- (BOOL)audioAuthority;
/**
 定位权限开关
 @return YES/NO
 */
- (BOOL)locationAuthority;
/**
 通讯录权限开关
 @return YES/NO
 */
- (BOOL)addressBookAuthority;
/**
 日历权限开关
 @return YES/NO
 */
- (BOOL)calendarAuthority;
/**
 备忘录权限开关
 @return YES/NO
 */
- (BOOL)reminderAuthority;

@end

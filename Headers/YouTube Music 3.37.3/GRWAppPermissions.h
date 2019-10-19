//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRWAppPermissions : NSObject
{
}

+ (id)stringForAuthorizationStatus:(long long)arg1;
+ (id)stringForPermissionType:(long long)arg1;
+ (id)infoPlistKeyForType:(long long)arg1;
+ (long long)authorizationStatusForPermissionType:(long long)arg1;
+ (_Bool)hasInfoPlistStringForType:(long long)arg1;
+ (void)requestAccessForPermissionType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (long long)authorizationStatusFromProto:(int)arg1;
+ (long long)typeFromProtoType:(int)arg1;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (long long)authorizationStatusForMediaType:(id)arg1;
+ (void)requestMicrophoneAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)requestCameraAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (long long)microphoneStatus;
+ (long long)cameraStatus;
+ (long long)bluetoothPeripheralStatus;
+ (void)requestAccessForEntityType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (long long)authorizationStatusForEntityType:(unsigned long long)arg1;
+ (void)requestReminderAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)requestCalendarAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (long long)remindersStatus;
+ (long long)calendarEventsStatus;
+ (void)getNotificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (long long)authorizationStatusFromNotificationAuthorizationStatus:(long long)arg1;
+ (void)requestAccessForNotificationWithOptions:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getAlertNotificationSettingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)getBadgeNotificationSettingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)getSoundNotificationSettingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)getCarPlayNotificationSettingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)getNotificationAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end


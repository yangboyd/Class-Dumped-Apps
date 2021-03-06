//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GPCPromise, NSData, NSString, UIApplication;

@protocol GBTRemoteNotificationRegistrationService
@property(readonly, nonatomic) _Bool successfullyRegisteredForNotifications;
@property(readonly, copy, nonatomic) NSString *deviceTokenDebugString;
- (_Bool)emailEligibleForNotifications:(NSString *)arg1;
- (GPCPromise *)fetchRemoteBadgeCounts;
- (void)updatePushNotifications;
- (void)didFailAuthorization;
- (void)application:(UIApplication *)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg2;
@end


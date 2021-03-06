//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDANotificationsRegistrar-Protocol.h"

@class GDAApplicationSettings, NSData, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface GDAGUNSNotificationsRegistrar : NSObject <GDANotificationsRegistrar>
{
    NSData *deviceToken;
    id <UNUserNotificationCenterDelegate> notificationCenterDelegate;
    GDAApplicationSettings *_appSettings;
}

+ (void)registerForAPNSWithNotificationCenterDelegate:(id)arg1;
+ (_Bool)isApplicationRegisteredForAPNSNotifications;
- (void).cxx_destruct;
@property(retain, nonatomic) GDAApplicationSettings *appSettings; // @synthesize appSettings=_appSettings;
@property(nonatomic) __weak id <UNUserNotificationCenterDelegate> notificationCenterDelegate; // @synthesize notificationCenterDelegate;
@property(copy, nonatomic) NSData *deviceToken; // @synthesize deviceToken;
- (void)setNotificationCategoriesWithActionHandler:(id)arg1;
- (void)setNotificationCategories:(id)arg1;
- (void)unregisterUserID:(id)arg1;
- (void)registerUserID:(id)arg1;
- (void)registerUserIDs:(id)arg1;
- (void)getNotificationsDeniedWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerNotificationsAndShowPromptIfNecessary;
- (void)registerNotificationsIfPromptWasShown;
- (id)initWithApplicationSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


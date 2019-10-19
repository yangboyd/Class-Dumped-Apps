//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "minecraftpeAppDelegateBase.h"

#import "AppsFlyerTrackerDelegate.h"
#import "UIApplicationDelegate.h"
#import "UNUserNotificationCenterDelegate.h"

@class NSString, UIWindow;

@interface minecraftpeAppDelegate : minecraftpeAppDelegateBase <UIApplicationDelegate, AppsFlyerTrackerDelegate, UNUserNotificationCenterDelegate>
{
    _Bool mHandledAppsflyer;
    _Bool mShouldReportPushNotificationPermission;
    _Bool mPushNotificationPermission;
    basic_string_90719d97 mPushDeviceToken;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initializeHelper;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)registerForRemoteNotification;
- (void)updatePushPermission;
- (void)tryReportPushPermission;
- (void)onAppInit;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)commonApplication:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)onConversionDataRequestFailure:(id)arg1;
- (void)onConversionDataReceived:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end


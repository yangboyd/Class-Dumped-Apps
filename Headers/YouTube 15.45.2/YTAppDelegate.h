//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "FLXErrorDelegate-Protocol.h"
#import "FLXRTLLayoutDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "YTOfflineCoordinatorObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSString, UIWindow, YTAppViewController, YTCrashController, YTMainWindow, YTQuickActionsController, YTSafeModeController, YTSettings, YTUserDefaults, YTWebViewFallbackController;
@protocol RCHService, YTResponderRoot;

@interface YTAppDelegate : UIResponder <YTSystemNotificationsObserver, YTOfflineCoordinatorObserver, FLXErrorDelegate, FLXRTLLayoutDelegate, UIApplicationDelegate>
{
    YTAppViewController *_appViewController;
    YTCrashController *_crashController;
    YTSafeModeController *_safeModeController;
    YTMainWindow *_mainWindow;
    YTSettings *_settings;
    YTUserDefaults *_userDefaults;
    CDUnknownBlockType _gimmeCreationBlock;
    YTWebViewFallbackController *_webViewFallbackController;
    id <RCHService> _iReachService;
    YTQuickActionsController *_quickActionsController;
    id <YTResponderRoot> _responderRoot;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) id <YTResponderRoot> responderRoot; // @synthesize responderRoot=_responderRoot;
- (void)scheduleNonCriticalStartupWorkWithApplication:(id)arg1 withOptions:(id)arg2;
- (void)performPostCriticalInitializationWithApplication:(id)arg1 withOptions:(id)arg2;
- (void)performPrecriticalInitializationWithApplicationState:(long long)arg1 withOptions:(id)arg2;
@property(readonly, nonatomic) YTQuickActionsController *quickActionsController; // @synthesize quickActionsController=_quickActionsController;
- (void)updateBackgroundFetchInterval;
- (void)migrateToAppThemeSettingIfNecessary;
- (void)setupDarkThemeWithColdConfig:(id)arg1 userDefaults:(id)arg2;
- (void)handleURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (id)webViewFallbackController;
- (_Bool)shouldEnablePrecriticalMonitoring;
- (void)tearDownApplication;
- (long long)userInterfaceLayoutDirection;
- (void)flexKitDidFailWithError:(id)arg1;
- (void)offlineModeDidChange;
- (void)appWillResignActive:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)logBackgroundTaskState:(int)arg1 startDate:(id)arg2;
- (void)performLegacyFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
@property(retain, nonatomic) UIWindow *window;
- (id)appModulesForLaunchState:(long long)arg1;
- (id)initWithGimmeCreationBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


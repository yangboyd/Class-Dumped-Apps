//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIApplicationDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class DataHelper, NSDate, NSString, NSURL, NSUserActivity, QVCTBController, QVCTabBarController, Reachability, UIActivityIndicatorView, UIAlertView, UIImageView, UIWindow, _TtC3QVC11ForceUpdate, _TtC3QVC15LeanplumManager, _TtC3QVC8AppTools;

@interface QVCAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>
{
    Reachability *reachability;
    UIWindow *window;
    QVCTBController *tabBarController;
    _Bool canRotate;
    UIActivityIndicatorView *activityIndicator;
    UIImageView *spinnerBackground;
    UIAlertView *upgradeAlert;
    _Bool isFirstLaunch;
    NSString *webUrl;
    NSURL *nativeUrl;
    NSString *launchAlternativeUrl;
    int daysUntilPUSHPrompt;
    unsigned long long backgroundSetupTask;
    _TtC3QVC8AppTools *appTools;
    _Bool isForcedUpgradeAlertVisibleOnAppWindow;
    _Bool isAlertShowing;
    _Bool isAppSettingsLoaded;
    _TtC3QVC11ForceUpdate *upgradeReq;
    NSUserActivity *spotLightActivity;
    NSDate *reminderDateForPUSHReg;
    DataHelper *_dataHelper;
    _TtC3QVC15LeanplumManager *_leanplumManager;
    id _pushProvider;
    QVCTabBarController *_storyboardTabBarController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QVCTabBarController *storyboardTabBarController; // @synthesize storyboardTabBarController=_storyboardTabBarController;
@property(retain, nonatomic) id pushProvider; // @synthesize pushProvider=_pushProvider;
@property(retain, nonatomic) _TtC3QVC15LeanplumManager *leanplumManager; // @synthesize leanplumManager=_leanplumManager;
@property(retain, nonatomic) DataHelper *dataHelper; // @synthesize dataHelper=_dataHelper;
@property(nonatomic) _Bool isAppSettingsLoaded; // @synthesize isAppSettingsLoaded;
@property(nonatomic) _Bool isAlertShowing; // @synthesize isAlertShowing;
@property(retain, nonatomic) NSDate *reminderDateForPUSHReg; // @synthesize reminderDateForPUSHReg;
@property(retain, nonatomic) NSUserActivity *spotLightActivity; // @synthesize spotLightActivity;
@property(nonatomic) _Bool isForcedUpgradeAlertVisibleOnAppWindow; // @synthesize isForcedUpgradeAlertVisibleOnAppWindow;
@property(nonatomic) _Bool isFirstLaunch; // @synthesize isFirstLaunch;
@property(retain, nonatomic) _TtC3QVC11ForceUpdate *upgradeReq; // @synthesize upgradeReq;
@property(retain, nonatomic) UIImageView *spinnerBackground; // @synthesize spinnerBackground;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
@property(retain, nonatomic) QVCTBController *tabBarController; // @synthesize tabBarController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void)onSuccessLogin:(id)arg1;
- (void)personalizationQvcIdPart1DidChange:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handlePushAsDeepLinkWithDictionary:(id)arg1;
- (void)enablePushNotification;
- (void)disableFacebookInit;
- (void)saveCookiesToStorage;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)showAlertViewLoadingData;
- (void)showAlertViewNoReachability;
- (_Bool)isReachable;
- (int)currentReachabilityStatus;
- (_Bool)isConnected;
- (void)showForceUpgrade;
- (void)showAlert;
- (void)forceUpgradeCheck;
- (void)applicationSignificantTimeChange:(id)arg1;
- (id)bundleForResourceNamed:(id)arg1 ofType:(id)arg2;
- (id)frameworkBundle;
- (void)alertViewForCartService:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)processLocalNotificationWithUserInfo:(id)arg1;
- (void)processNotification:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)enableRoation;
- (void)disableRotate;
- (void)moviePreloadDidFinish:(id)arg1;
- (void)signUserOut;
- (void)dealloc;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (_Bool)notificationsEnabled;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)handleOpenNativeURL;
- (void)handleDeepLinking:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)clearSeasonalSplashScreen;
- (void)getAppSettingsAndSetupAppAndRootSetup:(_Bool)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)init;
- (void)applyingIOS7Style;
- (id)defaultImage;
- (id)splashScreenURLString;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


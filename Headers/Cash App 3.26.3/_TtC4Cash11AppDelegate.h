//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class CCSessionManager;

@interface _TtC4Cash11AppDelegate : UIResponder <UIApplicationDelegate>
{
    // Error parsing type: , name: window
    // Error parsing type: , name: $__lazy_storage_$_sessionManager
    // Error parsing type: , name: logger
    // Error parsing type: , name: cashRouteHandler
    // Error parsing type: , name: routeHandlingURLOpener
    // Error parsing type: , name: tabRouteNavigator
    // Error parsing type: , name: appMessageContentRouter
    // Error parsing type: , name: appMessageManager
    // Error parsing type: , name: badgeCountCoordinator
    // Error parsing type: , name: remoteNotificationBadgeCountProvider
    // Error parsing type: , name: notificationRegistrationManager
    // Error parsing type: , name: applicationIsInForeground
    // Error parsing type: , name: launchOptionsRemoteNotification
    // Error parsing type: , name: launchOptionsLocalNotification
    // Error parsing type: , name: launchOptionsURLToOpen
    // Error parsing type: , name: launchOptionsUserActivity
    // Error parsing type: , name: notificationTokens
    // Error parsing type: , name: accountProfileDidChangeListener
    // Error parsing type: , name: ccFlowDidRequestSignOutListener
    // Error parsing type: , name: beginIgnoringInteractionEventsListener
    // Error parsing type: , name: endIgnoringInteractionEventsListener
    // Error parsing type: , name: forceUpgradeAlert
    // Error parsing type: , name: advertisingEventAttributor
    // Error parsing type: , name: appWindowCornerRadius
    // Error parsing type: , name: backgroundFetchScheduler
    // Error parsing type: , name: customerDataManager
    // Error parsing type: , name: customerDataForCurrentSession
    // Error parsing type: , name: loggedOutFeatureFlagStore
    // Error parsing type: , name: loggedOutFeatureFlagStoreLoader
    // Error parsing type: , name: featureFlagNetworkManager
    // Error parsing type: , name: retryableRequestDispatcher
    // Error parsing type: , name: appTransitionNotifier
    // Error parsing type: , name: bulletinFeatureFlagObservable
    // Error parsing type: , name: investingFeatureFlagObservable
    // Error parsing type: , name: searchFirstPaymentsFeatureFlagObservable
    // Error parsing type: , name: appDataResetter
    // Error parsing type: , name: mainContentViewControllerManager
    // Error parsing type: , name: mainContentViewController
    // Error parsing type: , name: sessionLifeCycleManager
    // Error parsing type: , name: composerService
    // Error parsing type: , name: lobLogServiceLoader
    // Error parsing type: , name: imageManager
    // Error parsing type: , name: supportChatSession
    // Error parsing type: , name: personManager
    // Error parsing type: , name: protectedDataManager
    // Error parsing type: , name: crashTool
    // Error parsing type: , name: dualCrashReporter
    // Error parsing type: , name: handledShortcutInWillFinishLaunching
    // Error parsing type: , name: couldHandleURLInWillFinishLaunching
    // Error parsing type: , name: couldHandleUserActivityInWillFinishLaunching
    // Error parsing type: , name: applicationHasBeenSetUp
    // Error parsing type: , name: applicationDidBecomeActiveListener
    // Error parsing type: , name: applicationWillEnterForegroundListener
    // Error parsing type: , name: applicationDidEnterBackgroundListener
    // Error parsing type: , name: interfaceLoaded
}

+ (id)appDelegate;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
@property(nonatomic, retain) CCSessionManager *sessionManager;

@end


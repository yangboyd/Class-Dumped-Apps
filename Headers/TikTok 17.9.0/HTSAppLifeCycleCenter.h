//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSAppLifeCycle-Protocol.h"
#import "HTSBundleLoaderDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface HTSAppLifeCycleCenter : NSObject <HTSBundleLoaderDelegate, HTSAppLifeCycle>
{
    NSMutableArray *_lifeCycleObservers;
}

+ (id)sharedCenter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lifeCycleObservers; // @synthesize lifeCycleObservers=_lifeCycleObservers;
- (id)_snapshotModules;
- (id)_parseModulesInMachO:(struct mach_header_64 *)arg1;
- (void)bundleLoader:(id)arg1 willUnLoadName:(id)arg2;
- (void)bundleLoader:(id)arg1 didLoadBundle:(id)arg2;
- (_Bool)onHandleAppContinueUserActivity;
- (_Bool)onHandleAppOpenUrl;
- (void)onHandleEventsForBackgroundURLSession;
- (void)onHandleAppShortcutAction;
- (void)onAppPerformBackgroundFetch;
- (void)onAppDidReceiveRemoteNotification;
- (void)onAppDidReceiveLocalNotification;
- (void)onAppDidFailToRegisterForRemoteNotifications;
- (void)onAppDidRegisterDeviceToken;
- (void)onAppDidRegisterNotificationSetting;
- (void)onAppDidReceiveMemoryWarning;
- (void)onAppDidEnterBackground;
- (void)onAppWillEnterForeground;
- (void)onAppWillTerminate;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (void)resortModules;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


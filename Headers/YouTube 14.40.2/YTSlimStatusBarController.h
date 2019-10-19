//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTConnectionStatusControllerObserver.h"
#import "YTResponder.h"
#import "YTUserChangedObserver.h"

@class GIMMe, NSDate, NSMapTable, NSString, YTConnectionStatusController, YTTimedAction, YTUserDefaults;

@interface YTSlimStatusBarController : NSObject <YTConnectionStatusControllerObserver, YTResponder, YTUserChangedObserver>
{
    NSMapTable *_observers;
    YTConnectionStatusController *_connectionStatusController;
    id <YTIdentityProvider> _identityProvider;
    NSDate *_dateOfLastShownDisabledAction;
    _Bool _isLoggingDelayed;
    YTUserDefaults *_userDefaults;
    GIMMe *_gimme;
    YTTimedAction *_dismissTimer;
}

@property(retain, nonatomic) YTTimedAction *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void)logSlimStatusBarAppearanceChange;
- (void)processDelayedLogsIfNeeded;
- (void)scheduleUpdateSlimStatusBarsDisplayed:(_Bool)arg1 shouldDismiss:(_Bool)arg2;
- (void)setSlimStatusBarViewDisplayed:(_Bool)arg1 isDismissing:(_Bool)arg2;
- (void)updateSlimStatusBarViewsAppearanceToIsIncognito;
- (void)updateSlimStatusBarViewsAppearanceForIsConnected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)slimStatusBarDisplayHeight;
- (void)updateSlimStatusBarView:(id)arg1 toBeDismissed:(_Bool)arg2;
- (void)addSlimStatusBarView:(id)arg1 withObserver:(id)arg2;
- (void)userDidChange;
- (void)connectionStatusDidChange:(_Bool)arg1;
- (void)shutdown;
- (void)showOfflineDisabledActionIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


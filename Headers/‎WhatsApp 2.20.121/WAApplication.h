//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class UIView, UIWindow, WATimeSpentMonitor;

@interface WAApplication : UIApplication
{
    long long _volumeKeyEventCounter;
    _Bool _wantsSpecialEventHandling;
    // Error parsing type: Aq, name: _applicationState
    // Error parsing type: Aq, name: _backgroundRefreshStatus
    // Error parsing type: Ai, name: _appWakeReason
    long long _stuckInInactiveStateCounter;
    double _willEnterForegroundTime;
    // Error parsing type: AB, name: _appWasLastForceQuit
    WATimeSpentMonitor *_timeSpentMonitor;
}

+ (id)wa_delegate;
+ (void)sendVCard:(id)arg1 toContacts:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (unsigned long long)forwardMessages:(id)arg1 toContacts:(id)arg2 toStatus:(_Bool)arg3;
+ (id)transitionForContacts:(id)arg1 andStatus:(_Bool)arg2;
+ (void)transitionToChatSession:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WATimeSpentMonitor *timeSpentMonitor; // @synthesize timeSpentMonitor=_timeSpentMonitor;
- (void)openAppStore;
- (void)openConsumerApp;
- (_Bool)otherAppCanOpenURL:(id)arg1;
- (void)setupTimeSpentMonitorWithType:(long long)arg1;
- (void)wa_clearNotificationCenterAndApplicationBadge;
@property(readonly, nonatomic) UIView *wa_statusBarView;
@property(readonly, nonatomic) double wa_currentStatusBarHeight;
- (id)wa_matchingViewInView:(id)arg1;
- (id)wa_kbView;
@property(readonly, nonatomic) UIWindow *wa_kbViewModern;
@property(readonly, nonatomic) UIWindow *wa_kbViewLegacy;
- (id)wa_viewWithIdentifier:(id)arg1;
- (void)backgroundRefreshStatusDidChange:(id)arg1;
- (void)wa_terminate;
@property(readonly, nonatomic) _Bool wa_isEnteringForeground;
@property(readonly, nonatomic) _Bool wa_isActive;
@property(readonly, nonatomic) _Bool wa_isBackgrounded;
- (void)handleStuckInInactiveState;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)didDetectVolumeDownButtonUp:(id)arg1;
- (void)didDetectVolumeDownButtonDown:(id)arg1;
- (void)didDetectVolumeUpButtonUp:(id)arg1;
- (void)didDetectVolumeUpButtonDown:(id)arg1;
- (void)setWantsSpecialEventHandling:(_Bool)arg1;
- (void)endDeliveringSpecialEvents;
- (void)beginDeliveringSpecialEvents;
- (_Bool)openURL:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)resetAppWasLastForceQuit;
- (void)initializeAppWasLastForceQuit;
- (void)setAppWasLastForceQuit:(_Bool)arg1;
@property(readonly, nonatomic) _Bool appWasLastForceQuit;
- (void)wa_applicationWillTerminate:(id)arg1;
- (void)wa_applicationWillResignActive:(id)arg1;
- (void)wa_applicationDidBecomeActive:(id)arg1;
- (void)wa_applicationWillEnterForeground:(id)arg1;
- (void)wa_applicationDidEnterBackground:(id)arg1;
- (void)wa_applicationDidFinishLaunching:(id)arg1;
- (void)setAppWakeReason:(int)arg1;
@property(readonly, nonatomic) int appWakeReason;
- (void)wa_setInitialBackgroundRefreshStatus;
@property(readonly, nonatomic) long long wa_backgroundRefreshStatus;
- (void)wa_setInitialApplicationState;
@property(readonly, nonatomic) long long wa_applicationState;
- (id)init;

@end


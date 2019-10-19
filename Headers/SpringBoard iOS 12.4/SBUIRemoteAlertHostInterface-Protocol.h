//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BSAnimationSettings, NSNumber, NSString, SBUIRemoteAlertIdleTimerSettings, SBUIRemoteAlertMaterialDescriptor;

@protocol SBUIRemoteAlertHostInterface
- (void)setSceneDeactivationReason:(NSNumber *)arg1;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;
- (void)setLaunchingInterfaceOrientation:(long long)arg1;
- (void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;
- (void)setShouldDisableFadeInAnimation:(_Bool)arg1;
- (void)setShouldDismissOnUILock:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)setReachabilityDisabled:(_Bool)arg1;
- (void)setDesiredAutoLockDurationWithoutWarn:(double)arg1;
- (void)setDesiredIdleTimerSettings:(SBUIRemoteAlertIdleTimerSettings *)arg1;
- (void)setDesiredAutoLockDuration:(double)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(NSString *)arg2;
- (void)setStyleOverridesToCancel:(int)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)setDesiredStatusBarStyleOverrides:(int)arg1;
- (void)setSwipeDismissalStyle:(long long)arg1;
- (void)setDismissalAnimationStyle:(long long)arg1;
- (void)setAllowsAlertStacking:(_Bool)arg1;
- (void)setBackgroundWeighting:(double)arg1 animationsSettings:(BSAnimationSettings *)arg2;
- (void)setBackgroundMaterialDescriptor:(SBUIRemoteAlertMaterialDescriptor *)arg1;
- (void)setWallpaperStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setWallpaperTunnelActive:(_Bool)arg1;
- (void)setAllowsMenuButtonDismissal:(_Bool)arg1;
- (void)setDesiredHardwareButtonEvents:(unsigned long long)arg1;
- (void)invalidate;
- (void)deactivate;
- (void)dismiss;
- (void)setAllowsSiri:(_Bool)arg1;
- (void)setAllowsAlertItems:(_Bool)arg1;
- (void)setAllowsBanners:(_Bool)arg1;
@end


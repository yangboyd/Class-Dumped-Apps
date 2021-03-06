//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGNuxViewDelegate-Protocol.h>

@class IGMainAppSurfaceIntent, IGNotificationPresenter, IGNuxView, IGTooltipView, NSDate, NSString, UIViewController;
@protocol FBCancelable;

@interface IGPanoramaNuxController : NSObject <IGNuxViewDelegate>
{
    IGNotificationPresenter *_notificationPresenter;
    IGNuxView *_nuxView;
    IGTooltipView *_tooltip;
    long long _ttl;
    long long _triggerTime;
    long long _impressionLimit;
    id <FBCancelable> _scheduledJob;
    IGMainAppSurfaceIntent *_currentTabBarSurface;
    UIViewController *_currentViewController;
    NSDate *_timeSwitchedToCurrentTab;
    long long _variant;
    _Bool _isCreateUnified;
    long long _currentTooltipType;
}

- (void).cxx_destruct;
- (void)didTapCloseButton:(id)arg1;
- (double)_timeSinceLastSwitch;
- (id)_userDefaultsKeyForNuxType:(long long)arg1;
- (void)_incrementImpressionCountForNuxType:(long long)arg1;
- (long long)_numOfImpressionsForNuxType:(long long)arg1;
- (void)_displayTooltip;
- (void)_scheduleNuxDismiss;
- (void)_configureTooltipWithType:(long long)arg1;
- (void)_configureNuxWithType:(long long)arg1;
- (void)_presentNuxInView:(id)arg1 nuxType:(long long)arg2 tooltipType:(long long)arg3;
- (void)didNavigateToTabBarSurface:(id)arg1 withViewController:(id)arg2;
- (id)initWithLauncherSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


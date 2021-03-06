//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Reddit27AccountStatusViewController.h"

@class AnalyticsEvent, NSString;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface _TtC6Reddit27AccountStatusViewController (Reddit)
- (void)didTapClose;
- (void)didSelectAddAccount;
- (void)didSelectLogoutFromAccount:(id)arg1;
- (void)didSelectSwitchToAccount:(id)arg1;
- (void)didSelectLoggedOut;
- (void)didSelectAnonymousBrowsing;
- (void)windowChangedSizeWithSender:(id)arg1;
- (void)dimmerViewTapped;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(nonatomic, readonly) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(nonatomic, readonly) AnalyticsEvent *screenViewEvent;
@property(nonatomic, readonly) NSString *analyticsScreenViewName;
@property(nonatomic, readonly) NSString *analyticsPageType;
@end


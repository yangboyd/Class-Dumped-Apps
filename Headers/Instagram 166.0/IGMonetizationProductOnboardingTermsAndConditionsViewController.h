//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGBottomButtonsView, IGMonetizationProductOnboardingFunnel, IGMonetizationProductOnboardingLogger, IGMonetizationProductOnboardingTermsAndConditionsViewModel, IGSimpleWebViewController, IGUserSession;
@protocol IGMonetizationProductOnboardingTermsAndConditionsViewControllerDelegate;

@interface IGMonetizationProductOnboardingTermsAndConditionsViewController : IGViewController
{
    IGUserSession *_userSession;
    id <IGMonetizationProductOnboardingTermsAndConditionsViewControllerDelegate> _delegate;
    IGSimpleWebViewController *_webViewController;
    IGBottomButtonsView *_bottomButton;
    IGMonetizationProductOnboardingTermsAndConditionsViewModel *_viewModel;
    IGMonetizationProductOnboardingFunnel *_funnel;
    IGMonetizationProductOnboardingLogger *_onboardingLogger;
}

- (void).cxx_destruct;
- (void)_onBackButtonTapped;
- (void)_didTapCTAWithTitle:(id)arg1;
- (id)analyticsModule;
- (long long)preferredTabBarBehavior;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 viewModel:(id)arg3 funnel:(id)arg4;

@end


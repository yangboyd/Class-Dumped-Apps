//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseViewController.h>

@protocol _TtP6Twitch39EmailVerificationViewControllerDelegate_;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch31EmailVerificationViewController : TWBaseViewController
{
    // Error parsing type: , name: context
    // Error parsing type: , name: delegate
    // Error parsing type: , name: scrollableStackContainerView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: errorView
    // Error parsing type: , name: codeFormField
    // Error parsing type: , name: textingDisclosureLabel
    // Error parsing type: , name: labelsToButtonsSpacer
    // Error parsing type: , name: $__lazy_storage_$_submitButton
    // Error parsing type: , name: $__lazy_storage_$_resendCodeButton
    // Error parsing type: , name: $__lazy_storage_$_skipBarButtonItem
    // Error parsing type: , name: passportError
    // Error parsing type: , name: userInfoState
    // Error parsing type: , name: $__lazy_storage_$_loadingView
    // Error parsing type: , name: requestIsInFlight
    // Error parsing type: , name: logger
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 themeManager:(id)arg3;
- (void)skipButtonTapped;
- (void)resendButtonTapped;
- (void)submitButtonTapped;
- (void)trackEmailVerificationLinkSuccessfullyHandled;
- (void)applyTheme:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) _Bool requestIsInFlight; // @synthesize requestIsInFlight;
@property(nonatomic) __weak id <_TtP6Twitch39EmailVerificationViewControllerDelegate_> delegate; // @synthesize delegate;
- (id)initWithLoginUserInfo:(id)arg1 themeManager:(id)arg2;

@end


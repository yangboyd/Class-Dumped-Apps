//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSTimer, SCLoginOdlvVerifyingViewModel, SCScreen, SCUnauthenticatedBaseView, SCUnauthenticatedStyleHelperDefault, UIButton, UILabel, UITextField, UIView;

@interface SCOdlvVerifyingViewController : UIViewController <UITextFieldDelegate>
{
    SCUnauthenticatedBaseView *_baseView;
    SCUnauthenticatedStyleHelperDefault *_styleHelper;
    UIView *_keyboardSeparator;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_errorMessageLabel;
    UIButton *_havingTroubleButton;
    UILabel *_codeLabel;
    UITextField *_codeField;
    NSString *_obfuscatedContact;
    long long _timerCountDownValueInSecs;
    NSTimer *_resendTimer;
    long long _timeLeftBeforeResendRequestInSecs;
    SCScreen *_screen;
    SCLoginOdlvVerifyingViewModel *_mostRecentViewModel;
}

- (void).cxx_destruct;
- (double)_getAppropriateButtonWidth;
- (void)_updateContinueButton;
- (void)_shiftViewUpWithKeyboard:(double)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_showHavingTroubleVerifyingAlertView;
- (void)_showInvalidPreAuthAlertView;
- (void)_showRequestErrorAlertView;
- (void)_updateResendTimeLeft;
- (void)_resetResendTimer;
- (void)_update:(id)arg1;
- (void)_startRenderingViewModels;
- (void)_dismissErrorAlertForVerifyingTrouble;
- (void)_dismissErrorAlertForLogin;
- (void)_dismissErrorAlertForRequestingOtp;
- (void)_havingTroubleVerifyingTapped;
- (void)_textFieldDidChange:(id)arg1;
- (void)_backButtonTapped;
- (void)_continueButtonTapped;
- (void)_setupHavingTroubleButton;
- (void)_setupErrorMessageLabel;
- (void)_setupCodeField;
- (void)_setupCodeLabel;
- (void)_setupDescription;
- (void)_setupTitle;
- (void)_setupKeyboardSeparator;
- (void)_setupBaseView;
- (void)_setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithObfuscatedContact:(id)arg1 resendTimerCountDownValue:(long long)arg2 screen:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


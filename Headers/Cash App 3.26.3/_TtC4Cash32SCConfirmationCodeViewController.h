//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAbstractScreenViewController.h"

@class NSString;

@interface _TtC4Cash32SCConfirmationCodeViewController : SCAbstractScreenViewController
{
    // Error parsing type: , name: personManager
    // Error parsing type: , name: usesCustomNumericKeyboard
    // Error parsing type: , name: aliasNotEligibleForMergeAlert
    // Error parsing type: , name: confirmationCodeTextField
    // Error parsing type: , name: helpItemsManager
    // Error parsing type: , name: codeSentViaVoice
    // Error parsing type: , name: verifyEmailAppLaunchListener
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 flowStep:(long long)arg3 flowViewController:(id)arg4 logger:(id)arg5 autoAdvanceDelay:(double)arg6;
- (void)showHelpItemsSheet;
- (void)resendCodeButtonPressed;
- (void)confirmationCodeTextDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateDisplayedInputState;
@property(nonatomic, readonly) NSString *headerText;
- (void)updateNavigationButtons;
- (_Bool)shouldShowInputSubmissionSuccessCheckmark;
- (void)layoutContentSubviews;
- (void)contentViewDidLoad;
- (void)viewWillAppearForFirstTime:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

@end


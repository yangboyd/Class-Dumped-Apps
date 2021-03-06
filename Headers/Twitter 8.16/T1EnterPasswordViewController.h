//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingFormViewController.h>

@class NSString, T1EnterPasswordForm;
@protocol T1EnterPasswordViewControllerDelegate;

@interface T1EnterPasswordViewController : T1OnboardingFormViewController
{
    T1EnterPasswordForm *_form;
    NSString *_username;
    NSString *_email;
    id <T1EnterPasswordViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <T1EnterPasswordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectOpen1PasswordFromSender:(id)arg1;
- (void)abandonForm;
- (void)submitForm;
- (unsigned long long)inputRequiredBehavior;
- (_Bool)formFieldShouldReturn:(id)arg1 withSelectNextFieldAction:(CDUnknownBlockType)arg2 stopEditingAction:(CDUnknownBlockType)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 continueButtonLabel:(id)arg3 skipButtonLabel:(id)arg4 fullName:(id)arg5 email:(id)arg6 username:(id)arg7 skipPasswordValidation:(_Bool)arg8;

@end


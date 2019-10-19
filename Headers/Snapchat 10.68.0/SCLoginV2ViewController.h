//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCLegacyLogInPage-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCRegisterV2ViewDelegate-Protocol.h"

@class NSString, SCAppSession, SCApplicationLoginLogger, SCLogger, SCLoginRegisterFlowContext, SCLoginV2View, SCScopedAccess;
@protocol SCLegacyLogInUserActionDelegate;

@interface SCLoginV2ViewController : UIViewController <SCRegisterV2ViewDelegate, SCLegacyLogInPage, SCPageNameLogging>
{
    SCLoginV2View *_loginView;
    SCAppSession *_appSession;
    SCApplicationLoginLogger *_applicationLoginLogger;
    id <SCLegacyLogInUserActionDelegate> _userActionDelegate;
    SCLogger *_logger;
    _Bool _includeSignupOptionOnLoginView;
    SCLoginRegisterFlowContext *_flowContext;
    SCScopedAccess *_stateTransitionLogger;
}

- (void).cxx_destruct;
- (void)_presentEmptyUsernameAlertView;
- (void)_presentResetPasswordChoiceAlertView;
- (void)_SMSOptionSelected;
- (void)_toEmailResetPwdPage;
- (_Bool)shouldPopToRootViewController;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)continueButtonClicked;
- (void)startTypingPassword:(id)arg1;
- (void)loginSignupSwitcherButtonPressed;
- (void)forgotPasswordClicked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_loginDidSucceed:(id)arg1;
- (void)_addLoginNotificationListeners;
- (void)showConnectionErrorWithMessage:(id)arg1;
- (void)showGeneralErrorWithMessage:(id)arg1;
- (void)showCredentialsMismatchErrorWithMessage:(id)arg1;
- (void)showLoginInProgress:(_Bool)arg1;
- (void)hideKeyboard;
- (id)pageViewName;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSignupOptionButton:(_Bool)arg1 appSession:(id)arg2 applicationLoginLogger:(id)arg3 logger:(id)arg4 userActionDelegate:(id)arg5 flowContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


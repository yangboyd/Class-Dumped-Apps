//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESecurityMessage-Protocol.h"
#import "TMPhoneBindCustomContentProvider-Protocol.h"
#import "TMVerificationCodeInputViewDelegate-Protocol.h"
#import "TMVerificationCodeViewDelegate-Protocol.h"

@class DYRouterModel, NSString, TMVerificationCodeView;

@interface TMEmailVerifyCodeViewController : UIViewController <TMVerificationCodeViewDelegate, TMVerificationCodeInputViewDelegate, AWESecurityMessage, TMPhoneBindCustomContentProvider>
{
    long long accountManageStage;
    DYRouterModel *_userContext;
    long long _enterFromType;
    long long _scene;
    double _keyBoardMaxHeight;
    TMVerificationCodeView *_verificationView;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TMVerificationCodeView *verificationView; // @synthesize verificationView=_verificationView;
@property(nonatomic) double keyBoardMaxHeight; // @synthesize keyBoardMaxHeight=_keyBoardMaxHeight;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long enterFromType; // @synthesize enterFromType=_enterFromType;
@property(retain, nonatomic) DYRouterModel *userContext; // @synthesize userContext=_userContext;
@property(nonatomic) long long accountManageStage; // @synthesize accountManageStage;
- (void)trackUCBindResultWithError:(id)arg1;
- (void)trackUCSendCodeWithType:(long long)arg1 error:(id)arg2;
- (void)trackUCBindSubmit;
- (void)trackInsBindStatusWithError:(id)arg1;
@property(readonly, nonatomic) NSString *code;
@property(readonly, nonatomic) NSString *email;
- (_Bool)shouldShowNoAccessToEmailButton;
- (long long)codeType;
- (long long)accountManageScene;
- (id)currentPage;
- (void)resetPassword:(id)arg1;
- (void)supportAction;
- (void)closeAction:(id)arg1;
- (void)setupUI:(double)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)handleVerifyCodeError:(id)arg1;
- (void)resetPasswordWithTicket:(id)arg1;
- (void)changeBindMailForPassword;
- (void)changeBindMailOnly;
- (void)changeBindEmail;
- (void)bindEmailForPassword;
- (void)bindMailOnly;
- (void)bindEmail;
- (void)verifyCurrentUnverifiedEmailForPassword;
- (void)verifyCurrentUnverifiedEmailForBind;
- (void)verifyCurrentUnverifiedEmail;
- (void)verifyCurrentEmailForPassword;
- (void)verifyCurrentEmailForChangeBind;
- (void)verifyCurrentEmail;
- (void)verifyCodeForTwoStepVerificationSafetyCheck;
- (void)verifyCodeForSignup;
- (void)verifyCode;
- (void)securityCheckDidEnd:(long long)arg1;
- (void)securityCheckDidStart:(long long)arg1;
- (void)didFinishEnterVerificationCode:(id)arg1;
- (void)noEmailAccessAction;
- (void)resendCodeActionAuto:(_Bool)arg1;
- (void)resendCodeAction;
- (void)sendCodeAuto;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 enterFromType:(long long)arg2 scene:(long long)arg3 isEntry:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


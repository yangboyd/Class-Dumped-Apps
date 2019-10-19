//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCQueuePerformer;

@interface SCApplicationLoginLogger : NSObject
{
    SCQueuePerformer *_performer;
    _Bool _hasLoggedInBefore;
    NSString *_longClientId;
    NSString *_loginFlowUUID;
    NSString *_resetPasswordUUID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setHasLoggedInBeforeOnEvent:(id)arg1;
- (void)_addDeepLinkPropertiesIfAny:(id)arg1;
- (id)_newGrapheneWithMetricId:(id)arg1;
- (void)_logBlizzardEvent:(id)arg1;
- (void)_logGrapheneWithPage:(long long)arg1;
- (void)_logGrapheneWithMetricId:(id)arg1 source:(long long)arg2 errorType:(long long)arg3;
- (void)_logGrapheneWithMetricId:(id)arg1 source:(long long)arg2;
- (void)_logApplicationLoginOdlvFailure:(long long)arg1 otpType:(long long)arg2;
- (void)_logApplicationLoginOdlvSuccess:(long long)arg1 otpType:(long long)arg2;
- (void)_logApplicationLoginOdlvUnableToVerify:(long long)arg1;
- (void)_logApplicationLoginOdlvRequestOtp:(long long)arg1;
- (void)_logApplicationLoginOdlvPageview:(long long)arg1 loginFlowSessionId:(id)arg2 hasLoggedInBefore:(_Bool)arg3;
- (id)_getResetPasswordUUID;
- (void)_clearResetPasswordUUID;
- (void)_logApplicationLoginTwoFactorFailure:(long long)arg1;
- (void)_logApplicationLoginTwoFactorSuccess:(long long)arg1;
- (void)_logApplicationLoginTwoFactorPageview:(long long)arg1;
- (void)_logApplicationLoginResetPasswordFailure:(long long)arg1;
- (void)_logApplicationLoginResetPasswordSuccess:(long long)arg1;
- (void)_logApplicationLoginResetPasswordPageview:(long long)arg1;
- (void)_logApplicationLoginForgotPasswordCaptchaFailure:(long long)arg1;
- (void)_logApplicationLoginForgotPasswordCaptchaSuccess:(long long)arg1;
- (void)_logApplicationLoginForgotPasswordCaptchaPageview:(long long)arg1;
- (void)_logApplicationLoginForgotPasswordStrategy:(long long)arg1;
- (void)_logApplicationLoginForgotPasswordDialogue;
- (void)_logApplicationLoginFailureWithSource:(long long)arg1 errorType:(long long)arg2;
- (void)_logApplicationLoginAttemptWithSource:(long long)arg1;
- (void)_logApplicationLoginWithSource:(long long)arg1 username:(id)arg2;
- (void)_logLoginPageViewWithVersion:(long long)arg1;
- (void)_logLoginStart;
- (void)logApplicationLoginOdlvFailure:(long long)arg1 otpType:(long long)arg2;
- (void)logApplicationLoginOdlvSuccess:(long long)arg1 otpType:(long long)arg2;
- (void)logApplicationLoginOdlvUnableToVerify:(long long)arg1;
- (void)logApplicationLoginOdlvRequestOtp:(long long)arg1;
- (void)logApplicationLoginOdlvPageview:(long long)arg1;
- (void)logApplicationLoginTwoFactorFailure:(long long)arg1;
- (void)logApplicationLoginTwoFactorSuccess:(long long)arg1;
- (void)logApplicationLoginTwoFactorPageview:(long long)arg1;
- (void)logApplicationLoginResetPasswordFailure:(long long)arg1;
- (void)logApplicationLoginResetPasswordSuccess:(long long)arg1;
- (void)logApplicationLoginResetPasswordPageview:(long long)arg1;
- (void)logApplicationLoginForgotPasswordCaptchaFailure:(long long)arg1;
- (void)logApplicationLoginForgotPasswordCaptchaSuccess:(long long)arg1;
- (void)logApplicationLoginForgotPasswordCaptchaPageview:(long long)arg1;
- (void)logApplicationLoginForgotPasswordStrategy:(long long)arg1;
- (void)logApplicationLoginForgotPasswordDialogue;
- (void)logApplicationLoginFailureWithSource:(long long)arg1 errorType:(long long)arg2;
- (void)logApplicationLoginAttemptWithSource:(long long)arg1;
- (void)logApplicationLoginWithSource:(long long)arg1 username:(id)arg2;
- (void)logLoginPageViewWithVersion:(long long)arg1;
- (void)logLoginStart;
- (id)init;

@end


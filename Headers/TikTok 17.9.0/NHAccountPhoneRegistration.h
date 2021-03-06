//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NHAccountPhoneRegistration : NSObject
{
}

+ (void)_handleUserInfoChange:(id)arg1 error:(id)arg2 sendMessageBlock:(CDUnknownBlockType)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (void)handleUserInfoChange:(id)arg1 platform:(unsigned long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (void)POST:(id)arg1 parameters:(id)arg2 model:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (void)GET:(id)arg1 parameters:(id)arg2 model:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (void)POST:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)GET:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startEmailRegisterVerify:(id)arg1 code:(id)arg2 type:(long long)arg3 captcha:(id)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)startChangeMobileWithPhoneNumber:(id)arg1 code:(id)arg2 ticket:(id)arg3 unusableMobileTicket:(id)arg4 captcha:(id)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (void)startChangeMobileWithPhoneNumber:(id)arg1 code:(id)arg2 captcha:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)startValidateWithCode:(id)arg1 captcha:(id)arg2 sharkTicket:(id)arg3 type:(long long)arg4 ticketBlock:(CDUnknownBlockType)arg5;
- (void)startCheckPasswordStrength:(id)arg1 captcha:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startCheckEnvironmentIsSafe:(long long)arg1 captcha:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)startBindLoginCarrier:(id)arg1 token:(id)arg2 profileKey:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)startBindLoginWithPhoneNumber:(id)arg1 code:(id)arg2 captcha:(id)arg3 password:(id)arg4 profileKey:(id)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (void)startBindPhoneNumber:(id)arg1 code:(id)arg2 captcha:(id)arg3 password:(id)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)startBindPhoneNumber:(id)arg1 code:(id)arg2 captcha:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)startChangePasswordWithPassword:(id)arg1 code:(id)arg2 captcha:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)startRefreshCaptchaWithScenarioType:(long long)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)startRegisterWithPhoneNumber:(id)arg1 code:(id)arg2 password:(id)arg3 captcha:(id)arg4 type:(long long)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (void)startSendCodeWithOldPhoneNumber:(id)arg1 newPhoneNumber:(id)arg2 captcha:(id)arg3 ticket:(id)arg4 sharkTicket:(id)arg5 unusableMobileTicket:(id)arg6 type:(long long)arg7 scene:(long long)arg8 finishBlock:(CDUnknownBlockType)arg9;
- (void)startSendCodeWithPhoneNumber:(id)arg1 captcha:(id)arg2 ticket:(id)arg3 sharkTicket:(id)arg4 unusableMobileTicket:(id)arg5 type:(long long)arg6 scene:(long long)arg7 finishBlock:(CDUnknownBlockType)arg8;
- (void)startSendCodeWithPhoneNumber:(id)arg1 captcha:(id)arg2 unusableMobileTicket:(id)arg3 type:(long long)arg4 scene:(long long)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (void)startSendCodeWithPhoneNumber:(id)arg1 captcha:(id)arg2 ticket:(id)arg3 type:(long long)arg4 scene:(long long)arg5 finishBlock:(CDUnknownBlockType)arg6;
- (void)startSendCodeWithPhoneNumber:(id)arg1 captcha:(id)arg2 type:(long long)arg3 scene:(long long)arg4 finishBlock:(CDUnknownBlockType)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class FBSDKAccessToken, IGResetPasswordBundle, IGTwoFactorInfo, NSDictionary, NSString;
@protocol IGOneTapLoginViewControllerProtocol;

@protocol IGOneTapLoginViewControllerDelegate <NSObject>
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 didTriggerAccountRecoveryForUsername:(NSString *)arg2;
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 proceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3;
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 resetPasswordWithBundle:(IGResetPasswordBundle *)arg2;
- (void)oneTapLoginViewController:(id <IGOneTapLoginViewControllerProtocol>)arg1 willProceedRegistrationWithFBInfo:(NSDictionary *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3 tosVersion:(NSString *)arg4;
- (void)oneTapLoginViewControllerProceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg1 facebookAccessToken:(FBSDKAccessToken *)arg2;
- (void)oneTapLoginViewControllerResetPasswordWithBundle:(IGResetPasswordBundle *)arg1;
- (void)oneTapLoginViewControllerDidTapSignUpButton:(id <IGOneTapLoginViewControllerProtocol>)arg1;
- (void)oneTapLoginViewControllerDidTapSwitchAccountButton:(id <IGOneTapLoginViewControllerProtocol>)arg1 withBackButton:(_Bool)arg2;
- (void)oneTapLoginViewControllerWantsToDismiss:(id <IGOneTapLoginViewControllerProtocol>)arg1;
@end


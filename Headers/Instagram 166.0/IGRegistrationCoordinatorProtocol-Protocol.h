//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGUserSession, NSString, UIViewController;
@protocol IGRegistrationStepControllerProtocol;

@protocol IGRegistrationCoordinatorProtocol <NSObject>
- (void)stepController:(id <IGRegistrationStepControllerProtocol>)arg1 didRequestLoginWithUsername:(NSString *)arg2 password:(NSString *)arg3;
- (void)stepControllerDidGetBlockedByWeakPassword:(id <IGRegistrationStepControllerProtocol>)arg1;
- (void)stepController:(id <IGRegistrationStepControllerProtocol>)arg1 didTriggerMovingBackToVC:(UIViewController *)arg2;
- (void)stepControllerDidAttemptUnderageSignUp:(id <IGRegistrationStepControllerProtocol>)arg1;
- (void)stepControllerDidGetBlockedByGDPR:(id <IGRegistrationStepControllerProtocol>)arg1;
- (void)stepController:(id <IGRegistrationStepControllerProtocol>)arg1 didCompleteRegistrationWithUserSession:(IGUserSession *)arg2;
- (void)stepControllerDidSwitchToContactPointFlow:(id <IGRegistrationStepControllerProtocol>)arg1;
- (void)stepControllerDidGoBack:(id <IGRegistrationStepControllerProtocol>)arg1;
- (void)stepControllerDidSwitchToSignInFlow:(id <IGRegistrationStepControllerProtocol>)arg1;
- (void)stepControllerDidFailRegistration;
- (void)stepControllerDidTriggerGoingBackToUsernameStep;
- (void)stepControllerDidCompleteStep:(id <IGRegistrationStepControllerProtocol>)arg1;
@end


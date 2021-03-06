//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/SCPPermissionGrantingTranslationProviding-Protocol.h>
#import <InstagramAppCoreFramework/SCPTranslationProviding-Protocol.h>

@class NSString;

@protocol SCPSelfieCaptureTranslationProviding <SCPPermissionGrantingTranslationProviding, SCPTranslationProviding>
- (NSString *)newCapturingScreenFeedbackPerfect;
- (NSString *)newCapturingScreenFeedbackTiltDown;
- (NSString *)newCapturingScreenFeedbackTiltUp;
- (NSString *)newCapturingScreenFeedbackTurnLeft;
- (NSString *)newCapturingScreenFeedbackTurnRight;
- (NSString *)newCapturingScreenFeedbackPositionHeadSubtitle;
- (NSString *)newCapturingScreenFeedbackPositionHeadTitle;
- (NSString *)onboardingScreenTutorialFollowInstructionsSubtitle;
- (NSString *)onboardingScreenTutorialFollowInstructionsTitle;
- (NSString *)onboardingScreenTutorialTakeVideoSelfieSubtitle;
- (NSString *)onboardingScreenTutorialTakeVideoSelfieTitle;
- (NSString *)onboardingScreenLastPageActionButtonTitle;
- (NSString *)onboardingScreenActionButtonTitle;
- (NSString *)selfieRequirementsSecondReqContent;
- (NSString *)selfieRequirementsSecondReqTitle;
- (NSString *)selfieRequirementsFirstReqContent;
- (NSString *)selfieRequirementsFirstReqTitle;
- (NSString *)selfieRequirementsContentsTitle;
- (NSString *)selfieRequirementsPopoverTitle;
- (NSString *)confirmationScreenRetakeButtonTitle;
- (NSString *)confirmationScreenActionButtonTitle;
- (NSString *)confirmationScreenSubtitle;
- (NSString *)confirmationScreenTitle;
- (NSString *)capturingScreenHintLookingForFace;
- (NSString *)capturingScreenHintAlignFaceWithOval;
- (NSString *)capturingScreenHintTiltDown;
- (NSString *)capturingScreenHintTiltUp;
- (NSString *)capturingScreenHintTurnRight;
- (NSString *)capturingScreenHintTurnLeft;
- (NSString *)capturingScreenHintPerfect;
- (NSString *)privacyDisclaimer;
- (NSString *)errorMessage_presenterStateChangeFailureWithPreviousStateName:(NSString *)arg1 newStateName:(NSString *)arg2;
- (NSString *)errorMessage_interactorStateChangeFailureWithPreviousStateName:(NSString *)arg1 newStateName:(NSString *)arg2;
- (NSString *)errorMessage_interactorGoToNextDirectionFailure;
@end


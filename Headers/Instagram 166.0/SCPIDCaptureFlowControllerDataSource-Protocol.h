//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSArray, SCPIDCaptureFlowController, UIViewController;
@protocol SCPIDCaptureConfirmationViewControlling, SCPIDCaptureViewControlling, SCPIDTypeViewControlling, SCPOnboardingViewControlling, SCPPermissionGrantingViewControlling, UIViewControllerAnimatedTransitioning;

@protocol SCPIDCaptureFlowControllerDataSource <NSObject>
- (UIViewController<SCPIDCaptureConfirmationViewControlling> *)confirmationViewControllerForIDCapture:(SCPIDCaptureFlowController *)arg1 capturedDataArray:(NSArray *)arg2;
- (UIViewController<SCPIDTypeViewControlling> *)IDTypeSelectionViewControllerForIDCapture:(SCPIDCaptureFlowController *)arg1;
- (UIViewController<SCPIDCaptureViewControlling> *)captureViewControllerForIDCapture:(SCPIDCaptureFlowController *)arg1;
- (UIViewController<SCPPermissionGrantingViewControlling> *)permissionGrantingViewControllerForIDCapture:(SCPIDCaptureFlowController *)arg1;
- (UIViewController<SCPOnboardingViewControlling> *)onboardingViewControllerForIDCapture:(SCPIDCaptureFlowController *)arg1;

@optional
- (NSArray *)permissionGrantingImagesForIDCapture:(SCPIDCaptureFlowController *)arg1;
- (NSArray *)requirementsButtonImagesForIDCapture:(SCPIDCaptureFlowController *)arg1;
- (NSArray *)requirementsExplanationsPopupImageViewsForIDCapture:(SCPIDCaptureFlowController *)arg1;
- (NSArray *)onboardingStepsForIDCapture:(SCPIDCaptureFlowController *)arg1;
- (id <UIViewControllerAnimatedTransitioning>)pushAnimationControllerForTransitionFromCaptureToConfirmation:(SCPIDCaptureFlowController *)arg1;
@end


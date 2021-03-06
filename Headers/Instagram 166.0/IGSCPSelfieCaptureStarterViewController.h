//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGSCPSelfieCaptureNavigationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/SCPSelfieCaptureFlowControllerDataSource-Protocol.h>
#import <InstagramAppCoreFramework/SCPSelfieCaptureFlowControllerDelegate-Protocol.h>

@class IGTapButton, IGUserSession, NSArray, NSString, SCPSelfieCaptureFlowController, UIActivityIndicatorView, UIViewController;
@protocol IGCheckpointViewControllerProtocol;

@interface IGSCPSelfieCaptureStarterViewController : IGViewController <SCPSelfieCaptureFlowControllerDataSource, SCPSelfieCaptureFlowControllerDelegate, IGSCPSelfieCaptureNavigationDelegate>
{
    IGUserSession *_userSession;
    SCPSelfieCaptureFlowController *_captureFlowController;
    UIViewController *_entryViewController;
    _Bool _isPresentedModally;
    _Bool _isDismissEnabled;
    _Bool _isDebugModeEnabled;
    NSString *_challengeId;
    NSArray *_alignmentDirections;
    NSString *_product;
    UIActivityIndicatorView *_spinner;
    IGTapButton *_retryButton;
    id <IGCheckpointViewControllerProtocol> _checkpointCoordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCheckpointViewControllerProtocol> checkpointCoordinator; // @synthesize checkpointCoordinator=_checkpointCoordinator;
- (id)_capturePromptImageViewWithIconImage:(id)arg1 borderColor:(id)arg2 backgroundColor:(id)arg3;
- (void)_dismiss;
- (void)_startSelfieCaptureFlowWithModelPaths:(shared_ptr_919d4070)arg1;
- (void)_fetchFaceTrackerModelAndStartFlow;
- (void)navigationDidEndFlow:(id)arg1 currentViewController:(id)arg2 isCancelled:(_Bool)arg3;
- (void)selfieCaptureFlowControllerDidFinishFlow:(id)arg1 capturedData:(id)arg2;
- (id)headDirectionSuccessImageViewsForSelfieCapture:(id)arg1;
- (id)headDirectionPromptImageViewsForSelfieCapture:(id)arg1;
- (id)captureConfirmationImagesForSelfieCapture:(id)arg1;
- (id)permissionGrantingImagesForSelfieCapture:(id)arg1;
- (id)onboardingStepsForSelfieCapture:(id)arg1;
- (id)confirmationViewControllerForSelfieCapture:(id)arg1;
- (id)captureViewControllerForSelfieCapture:(id)arg1;
- (id)permissionGrantingViewControllerForSelfieCapture:(id)arg1;
- (id)onboardingViewControllerForSelfieCapture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 hostViewController:(id)arg2 isPresentedModally:(_Bool)arg3 isDismissEnabled:(_Bool)arg4 isDebugModeEnabled:(_Bool)arg5 challengeID:(id)arg6 alignmentDirections:(id)arg7 product:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


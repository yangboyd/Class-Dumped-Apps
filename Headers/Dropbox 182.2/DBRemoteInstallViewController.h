//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DBRemoteInstallQRCodeDelegate-Protocol.h"
#import "DBRestClientDelegateRemoteInstall-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"

@class DBCellStyleButton, DBLegacyAnalyticsLogger, DBRemoteInstallStartView, DBRemoteInstallStep1View, DBRemoteInstallStep2View, DBRemoteInstallStep3View, DBRemoteInstallStepsView, DBRestClient, DBUserState, NSString, UIButton, UIImageView, UINavigationBar;

@interface DBRemoteInstallViewController : UIViewController <DBRemoteInstallQRCodeDelegate, DBRestClientDelegateRemoteInstall, UINavigationBarDelegate>
{
    DBUserState *_userState;
    UINavigationBar *_navBar;
    UIImageView *_initialMac;
    UIImageView *_browserMac;
    UIImageView *_finalMac;
    DBCellStyleButton *_continueButton;
    UIButton *_notNowButton;
    DBRemoteInstallStartView *_start;
    DBRemoteInstallStep1View *_step1;
    DBRemoteInstallStep2View *_step2;
    DBRemoteInstallStep3View *_step3;
    DBRemoteInstallStepsView *_stepsFooter;
    DBRestClient *_restClient;
    DBLegacyAnalyticsLogger *_analyticsLogger;
    NSString *_currentStepForAnalytics;
    UIViewController *_alertController;
    _Bool _inGrowthExperiment;
    double _currentTranslation;
    unsigned long long _currentStepIndex;
    CDUnknownBlockType _tappedCancelBlock;
    CDUnknownBlockType _tappedNotNowBlock;
    CDUnknownBlockType _deniedPermissionsBlock;
    CDUnknownBlockType _finishedFlowBlock;
    CDUnknownBlockType _tappedInstallWithNoCameraPermissionsBlock;
    CDUnknownBlockType _dismissedFromSuccessfulCompleteBlock;
}

+ (void)db_enableContinuousAutoFocus:(id)arg1;
+ (id)captureInput;
+ (_Bool)db_cameraPermissionsWerePreviouslyDenied;
+ (void)showCameraPermissionErrorAlert;
+ (void)markRemoteInstallFlowAsCompleteForUserState:(id)arg1;
+ (void)presentModalForUserState:(id)arg1 fromLocation:(id)arg2 dismissedFromSuccessfulCompleteBlock:(CDUnknownBlockType)arg3 modalManager:(id)arg4;
+ (void)presentModalForUserState:(id)arg1 fromLocation:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType dismissedFromSuccessfulCompleteBlock; // @synthesize dismissedFromSuccessfulCompleteBlock=_dismissedFromSuccessfulCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType tappedInstallWithNoCameraPermissionsBlock; // @synthesize tappedInstallWithNoCameraPermissionsBlock=_tappedInstallWithNoCameraPermissionsBlock;
@property(copy, nonatomic) CDUnknownBlockType finishedFlowBlock; // @synthesize finishedFlowBlock=_finishedFlowBlock;
@property(copy, nonatomic) CDUnknownBlockType deniedPermissionsBlock; // @synthesize deniedPermissionsBlock=_deniedPermissionsBlock;
@property(copy, nonatomic) CDUnknownBlockType tappedNotNowBlock; // @synthesize tappedNotNowBlock=_tappedNotNowBlock;
@property(copy, nonatomic) CDUnknownBlockType tappedCancelBlock; // @synthesize tappedCancelBlock=_tappedCancelBlock;
- (void).cxx_destruct;
- (_Bool)db_isInGrowthExperiment;
- (void)db_prepareStepViews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)db_applyTranslationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)db_translateRightBy:(double)arg1;
- (void)db_prepareStartView;
- (void)db_prepareNavBar;
- (void)db_initialSetupWithUserState:(id)arg1;
- (void)db_setupIfNeededAndStartScanningViewCaptureSession;
- (long long)positionForBar:(id)arg1;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)restClient:(id)arg1 remoteInstallFailedWithError:(id)arg2 forToken:(id)arg3;
- (void)restClient:(id)arg1 remoteInstallCommittedSuccessfullyWithExtra:(id)arg2;
- (void)remoteInstallQRCodeScannerView:(id)arg1 scannedPossibleString:(id)arg2;
- (void)continueToStep3;
- (void)continueToStep2:(id)arg1;
- (void)backToStep1;
- (void)continueToStep1:(id)arg1;
- (void)dimissFlowFromDeniedPermissions;
- (void)finishedFlow:(id)arg1;
- (void)cancelFlow:(id)arg1;
- (void)notNearComputer:(id)arg1;
- (_Bool)isModalInPresentation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initForGrowthExperimentWithUserState:(id)arg1;
- (id)initWithUserState:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


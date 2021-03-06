//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTAvocadoDetectorDelegate-Protocol.h"
#import "ASTAvocadoStateTrackerDelegate-Protocol.h"
#import "ASTSetupStepViewControllerDelegate-Protocol.h"
#import "GOOAlertViewDelegate-Protocol.h"
#import "MDCBottomSheetControllerDelegate-Protocol.h"

@class ASTAvocadoAlignScanViewController, ASTAvocadoAlignScanViewData, ASTAvocadoAlreadySetUpViewController, ASTAvocadoBackendService, ASTAvocadoCreatingModelViewController, ASTAvocadoDetector, ASTAvocadoDeviceService, ASTAvocadoEnrollmentParameters, ASTAvocadoFlowResult, ASTAvocadoStateTracker, ASTAvocadoValuePropViewController, ASTSettingsMenuService, MDCBottomSheetController, NSError, NSMutableDictionary, NSString, UINavigationController, UINotificationFeedbackGenerator;
@protocol ASTAvocadoFlowControllerDelegate;

@interface ASTAvocadoFlowController : NSObject <ASTSetupStepViewControllerDelegate, ASTAvocadoDetectorDelegate, ASTAvocadoStateTrackerDelegate, GOOAlertViewDelegate, MDCBottomSheetControllerDelegate>
{
    ASTSettingsMenuService *_settingsMenuService;
    ASTAvocadoDeviceService *_deviceService;
    ASTAvocadoBackendService *_backendService;
    unsigned long long _flowState;
    ASTAvocadoAlignScanViewData *_alignScanViewData;
    ASTAvocadoStateTracker *_stateTracker;
    UINavigationController *_internalNavigationController;
    ASTAvocadoValuePropViewController *_valuePropViewController;
    MDCBottomSheetController *_consentBottomSheetController;
    ASTAvocadoAlignScanViewController *_alignScanViewController;
    ASTAvocadoCreatingModelViewController *_creatingModelViewController;
    ASTAvocadoAlreadySetUpViewController *_alreadySetupViewController;
    ASTAvocadoDetector *_detector;
    UINotificationFeedbackGenerator *_impactFeedbackGenerator;
    NSError *_lastError;
    ASTAvocadoFlowResult *_result;
    unsigned long long _preErrorFlowState;
    NSMutableDictionary *_soundPlayerDict;
    id <ASTAvocadoFlowControllerDelegate> _delegate;
    ASTAvocadoEnrollmentParameters *_parameters;
    UINavigationController *_navigationController;
}

+ (id)notSupportedAlertView;
+ (unsigned long long)retryableFlowStateForError:(id)arg1;
+ (_Bool)isRetryableError:(id)arg1;
+ (id)errorWithUnsupportedDevice;
+ (id)errorWithDeniedIOSPermission;
- (void).cxx_destruct;
@property(nonatomic, getter=getNavigationController) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) ASTAvocadoEnrollmentParameters *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) __weak id <ASTAvocadoFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSoundAndHapticsForAlignScanState:(long long)arg1;
- (void)triggerHapticFeedback;
- (void)playSoundName:(id)arg1;
- (void)recordFaceMatchConsentState:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)avocadoStateTracker:(id)arg1 shouldTakeImagesWithCount:(long long)arg2 forAlignScanState:(long long)arg3;
- (void)avocadoStateTracker:(id)arg1 didUpdateDetectionState:(long long)arg2 withRejectionReason:(long long)arg3;
- (void)avocadoStateTracker:(id)arg1 didUpdateAlignScaneState:(long long)arg2;
- (void)updateAlignScanViewControllerWithHysteresis;
- (void)avocadoDetector:(id)arg1 didUpdate:(id)arg2;
- (void)avocadoDetector:(id)arg1 didFailWithError:(id)arg2;
- (void)avocadoDetectorDidStop:(id)arg1;
- (void)avocadoDetectorDidStart:(id)arg1;
- (void)bottomSheetControllerDidDismissBottomSheet:(id)arg1;
- (void)setupStepViewController:(id)arg1 didTapRightFooterButton:(id)arg2;
- (void)setupStepViewController:(id)arg1 didTapLinkWithURLString:(id)arg2;
- (void)setupStepViewController:(id)arg1 didTapLeftFooterButton:(id)arg2;
- (_Bool)isCloudEnrollmentEnabled;
- (void)validateEnrollmentUsingCloudWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowFeedbackButton;
- (void)handleAlignScanAnimationsFinished;
- (void)waitForAlignScanAnimationsToFinishWithTimeout:(double)arg1;
- (void)checkIOSPermissionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)createAlreadySetUpViewController;
- (id)createCreatingModelViewController;
- (id)createAlignScanViewController;
- (id)createConsentBottomSheetController;
- (id)createValuePropViewController;
- (void)retryFromFlowState:(unsigned long long)arg1;
- (void)exitError;
- (void)executeError;
- (void)enterError:(id)arg1;
- (void)exitCancel;
- (void)executeCancel;
- (void)enterCancel;
- (void)exitCompletion;
- (void)executeCompletion;
- (void)enterCompletion;
- (void)exitEnableAvocado;
- (void)executeEnableAvocado;
- (void)enterEnableAvocado;
- (void)exitAlreadySetUp;
- (void)executeAlreadySetUp;
- (void)enterAlreadySetUp;
- (void)exitCreatingModel;
- (void)executeCreatingModel;
- (void)enterCreatingModel;
- (void)exitAwaitUploadWithError:(id)arg1;
- (void)executeAwaitUpload;
- (void)enterAwaitUpload;
- (void)exitAlignScan;
- (void)executeAlignScan;
- (void)enterAlignScan;
- (void)exitCameraSetup;
- (void)executeCameraSetup;
- (void)enterCameraSetup;
- (void)exitCloudCheckWithIsEligibleState:(_Bool)arg1;
- (void)executeCloudCheck;
- (void)enterCloudCheck;
- (void)exitConsentSheet;
- (void)executeConsentSheet;
- (void)enterConsentSheet;
- (void)exitValueProp;
- (void)executeValueProp;
- (void)enterValueProp;
- (void)start;
- (id)initWithSettingsMenuService:(id)arg1 parameters:(id)arg2 deviceService:(id)arg3;
- (id)eventMetadata;
- (void)logStopTimerEvent:(int)arg1;
- (void)logStartTimerEvent:(int)arg1;
- (void)logError:(id)arg1;
- (void)logEventType:(int)arg1;
- (void)logAwaitUploadExitEventWithSuccess:(_Bool)arg1;
- (void)logAwaitUploadEnterEvent;
- (void)logCreatingModelExitEvent;
- (void)logCreatingModelEnterEvent;
- (void)logAlignScanExitEvent;
- (void)logAlignScanStartButtonPressEvent;
- (void)logAlignScanEnterEvent;
- (void)logErrorEventWithError:(id)arg1;
- (void)logFinishEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


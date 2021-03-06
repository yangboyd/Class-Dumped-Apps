//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "A9VSModesContainerBaseProtocol-Protocol.h"
#import "A9VSSNPScannerViewControllerInterface-Protocol.h"
#import "FlowCameraProcessorDelegate-Protocol.h"

@class A9VSMessageCard, A9VSSNPScannerManager, FlowManager, NSArray, NSString, NSTimer, UIButton, UILabel, UITableViewController, UIView;
@protocol A9VSModesViewControllerBaseProtocol;

@interface A9VSSNPScannerViewController : UIViewController <FlowCameraProcessorDelegate, A9VSModesContainerBaseProtocol, A9VSSNPScannerViewControllerInterface>
{
    _Bool _isFlashLightMessageActive;
    _Bool _isTimeoutMessageActive;
    _Bool _isNetworkErrorMessageActive;
    _Bool _isFailureMessageActive;
    _Bool _isServerMessageActive;
    _Bool _isTorchOn;
    _Bool _recentPaymentsPulledUp;
    _Bool _gesturesAdded;
    NSString *metricName;
    NSString *fireflyModeName;
    A9VSSNPScannerManager *_manager;
    FlowManager *_flowManager;
    UIViewController<A9VSModesViewControllerBaseProtocol> *_containerObj;
    UIView *_messageBackground;
    UIView *_topGrayLayer;
    UIView *_scanView;
    UIView *_scanOverLayView;
    A9VSMessageCard *_timeoutMessage;
    A9VSMessageCard *_flashLightMessage;
    A9VSMessageCard *_networkErrorMessage;
    A9VSMessageCard *_failureMessage;
    A9VSMessageCard *_serverMessage;
    UILabel *_persistentInstructionLabel;
    NSTimer *_timeoutTimer;
    UIButton *_showMyBarcode;
    UITableViewController *_recentPaymentsVC;
    NSArray *_recentPaymentsVCTopConstraint;
    UIButton *_recentPaymentsCaretButton;
}

@property(nonatomic) _Bool gesturesAdded; // @synthesize gesturesAdded=_gesturesAdded;
@property(nonatomic) _Bool recentPaymentsPulledUp; // @synthesize recentPaymentsPulledUp=_recentPaymentsPulledUp;
@property(retain, nonatomic) UIButton *recentPaymentsCaretButton; // @synthesize recentPaymentsCaretButton=_recentPaymentsCaretButton;
@property(retain, nonatomic) NSArray *recentPaymentsVCTopConstraint; // @synthesize recentPaymentsVCTopConstraint=_recentPaymentsVCTopConstraint;
@property(nonatomic) __weak UITableViewController *recentPaymentsVC; // @synthesize recentPaymentsVC=_recentPaymentsVC;
@property(retain, nonatomic) UIButton *showMyBarcode; // @synthesize showMyBarcode=_showMyBarcode;
@property(nonatomic) _Bool isTorchOn; // @synthesize isTorchOn=_isTorchOn;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) UILabel *persistentInstructionLabel; // @synthesize persistentInstructionLabel=_persistentInstructionLabel;
@property(nonatomic) _Bool isServerMessageActive; // @synthesize isServerMessageActive=_isServerMessageActive;
@property(nonatomic) _Bool isFailureMessageActive; // @synthesize isFailureMessageActive=_isFailureMessageActive;
@property(nonatomic) _Bool isNetworkErrorMessageActive; // @synthesize isNetworkErrorMessageActive=_isNetworkErrorMessageActive;
@property(nonatomic) _Bool isTimeoutMessageActive; // @synthesize isTimeoutMessageActive=_isTimeoutMessageActive;
@property(nonatomic) _Bool isFlashLightMessageActive; // @synthesize isFlashLightMessageActive=_isFlashLightMessageActive;
@property(retain, nonatomic) A9VSMessageCard *serverMessage; // @synthesize serverMessage=_serverMessage;
@property(retain, nonatomic) A9VSMessageCard *failureMessage; // @synthesize failureMessage=_failureMessage;
@property(retain, nonatomic) A9VSMessageCard *networkErrorMessage; // @synthesize networkErrorMessage=_networkErrorMessage;
@property(retain, nonatomic) A9VSMessageCard *flashLightMessage; // @synthesize flashLightMessage=_flashLightMessage;
@property(retain, nonatomic) A9VSMessageCard *timeoutMessage; // @synthesize timeoutMessage=_timeoutMessage;
@property(retain, nonatomic) UIView *scanOverLayView; // @synthesize scanOverLayView=_scanOverLayView;
@property(retain, nonatomic) UIView *scanView; // @synthesize scanView=_scanView;
@property(retain, nonatomic) UIView *topGrayLayer; // @synthesize topGrayLayer=_topGrayLayer;
@property(retain, nonatomic) UIView *messageBackground; // @synthesize messageBackground=_messageBackground;
@property(nonatomic) __weak UIViewController<A9VSModesViewControllerBaseProtocol> *containerObj; // @synthesize containerObj=_containerObj;
@property(retain, nonatomic) FlowManager *flowManager; // @synthesize flowManager=_flowManager;
@property(nonatomic) __weak A9VSSNPScannerManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSString *fireflyModeName; // @synthesize fireflyModeName;
@property(retain, nonatomic) NSString *metricName; // @synthesize metricName;
- (void).cxx_destruct;
- (void)didReceiveSnapScanDestinationWithData:(id)arg1;
- (void)cameraManagerDidFailSetupWithError:(id)arg1;
- (void)cameraManagerAction:(id)arg1 didFailWithError:(id)arg2;
- (void)updateViewsForSA9VSSNPScanPullDownRecentPayments;
- (void)updateViewsForA9VSSNPScanPullUpRecentPayments;
- (void)presentShowRecentPaymentsVC:(id)arg1;
- (void)showRecentPayments;
- (void)openPageForURL:(id)arg1 forCodeType:(id)arg2;
- (void)updateViewsForA9VSSNPScanSuccess;
- (void)updateViewsForA9VSSNPScanPause;
- (void)updateViewsForA9VSSNPScanStart;
- (void)didTouchRecentPaymentsCaretButton;
- (void)dismissAnyMessages;
- (void)didTouchRescan;
- (void)didTouchRescanFromTimeout;
- (void)hideFailureMessage;
- (void)didTouchGotIt;
- (void)showFailureMessage;
- (void)hideTimeoutMessage;
- (void)showTimeoutMessage;
- (void)setStateToTimeout;
- (void)stopTimeOutTimer;
- (void)startTimeoutTimer;
- (void)hideNetworkErrorMessage;
- (void)showNetworkErrorMessage;
- (void)hideFlashMessage;
- (void)showFlashMessage;
- (void)hideServerMessage;
- (void)showServerMessage:(id)arg1 forCodeType:(id)arg2;
- (void)setUpMessageBackgroundView;
- (void)logEngineMetricsWithCounters:(id)arg1 timers:(id)arg2;
- (void)didDetermineSceneIsDark;
- (void)targetRecognitionDidChange:(id)arg1;
- (void)shouldHideRecentPayments:(_Bool)arg1;
- (void)rotateCaretWithFromValue:(double)arg1 toValue:(double)arg2;
- (void)pauseScanner;
- (void)viewDidBecomeActive;
- (void)viewDidBecomeInActive;
- (double)topConstraintPercentage;
- (double)screenHeight;
- (double)screenWidth;
- (void)adjustRecentPaymentsConstraints:(double)arg1 withOpacity:(double)arg2 animate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (double)recentPaymentsTopAttribute:(_Bool)arg1;
- (void)pullUpRecentpaymentsWithAnimation;
- (void)pullDownRecentpaymentsWithAnimation:(_Bool)arg1;
- (void)stopScanAnimation;
- (void)startScanAnimation;
- (void)didTouchShowMyBarcode;
- (void)addShowMyBarcodeButton;
- (void)addPersistantInstructionLabel;
- (void)addOverLayMask;
- (void)addBorderToOverLayMask;
- (void)hadleTapGesture;
- (void)handleSwipeDownGesture;
- (void)handleSwipeUpGesture;
- (void)addGestures;
- (void)setUpScanView;
- (void)setUpGreyLayer;
- (void)helpTapped:(id)arg1;
- (void)flashLightTapped:(id)arg1;
- (double)constantForBottomConstraintForCard:(id)arg1;
- (void)didTapCloseAction:(id)arg1;
- (void)userInteractionEnded;
- (void)userInteractionDetected;
- (id)modesInfoHeaderText;
- (void)configureContainerReference:(id)arg1;
- (id)rightPanelActionList;
- (void)performModeEngineSetup;
- (id)cameraCaptureModules;
- (void)orientationDidChange;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)addNotificationObservers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBAlertObserver.h"
#import "SBCoverSheetPresentationDelegate.h"
#import "SBDashBoardViewControllerDelegate.h"
#import "SBFPrivateAuthenticationObserver.h"
#import "SBHomeButtonShowPasscodeRecognizerDelegate.h"
#import "SBHomeButtonSuppressAfterUnlockRecognizerDelegate.h"
#import "SBIdleTimerCoordinating.h"
#import "SBIdleTimerProviding.h"
#import "SBLockScreenBiometricAuthenticationCoordinatorDelegate.h"
#import "SBPasscodeEntryAlertViewControllerDelegate.h"
#import "SBSRemoteAlertHandleObserver.h"
#import "SBTapToWakeDelegate.h"
#import "SBUILockStateProvider.h"
#import "SBWallpaperColorProvider.h"
#import "SBWallpaperObserver.h"

@class NSMutableDictionary, NSMutableSet, NSString, SBCoverSheetBiometricResourceObserver, SBDashBoardViewController, SBFAuthenticationAssertion, SBFUserAuthenticationController, SBIdleTimerCoordinatorHelper, SBLiftToWakeManager, SBLockScreenAutoUnlockAggregateRule, SBLockScreenBiometricAuthenticationCoordinator, SBLockScreenDisabledAssertionManager, SBLockScreenOrientationManager, SBLockScreenUnlockRequest, SBLockScreenViewControllerBase, SBPasscodeEntryAlertViewController, SBPearlInterlockObserver, SBSRemoteAlertHandle, SBTapToWakeController, UINotificationFeedbackGenerator;

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBPasscodeEntryAlertViewControllerDelegate, SBAlertObserver, SBFPrivateAuthenticationObserver, SBDashBoardViewControllerDelegate, SBWallpaperColorProvider, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, SBWallpaperObserver, SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBTapToWakeDelegate, SBSRemoteAlertHandleObserver, SBIdleTimerProviding, SBIdleTimerCoordinating>
{
    SBLockScreenBiometricAuthenticationCoordinator *_biometricAuthenticationCoordinator;
    SBCoverSheetBiometricResourceObserver *_biometricResourceObserver;
    SBPearlInterlockObserver *_pearlInterlockObserver;
    SBLockScreenViewControllerBase *_lockScreenViewController;
    id <SBHomeButtonShowPasscodeRecognizer> _homeButtonShowPasscodeRecognizer;
    id <SBHomeButtonSuppressAfterUnlockRecognizer> _homeButtonSuppressAfterUnlockRecognizer;
    _Bool _allowDisablePasscodeLockAssertion;
    _Bool _allowUILockUnlock;
    _Bool _isScreenOn;
    _Bool _isUILocked;
    SBLockScreenUnlockRequest *_unlockRequest;
    _Bool _saveUnlockRequest;
    _Bool _uiHasBeenLockedOnce;
    _Bool _uiUnlocking;
    SBPasscodeEntryAlertViewController *_passcodeEntryController;
    SBFAuthenticationAssertion *_sustainAuthenticationWhileUIUnlockedAssertion;
    SBLockScreenDisabledAssertionManager *_lockScreenDisabledAssertionManager;
    _Bool _isInLostMode;
    SBLockScreenAutoUnlockAggregateRule *_autoUnlockRuleAggregator;
    _Bool _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    SBSRemoteAlertHandle *_wakeToRemoteAlertHandle;
    CDUnknownBlockType _alertLaunchFinish;
    id <SBFLockOutStatusProvider> _lockOutController;
    SBFUserAuthenticationController *_userAuthController;
    SBLiftToWakeManager *_liftToWakeManager;
    SBTapToWakeController *_tapToWakeController;
    NSMutableDictionary *_mesaCoordinatorDisabledAssertions;
    NSMutableDictionary *_mesaWalletPreArmDisabledAssertions;
    NSMutableSet *_mesaWalletPreArmDisabledReasons;
    NSMutableDictionary *_mesaAutoUnlockingDisabledAssertions;
    NSMutableDictionary *_mesaUnlockingDisabledAssertions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    UINotificationFeedbackGenerator *_authenticationFeedbackGenerator;
    _Bool _isWaitingToLockUI;
    SBLockScreenOrientationManager *_lockScreenOrientationManager;
    CDUnknownBlockType _unlockActionBlock;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
@property(copy, nonatomic) CDUnknownBlockType unlockActionBlock; // @synthesize unlockActionBlock=_unlockActionBlock;
@property(readonly) _Bool isWaitingToLockUI; // @synthesize isWaitingToLockUI=_isWaitingToLockUI;
@property(readonly, nonatomic) SBLockScreenOrientationManager *lockScreenOrientationManager; // @synthesize lockScreenOrientationManager=_lockScreenOrientationManager;
@property(retain, nonatomic, getter=_tapToWakeController, setter=_setTapToWakeController:) SBTapToWakeController *tapToWakeController; // @synthesize tapToWakeController=_tapToWakeController;
@property(retain, nonatomic, getter=_liftToWakeManager, setter=_setLiftToWakeManager:) SBLiftToWakeManager *liftToWakeManager; // @synthesize liftToWakeManager=_liftToWakeManager;
@property(retain, nonatomic, getter=_userAuthController, setter=_setUserAuthController:) SBFUserAuthenticationController *userAuthController; // @synthesize userAuthController=_userAuthController;
@property(retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(nonatomic, getter=isUIUnlocking) _Bool UIUnlocking; // @synthesize UIUnlocking=_uiUnlocking;
@property(readonly) _Bool isUILocked; // @synthesize isUILocked=_isUILocked;
@property(readonly, nonatomic) SBLockScreenViewControllerBase *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void).cxx_destruct;
- (void)_emulateInterstitialPasscodePresentation;
- (_Bool)_shouldEmulateInterstitialPresentation;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)extendedKeybagLockStateChanged:(_Bool)arg1;
- (void)alertDidDeactivate:(id)arg1;
- (void)passcodeEntryAlertViewControllerWantsEmergencyCall:(id)arg1;
- (_Bool)passcodeEntryAlertViewController:(id)arg1 authenticatePasscode:(id)arg2;
- (_Bool)_shouldUnlockUIOnKeyDownEvent;
- (_Bool)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_shouldBeInSetupMode;
- (void)_maybeLaunchSetupForcingCheckIfNotBricked:(_Bool)arg1;
- (void)activationChanged:(id)arg1;
- (void)enableLostModePlugin;
- (_Bool)isInLostMode;
- (void)exitLostModeIfNecessaryFromRemoteRequest:(_Bool)arg1;
- (void)activateLostModeForRemoteLock:(_Bool)arg1;
- (void)_lockFeaturesForRemoteLock:(_Bool)arg1;
- (void)remoteLock:(_Bool)arg1;
- (_Bool)handlesHomeButtonSinglePresses;
- (void)homeButtonSuppressAfterUnlockRecognizerRequestsEndOfSuppression:(id)arg1;
- (void)noteMenuButtonDoublePress;
- (void)noteMenuButtonSinglePress;
- (void)_lockScreenDimmed:(id)arg1;
- (void)_handleBacklightDidTurnOff:(id)arg1;
- (void)_handleBacklightLevelWillChange:(id)arg1;
- (void)_resetOrRestoreStateChanged:(id)arg1;
- (void)_deviceBlockedChanged:(id)arg1;
- (void)_authenticationStateChanged:(id)arg1;
- (void)_evaluatePreArmDisabledAssertions;
- (void)_setupModeChanged;
- (void)_activeCallStateChanged;
- (void)attemptUnlockWithMesa;
- (void)attemptUnlockWithPasscode:(id)arg1;
- (void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_attemptUnlockWithPasscode:(id)arg1 mesa:(_Bool)arg2 finishUIUnlock:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_attemptUnlockWithPasscode:(id)arg1 mesa:(_Bool)arg2 finishUIUnlock:(_Bool)arg3;
- (_Bool)_attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(_Bool)arg2;
- (void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)_setMesaUnlockingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_postLockCompletedNotification:(_Bool)arg1;
- (void)_noteStartupTransitionDidBegin;
- (void)_noteStartupTransitionWillBegin;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_prepareWallpaperForStaticMode;
- (void)_prepareWallpaperForInteractiveMode;
- (void)_evaluateWallpaperMode;
- (void)_setHomeButtonSuppressAfterUnlockRecognizer:(id)arg1;
- (void)_setHomeButtonShowPasscodeRecognizer:(id)arg1;
- (void)updateSpringBoardStatusBarForLockScreenTeardown;
- (_Bool)_unlockWithRequest:(id)arg1 cancelPendingRequests:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)unlockWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isPasscodeVisible;
- (_Bool)isPasscodeEntryAlertVisible;
- (_Bool)_setPasscodeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPasscodeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_isUnlockDisabled;
- (void)_runUnlockActionBlock:(_Bool)arg1;
- (_Bool)isLockScreenDisabledForAssertion;
- (void)removeLockScreenDisableAssertion:(id)arg1;
- (void)addLockScreenDisableAssertion:(id)arg1;
- (_Bool)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (_Bool)unlockUIFromSource:(int)arg1 withOptions:(id)arg2;
- (_Bool)_canAttemptRealUIUnlockIgnoringBacklightNonsenseWithReason:(out id *)arg1;
- (void)_sendUILockStateChangedNotification;
- (_Bool)_lockUI;
- (void)_reallySetUILocked:(_Bool)arg1;
- (void)_setUILocked:(_Bool)arg1;
- (void)_createAuthenticationAssertion;
- (void)_clearAuthenticationLockAssertion;
- (void)_relockUIForButtonlikeSource:(int)arg1 afterCall:(_Bool)arg2;
- (void)_disconnectActiveCallIfNeededFromSource:(int)arg1;
- (_Bool)_shouldDisconnectCallWhenLockingForActiveAudioRoute;
- (void)_activateLockScreenAnimated:(_Bool)arg1 animationProvider:(CDUnknownBlockType)arg2 automatically:(_Bool)arg3 inScreenOffMode:(_Bool)arg4 dimInAnimation:(_Bool)arg5 dismissNotificationCenter:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_setMesaAutoUnlockingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_setMesaCoordinatorDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_setWalletPreArmDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_handleAuthenticationFeedback:(id)arg1;
- (void)_setIdleTimerCoordinator:(id)arg1;
- (void)homeButtonShowPasscodeRecognizerDidFailToRecognize:(id)arg1;
- (void)homeButtonShowPasscodeRecognizerRequestsPasscodeUIToBeShown:(id)arg1;
- (_Bool)biometricAuthenticationCoordinator:(id)arg1 requestsAuthenticationFeedback:(id)arg2;
- (_Bool)biometricAuthenticationCoordinator:(id)arg1 requestsUnlockWithIntent:(int)arg2;
- (void)tapToWakeControllerDidRecognizePencilWakeGesture:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)tapToWakeControllerDidRecognizeWakeGesture:(id)arg1;
- (void)_wakeScreenForTapToWake;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)averageColorForCurrentWallpaperInScreenRect:(struct CGRect)arg1;
- (void)dashBoardViewController:(id)arg1 unlockWithRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dashBoardViewController:(id)arg1 requestsTouchIDDisabled:(_Bool)arg2 forReason:(id)arg3;
- (void)dashBoardViewControllerIrisPlayingDidFinish:(id)arg1;
- (void)lockScreenViewControllerRequestsUnlock;
- (void)coverSheetPresentationManager:(id)arg1 unlockWithRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lockScreenViewControllerDidDismiss;
- (void)lockScreenViewControllerWillDismiss;
- (void)lockScreenViewControllerDidPresent;
- (void)lockScreenViewControllerWillPresent;
- (void)loadViewsIfNeeded;
- (void)setBiometricAutoUnlockingDisabled:(_Bool)arg1 forReason:(id)arg2;
@property(readonly) _Bool bioAuthenticatedWhileMenuButtonDown;
- (_Bool)_canHandleTransitionRequest:(id)arg1;
- (_Bool)handleTransitionRequest:(id)arg1;
- (id)biometricAuthenticationCoordinator;
@property(readonly, nonatomic) id <SBNotificationDestination> notificationDestination;
@property(readonly, nonatomic) SBDashBoardViewController *dashBoardViewController;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2;
@property(readonly) _Bool isLockScreenVisible;
@property(readonly) _Bool isLockScreenActive;
@property(readonly) _Bool shouldPlayLockSound;
@property(readonly) _Bool shouldTapToWake;
@property(readonly) _Bool shouldHandlePocketStateChanges;
- (_Bool)shouldLockUIAfterEndingCall;
- (_Bool)_shouldLockAfterEndingFaceTimeCall;
- (_Bool)_shouldLockAfterEndingTelephonyCall;
- (_Bool)hasUIEverBeenLocked;
- (id)_newLockScreenController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


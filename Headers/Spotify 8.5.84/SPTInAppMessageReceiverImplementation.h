//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageEventEmitterObserver-Protocol.h"
#import "SPTInAppMessageSDKMessageReceiver-Protocol.h"

@class NSNotificationCenter, NSString, SPTInAppMessageCardPresentationController, SPTInAppMessageNoteOverlayController, SPTInAppMessageNotePresentationController, SPTInAppMessageNowPlayingManagerRegistryImplementation, SPTInAppMessageSDKBannerPresentationController, SPTInAppMessageServiceLogger;
@protocol SPTAuthController, SPTBannerPresentationManager, SPTCarDetector, SPTCrashReporter, SPTFreeTierTooltipConditionalPresenter, SPTOfflineModeState, SPTSlateBuilderProvider, SPTSlateManager, SPTSnackbarConditionalPresenter;

@interface SPTInAppMessageReceiverImplementation : NSObject <SPTInAppMessageSDKMessageReceiver, SPTInAppMessageEventEmitterObserver>
{
    _Bool _cancelPresentation;
    SPTInAppMessageCardPresentationController *_cardPresentationController;
    SPTInAppMessageSDKBannerPresentationController *_bannerPresentationController;
    SPTInAppMessageNoteOverlayController *_noteOverlayController;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTCarDetector> _carDetector;
    SPTInAppMessageServiceLogger *_serviceLogger;
    id <SPTCrashReporter> _crashReporter;
    SPTInAppMessageNowPlayingManagerRegistryImplementation *_nowPlayingManagerRegistry;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTFreeTierTooltipConditionalPresenter> _freeTierTooltipPresenter;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTInAppMessageNotePresentationController *_notePresentationController;
    id <SPTAuthController> _authController;
    NSNotificationCenter *_notificationCenter;
    NSString *_requestedPattern;
    NSString *_requestedTriggerType;
    NSString *_currentTriggerPattern;
    NSString *_currentTriggerType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentTriggerType; // @synthesize currentTriggerType=_currentTriggerType;
@property(copy, nonatomic) NSString *currentTriggerPattern; // @synthesize currentTriggerPattern=_currentTriggerPattern;
@property(copy, nonatomic) NSString *requestedTriggerType; // @synthesize requestedTriggerType=_requestedTriggerType;
@property(copy, nonatomic) NSString *requestedPattern; // @synthesize requestedPattern=_requestedPattern;
@property(nonatomic) _Bool cancelPresentation; // @synthesize cancelPresentation=_cancelPresentation;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(retain, nonatomic) SPTInAppMessageNotePresentationController *notePresentationController; // @synthesize notePresentationController=_notePresentationController;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> freeTierTooltipPresenter; // @synthesize freeTierTooltipPresenter=_freeTierTooltipPresenter;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, nonatomic) SPTInAppMessageNowPlayingManagerRegistryImplementation *nowPlayingManagerRegistry; // @synthesize nowPlayingManagerRegistry=_nowPlayingManagerRegistry;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(readonly, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(readonly, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) SPTInAppMessageNoteOverlayController *noteOverlayController; // @synthesize noteOverlayController=_noteOverlayController;
@property(retain, nonatomic) SPTInAppMessageSDKBannerPresentationController *bannerPresentationController; // @synthesize bannerPresentationController=_bannerPresentationController;
@property(retain, nonatomic) SPTInAppMessageCardPresentationController *cardPresentationController; // @synthesize cardPresentationController=_cardPresentationController;
- (void)logMessageDiscardedForReason:(id)arg1 triggerPattern:(id)arg2 triggerType:(id)arg3 viewModel:(id)arg4;
- (void)eventEmitterDidRequestMessageForPattern:(id)arg1 triggerType:(id)arg2;
- (void)cancelMessagePresentation:(id)arg1;
- (void)didReceiveMessageViewModel:(id)arg1 matchedPattern:(id)arg2 triggerType:(id)arg3 requestedPattern:(id)arg4;
- (void)dealloc;
- (id)initWithSlateManager:(id)arg1 slateBuilderProvider:(id)arg2 noteOverlayController:(id)arg3 bannerPresentationManager:(id)arg4 freeTierTooltipPresenter:(id)arg5 snackbarPresenter:(id)arg6 nowPlayingManagerRegistry:(id)arg7 offlineModeState:(id)arg8 carDetector:(id)arg9 serviceLogger:(id)arg10 crashReporter:(id)arg11 authController:(id)arg12 notificationCenter:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


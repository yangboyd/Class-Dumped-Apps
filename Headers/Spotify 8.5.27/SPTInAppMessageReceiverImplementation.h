//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageSDKMessageReceiver-Protocol.h"

@class NSString, SPTInAppMessageCardPresentationController, SPTInAppMessageNoteOverlayController, SPTInAppMessageNotePresentationController, SPTInAppMessageNowPlayingManagerRegistryImplementation, SPTInAppMessageSDKBannerPresentationController, SPTInAppMessageServiceLogger;
@protocol SPTAuthController, SPTBannerPresentationManager, SPTCrashReporter, SPTExternalIntegrationDriverDistractionController, SPTFreeTierTooltipConditionalPresenter, SPTOfflineModeState, SPTSlateBuilderProvider, SPTSlateManager, SPTSnackbarConditionalPresenter, SPTTooltipPresentationManager;

@interface SPTInAppMessageReceiverImplementation : NSObject <SPTInAppMessageSDKMessageReceiver>
{
    SPTInAppMessageCardPresentationController *_cardPresentationController;
    SPTInAppMessageSDKBannerPresentationController *_bannerPresentationController;
    SPTInAppMessageNoteOverlayController *_noteOverlayController;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    SPTInAppMessageServiceLogger *_serviceLogger;
    id <SPTCrashReporter> _crashReporter;
    SPTInAppMessageNowPlayingManagerRegistryImplementation *_nowPlayingManagerRegistry;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTTooltipPresentationManager> _tooltipPresentationManager;
    id <SPTFreeTierTooltipConditionalPresenter> _freeTierTooltipPresenter;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTInAppMessageNotePresentationController *_notePresentationController;
    id <SPTAuthController> _authController;
}

@property(readonly, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(retain, nonatomic) SPTInAppMessageNotePresentationController *notePresentationController; // @synthesize notePresentationController=_notePresentationController;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> freeTierTooltipPresenter; // @synthesize freeTierTooltipPresenter=_freeTierTooltipPresenter;
@property(readonly, nonatomic) id <SPTTooltipPresentationManager> tooltipPresentationManager; // @synthesize tooltipPresentationManager=_tooltipPresentationManager;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, nonatomic) SPTInAppMessageNowPlayingManagerRegistryImplementation *nowPlayingManagerRegistry; // @synthesize nowPlayingManagerRegistry=_nowPlayingManagerRegistry;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(readonly, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(readonly, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) SPTInAppMessageNoteOverlayController *noteOverlayController; // @synthesize noteOverlayController=_noteOverlayController;
@property(retain, nonatomic) SPTInAppMessageSDKBannerPresentationController *bannerPresentationController; // @synthesize bannerPresentationController=_bannerPresentationController;
@property(retain, nonatomic) SPTInAppMessageCardPresentationController *cardPresentationController; // @synthesize cardPresentationController=_cardPresentationController;
- (void).cxx_destruct;
- (void)didReceiveMessageViewModel:(id)arg1 matchedPattern:(id)arg2 triggerType:(id)arg3;
- (id)initWithSlateManager:(id)arg1 slateBuilderProvider:(id)arg2 noteOverlayController:(id)arg3 bannerPresentationManager:(id)arg4 tooltipPresentationManager:(id)arg5 freeTierTooltipPresenter:(id)arg6 snackbarPresenter:(id)arg7 nowPlayingManagerRegistry:(id)arg8 offlineModeState:(id)arg9 driverDistractionController:(id)arg10 serviceLogger:(id)arg11 crashReporter:(id)arg12 authController:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


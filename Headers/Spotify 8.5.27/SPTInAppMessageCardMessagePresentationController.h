//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthControllerObserver-Protocol.h"
#import "SPTInAppMessageCardMessageWebViewContentDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"

@class NSDictionary, NSString, SPTInAppMessageCardMessageViewModel, SPTInAppMessageServiceLogger;
@protocol SPTAuthController, SPTCrashReporter, SPTExternalIntegrationDriverDistractionController, SPTOfflineModeState, SPTSlate, SPTSlateBuilderProvider, SPTSlateManager;

@interface SPTInAppMessageCardMessagePresentationController : NSObject <SPTSlateDelegate, SPTSlateDataSource, SPTInAppMessageCardMessageWebViewContentDelegate, SPTOfflineModeStateObserver, SPTAuthControllerObserver>
{
    _Bool _presentingCard;
    _Bool _offline;
    SPTInAppMessageCardMessageViewModel *_viewModel;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTSlate> _slate;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    SPTInAppMessageServiceLogger *_serviceLogger;
    NSDictionary *_cancelationInfo;
    id <SPTCrashReporter> _crashReporter;
    id <SPTAuthController> _authController;
}

@property(readonly, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(copy, nonatomic) NSDictionary *cancelationInfo; // @synthesize cancelationInfo=_cancelationInfo;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(retain, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(retain, nonatomic) SPTInAppMessageCardMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic, getter=isPresentingCard) _Bool presentingCard; // @synthesize presentingCard=_presentingCard;
- (void).cxx_destruct;
- (void)authDidStart;
- (id)messageFormat;
- (void)dismissCardMessageIfAdPlaying;
- (_Bool)canPresentSlate;
- (void)cancelMessagePresentation:(id)arg1;
- (void)logMessageDiscardedWithReason:(id)arg1;
- (void)logMessagePresented;
- (void)dismissCardMessageOverlayContentUnit;
- (_Bool)present;
- (_Bool)slateShouldOnlyDismissOnFooterTap:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (id)dismissTextForSlate:(id)arg1;
- (id)titleForSlate:(id)arg1;
- (void)slateDidDismiss:(id)arg1;
- (_Bool)shouldFullscreen;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)provideSlate;
- (_Bool)isIpad;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 slateManager:(id)arg2 slateBuilderProvider:(id)arg3 offlineModeState:(id)arg4 driverDistractionController:(id)arg5 serviceLogger:(id)arg6 crashReporter:(id)arg7 authController:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


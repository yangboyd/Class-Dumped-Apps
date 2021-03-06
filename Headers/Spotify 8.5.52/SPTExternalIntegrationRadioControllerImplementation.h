//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationRadioController-Protocol.h"

@class NSString, SPTExternalIntegrationPlatformLoggerImplementation, SPTObserverManager;
@protocol SPTExternalIntegrationDebugLog, SPTExternalIntegrationPlaybackController, SPTRadioAPI, SPTRadioManager, SPTRadioRemoteConfigProperties;

@interface SPTExternalIntegrationRadioControllerImplementation : NSObject <SPTExternalIntegrationRadioController>
{
    SPTObserverManager *_observerManager;
    id <SPTRadioManager> _radioManager;
    id <SPTRadioAPI> _radioAPI;
    id <SPTRadioRemoteConfigProperties> _radioRemoteConfigProperties;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    SPTExternalIntegrationPlatformLoggerImplementation *_logger;
    id <SPTExternalIntegrationDebugLog> _debugLog;
}

@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) SPTExternalIntegrationPlatformLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(retain, nonatomic) id <SPTRadioRemoteConfigProperties> radioRemoteConfigProperties; // @synthesize radioRemoteConfigProperties=_radioRemoteConfigProperties;
@property(readonly, nonatomic) id <SPTRadioAPI> radioAPI; // @synthesize radioAPI=_radioAPI;
@property(readonly, nonatomic) id <SPTRadioManager> radioManager; // @synthesize radioManager=_radioManager;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)thumbIsDownForTrackWithURI:(id)arg1;
- (_Bool)thumbIsUpForTrackWithURI:(id)arg1;
- (_Bool)canThumbTrackInPlayerState:(id)arg1;
- (void)thumbDownTrackInPlayerState:(id)arg1 externalActionOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)thumbUpTrackInPlayerState:(id)arg1 externalActionOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isPlayingRadioInPlayerState:(id)arg1;
- (_Bool)canStartRadioSeededByTrackURI:(id)arg1;
- (_Bool)canStartTrackRadioSeededByPlayerState:(id)arg1;
- (void)startRadioForTrackURI:(id)arg1 externalActionOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPlaybackController:(id)arg1 radioManager:(id)arg2 radioAPI:(id)arg3 radioRemoteConfigProperties:(id)arg4 debugLog:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


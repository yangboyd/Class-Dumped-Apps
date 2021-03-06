//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSingleVideoLifecycleStateObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoLiveStreamCheckerDelegate-Protocol.h>
#import <Module_Framework/YTSingleVideoMediaStateObserver-Protocol.h>

@class NSNumber, NSString, YTIHeartbeatRequest, YTIHeartbeatResponse, YTSingleVideoLicenseChecker, YTSingleVideoLiveStreamChecker, YTTimedAction;
@protocol YTEventLogger, YTHeartbeatService, YTSingleVideoHeartbeatControllerDelegate, YTSingleVideoObservable;

@interface YTSingleVideoHeartbeatController : NSObject <YTSingleVideoLifecycleStateObserver, YTSingleVideoLiveStreamCheckerDelegate, YTSingleVideoMediaStateObserver>
{
    id <YTHeartbeatService> _heartbeatService;
    id <YTEventLogger> _eventLogger;
    YTSingleVideoLicenseChecker *_licenseChecker;
    YTSingleVideoLiveStreamChecker *_liveStreamChecker;
    id <YTSingleVideoHeartbeatControllerDelegate> _delegate;
    _Bool _handlerRequiresHeartbeats;
    CDUnknownBlockType _singleUseHeartbeatResponseBlock;
    NSNumber *_currentRequestID;
    YTTimedAction *_nextHeartbeatTimedAction;
    YTIHeartbeatRequest *_pendingHeartbeatRequest;
    _Bool _serverFilledStopHeartbeat;
    YTIHeartbeatResponse *_latestHeartbeatResponse;
    id <YTSingleVideoObservable> _video;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <YTSingleVideoObservable> video; // @synthesize video=_video;
- (id)playerResponse;
- (double)secondsBetweenHeartbeats;
- (id)createHeartbeatRequest;
- (_Bool)eligibleForHeartbeats;
- (_Bool)eligibleForHeartbeatsViaServer;
- (_Bool)eligibleForHeartbeatsViaHandler;
- (_Bool)eligibleForHeartbeatsViaPlayerResponse;
- (_Bool)isWaitingForLiveStreamToStart;
- (_Bool)eligibleForHeartbeatsViaLiveStreamabilityRenderer;
- (_Bool)sendingHeartbeats;
- (_Bool)shouldSendHeartbeats;
- (void)handleError:(id)arg1 forRequest:(id)arg2;
- (void)prepareToSendNextHeartbeat;
- (void)retrieveStopHeartbeatFromResponseIfNeeded:(id)arg1;
- (_Bool)finishIfNeeded;
- (_Bool)transitionIfNeeded;
- (_Bool)haltIfNeeded;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2;
- (void)sendHeartbeat;
- (void)sendHeartbeatIfNeeded;
- (void)scheduleNextHeartbeat;
- (void)scheduleNextHeartbeatIfNeeded;
- (void)cancelNextHeartbeat;
- (void)cancelNextHeartbeatIfNeeded;
- (_Bool)liveStreamChecker:(id)arg1 shouldIgnoreTransition:(id)arg2 timing:(int)arg3 video:(id)arg4;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)singleVideo:(id)arg1 lifecycleStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)checkIfLiveStreamWentOfflineWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setHandlerRequiresHeartbeats:(_Bool)arg1;
- (void)shutDownIfNeeded;
- (void)startIfNeeded;
- (id)initWithDelegate:(id)arg1 video:(id)arg2 handlerRequiresHeartbeats:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


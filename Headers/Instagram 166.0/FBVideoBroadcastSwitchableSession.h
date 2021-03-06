//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBVideoBroadcastSession-Protocol.h>
#import <InstagramAppCoreFramework/FBVideoBroadcastSessionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/FBVideoBroadcastSessionLiveWithDelegate-Protocol.h>
#import <InstagramAppCoreFramework/FBVideoBroadcastSwitchableStateProvider-Protocol.h>

@class FBVideoBroadcastInfraSwitchHandler, FBVideoBroadcastSessionBase, NSMutableSet, NSSet, NSString;
@protocol FBVideoBroadcastDynamicConfigProvider, FBVideoBroadcastRTCSessionFactoryProtocol, FBVideoBroadcastSessionConnectionSetupDelegate, FBVideoBroadcastSessionDelegate, FBVideoBroadcastSessionLiveWithDelegate><FBVideoBroadcastSwitchableSessionDelegate><FBVideoBroadcastSessionDelegate, FBVideoBroadcastSwitchableSessionDelegateShim, FBVideoStreamingLogger;

@interface FBVideoBroadcastSwitchableSession : NSObject <FBVideoBroadcastSessionDelegate, FBVideoBroadcastSessionLiveWithDelegate, FBVideoBroadcastSession, FBVideoBroadcastSwitchableStateProvider>
{
    // Error parsing type: {SharedMutexImpl<false, void, std::atomic, false, false>="state_"{atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >="__a_value"AI}}}, name: _sessionImlMutex
    CDStruct_b14ccfc0 _rtcConfig;
    id <FBVideoBroadcastDynamicConfigProvider> _dynamicConfig;
    id <FBVideoBroadcastRTCSessionFactoryProtocol> _rtcSessionFactory;
    CDUnknownBlockType _rtmpSessionFactory;
    FBVideoBroadcastSessionBase *_broadcastSessionImpl;
    FBVideoBroadcastSessionBase *_upcomingBroadcastSessionImpl;
    FBVideoBroadcastInfraSwitchHandler *_infraSwitchHandler;
    _Bool _skipFlushDuringSwap;
    long long _liveSwapState;
    id <FBVideoStreamingLogger> _logger;
    _Bool _awaitingFirstRTCFrame;
    _Bool _awaitingFirstRTCDVRAudio;
    id <FBVideoBroadcastSessionLiveWithDelegate><FBVideoBroadcastSwitchableSessionDelegate><FBVideoBroadcastSessionDelegate> _delegate;
    id <FBVideoBroadcastSwitchableSessionDelegateShim> _delegateShim;
    struct FBVideoBroadcastRtmpSwapStats _swapStats;
    NSMutableSet *_guestsToBeInvitedAfterSwap;
    unsigned long long _layoutToUseAfterSwap;
    _Bool _abortFutureSwapBacks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_switchToRTC;
- (void)_abortLiveSwapIfInProgress;
- (void)_initializeBroadcastSessionBasedOnState;
- (long long)liveSwapState;
- (void)switchToRTMPWithTimeout:(unsigned long long)arg1;
- (void)setDiskRecorder:(id)arg1;
- (void)broadcastSession:(id)arg1 guestDidFailToLeaveBroadcast:(id)arg2;
- (void)broadcastSessionDidReceiveDismiss:(id)arg1 reason:(id)arg2;
- (void)broadcastSessionDidReceiveInvitation:(id)arg1;
- (void)broadcastSession:(id)arg1 guestDidLeaveBroadcast:(id)arg2;
- (void)broadcastSession:(id)arg1 isUnreachableForGuest:(id)arg2;
- (void)broadcastSession:(id)arg1 didResumeForGuest:(id)arg2;
- (void)broadcastSession:(id)arg1 didStallForGuest:(id)arg2;
- (void)broadcastSession:(id)arg1 guest:(id)arg2 didJoinBroadcastWithVideoView:(id)arg3;
- (void)broadcastSession:(id)arg1 guestDidAcceptInvitation:(id)arg2;
- (void)broadcastSession:(id)arg1 guestDidDeclineInvitation:(id)arg2;
- (void)broadcastSessionGuestDidNotRespondToInvitation:(id)arg1;
- (void)broadcastSession:(id)arg1 didUpdateStatusToConnectingGuest:(id)arg2;
- (void)broadcastSession:(id)arg1 didInviteGuests:(id)arg2;
- (void)broadcastSession:(id)arg1 didRemoveCurrentOrInvitedGuests:(id)arg2;
- (void)broadcastSession:(id)arg1 didUpdateStreamingInfo:(struct Info)arg2;
- (void)broadcastSession:(id)arg1 completedSpeedTestWithStatus:(struct FBNetworkSpeedTestStatus)arg2;
- (void)broadcastSessionDidProcessAudio:(id)arg1;
- (void)broadcastSession:(id)arg1 didChangeBaseTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)broadcastSession:(id)arg1 setAccumulatedStreamGapSeconds:(id)arg2;
- (void)broadcastSession:(id)arg1 didDropFrameWithType:(id)arg2 pts:(CDStruct_1b6d18a9)arg3 dropReason:(id)arg4;
- (void)broadcastSession:(id)arg1 didDropPackets:(shared_ptr_3f407d03)arg2 dropReason:(id)arg3;
- (void)broadcastSessionSendDidTimeout:(id)arg1;
- (void)broadcastSessionDidLoseConnection:(id)arg1 error:(id)arg2;
- (void)broadcastSessionDidFail:(id)arg1 withLoggingInfo:(struct FBVideoBroadcastSessionLoggingInfo)arg2;
- (void)broadcastSessionDidChangeBitrate:(shared_ptr_44918ef6)arg1;
- (void)broadcastSessionDidDisconnectNetwork:(id)arg1 withEndOfStreamError:(id)arg2;
- (void)broadcastSessionDidFinishRecording:(id)arg1 withResult:(id)arg2;
- (void)broadcastSessionDidConnect:(id)arg1 withSpeedTestStatus:(struct FBNetworkSpeedTestStatus)arg2;
- (id)diskRecorder;
- (struct DiskVideoRecorderConfig)diskVideoRecorderConfig;
- (int)_rtmpBroadcastSessionOutputBitrateKbps;
- (CDStruct_1b6d18a9)convertDeviceTimestampToStreamTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)baseTimestamp;
- (void)setBaseTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)lastRecordedAudioTimestamp;
- (long long)readyState;
- (_Bool)hasSentMediaDataToServer;
- (_Bool)isConnectedToServer;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (Class)videoEncoderClass;
- (void)onInterruptionEnded;
- (void)onInterruptionForReasonBackground:(_Bool)arg1;
- (struct FBVideoBroadcastSessionStats)stats;
- (void)removeForceDisableGuestInviteReason:(unsigned long long)arg1;
- (void)addForceDisableGuestInviteReason:(unsigned long long)arg1;
- (_Bool)isBroadcastFull;
- (_Bool)isInvitable:(id)arg1 byBroadcasterID:(id)arg2;
- (void)declineInvitation;
- (void)leave;
- (void)join;
- (void)cancelInvitationForGuest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeGuest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ringUsers:(id)arg1 withLayout:(unsigned long long)arg2;
- (void)resumeAndUpload:(_Bool)arg1;
- (void)pause:(_Bool)arg1;
- (void)swapVideoWidthAndHeightAfterOrientationChange;
@property __weak id <FBVideoBroadcastSessionConnectionSetupDelegate> connectionSetupDelegate;
- (void)stop:(_Bool)arg1;
- (void)connectAndImmediatelyAllowStreaming:(_Bool)arg1;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
@property(readonly, copy, nonatomic) NSSet *currentOrInvitedGuests;
@property __weak id <FBVideoBroadcastSessionDelegate> delegate;
- (void)updateRtmpConfig:(CDStruct_6c65f63b)arg1;
- (void)finallyFetchedBroadcastID:(id)arg1 withWebRTCSessionConfig:(CDStruct_b14ccfc0)arg2 rtmpConfig:(CDStruct_6c65f63b)arg3 rtmpMessageChannel:(id)arg4;
- (void)startOffline;
@property(retain) FBVideoBroadcastSessionBase *broadcastSessionImpl;
- (id)initWithState:(long long)arg1 rtmpSessionFactory:(CDUnknownBlockType)arg2 webRTCConfig:(CDStruct_b14ccfc0)arg3 dynamicConfigProvider:(id)arg4 webRTCSessionFactory:(id)arg5 skipFlushDuringSwap:(_Bool)arg6 logger:(id)arg7 sessionDelegateShim:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


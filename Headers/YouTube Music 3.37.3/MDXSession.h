//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXChannelObserver-Protocol.h"
#import "MDXQueueController-Protocol.h"
#import "MDXScreenPlaybackController-Protocol.h"
#import "MDXVirtualVolumeControllerDelegate-Protocol.h"
#import "YTLastActionObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class MDXAdSessionState, MDXCaptionTrack, MDXChannelMessageRouter, MDXChannelObserverProxy, MDXVirtualVolumeController, NSArray, NSError, NSHashTable, NSMutableArray, NSString, YTCPN, YTIAudioTrack, YTMonotonicDate, YTTimedAction;
@protocol MDXChannel, MDXScreen, MDXSessionConnectionDelegate;

@interface MDXSession : NSObject <MDXChannelObserver, MDXVirtualVolumeControllerDelegate, YTLastActionObserver, YTUserChangedObserver, YTSystemNotificationsObserver, MDXQueueController, MDXScreenPlaybackController>
{
    NSMutableArray *_messageQueue;
    YTTimedAction *_messageTimedAction;
    double _reconnectionStart;
    YTTimedAction *_reconnectionTimedAction;
    YTMonotonicDate *_connectionStartedDate;
    YTMonotonicDate *_connectionEstablishedDate;
    id <MDXChannel> _channel;
    MDXChannelObserverProxy *_channelObservers;
    MDXChannelMessageRouter *_channelMessageRouter;
    double _lastKnownVideoCurrentTime;
    double _lastKnownVideoSeekableStart;
    double _lastKnownVideoSeekableEnd;
    double _lastKnownVideoLiveIngestionTime;
    double _timestampLastKnownVideoTimesReceived;
    double _lastKnownContentVideoCurrentTime;
    double _timestampLastKnownContentVideoTimesReceived;
    NSArray *_connectedDevices;
    NSHashTable *_sessionObservers;
    MDXVirtualVolumeController *_volumeController;
    YTIAudioTrack *_currentAudioTrack;
    YTMonotonicDate *_timeOfLastUserAction;
    int _loggingSessionType;
    int _loggingConnectionState;
    int _loggingPreviousConnectionState;
    _Bool _loggingReconnectionInProgress;
    _Bool _audioSession;
    _Bool _playingAd;
    MDXAdSessionState *_adSessionState;
    NSArray *_availableAudioTracks;
    MDXCaptionTrack *_currentCaptionTrack;
    unsigned long long _currentIndex;
    NSString *_currentVideoID;
    YTCPN *_currentVideoCPN;
    NSString *_currentListID;
    NSString *_currentPlayerParams;
    NSString *_currentWatchParams;
    NSString *_firstVideoID;
    long long _MDXPlayerState;
    long long _volume;
    id <MDXScreen> _screen;
    long long _connectionState;
    long long _playlistExpansionType;
    id <MDXSessionConnectionDelegate> _connectionDelegate;
    NSError *_disconnectError;
}

@property(readonly, nonatomic) NSError *disconnectError; // @synthesize disconnectError=_disconnectError;
@property(readonly, nonatomic) NSArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(readonly, nonatomic) id <MDXChannel> channel; // @synthesize channel=_channel;
@property(nonatomic) __weak id <MDXSessionConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(nonatomic, getter=isPlayingAd) _Bool playingAd; // @synthesize playingAd=_playingAd;
@property(nonatomic) long long playlistExpansionType; // @synthesize playlistExpansionType=_playlistExpansionType;
@property(readonly, nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic, getter=isAudioSession) _Bool audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, nonatomic) id <MDXScreen> screen; // @synthesize screen=_screen;
@property(nonatomic) long long volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) long long MDXPlayerState; // @synthesize MDXPlayerState=_MDXPlayerState;
@property(readonly, nonatomic) NSString *firstVideoID; // @synthesize firstVideoID=_firstVideoID;
@property(readonly, nonatomic) NSString *currentWatchParams; // @synthesize currentWatchParams=_currentWatchParams;
@property(readonly, nonatomic) NSString *currentPlayerParams; // @synthesize currentPlayerParams=_currentPlayerParams;
@property(readonly, nonatomic) NSString *currentListID; // @synthesize currentListID=_currentListID;
@property(readonly, nonatomic) YTCPN *currentVideoCPN; // @synthesize currentVideoCPN=_currentVideoCPN;
@property(readonly, nonatomic) NSString *currentVideoID; // @synthesize currentVideoID=_currentVideoID;
@property(readonly, nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) MDXCaptionTrack *currentCaptionTrack; // @synthesize currentCaptionTrack=_currentCaptionTrack;
@property(readonly, nonatomic) NSArray *availableAudioTracks; // @synthesize availableAudioTracks=_availableAudioTracks;
@property(readonly, nonatomic) MDXAdSessionState *adSessionState; // @synthesize adSessionState=_adSessionState;
- (void).cxx_destruct;
- (void)voiceOverStatusChanged;
- (void)unregisterChannelObserver;
- (void)registerChannelObserver;
- (_Bool)lockScreenControlsEnabled;
- (_Bool)isFijiSkippableAdEnabled;
- (_Bool)isAutoplayEnabled;
- (_Bool)isFijiEnabled;
- (void)loadAdInfoWithVideoID:(id)arg1 adNextParams:(id)arg2;
- (void)setLastKnownVideoTimesWithMessage:(id)arg1;
- (void)setMDXPlayerStateWithAdState:(long long)arg1;
- (void)setMDXPlayerState:(long long)arg1;
- (void)updateVolume:(long long)arg1;
- (_Bool)isAdPlayerState:(long long)arg1;
- (void)lockInLastKnownVideoTimesWithCurrentTime:(double)arg1;
- (id)currentNavigationEndpoint;
- (void)notifyAdInfoChange;
- (void)notifyAdWatchNextResponseReady;
- (void)notifyAdSessionStarted;
- (void)notifyAdPlayerResponseReady;
- (void)notifyOnHasPreviousNextChangedWithHasPrevious:(_Bool)arg1 hasNext:(_Bool)arg2;
- (void)notifySubtitlesTrackDidChange:(id)arg1;
- (void)notifyAudioTrackListChanged:(id)arg1;
- (void)notifyAudioTrackDidChange:(id)arg1;
- (void)notifyAutoplayUpNext:(id)arg1;
- (void)notifyAutoplayModeChanged:(long long)arg1;
- (void)notifyAutoplayStateChanged:(long long)arg1;
- (void)notifyPlayerStateDidChange;
- (void)notifyVolumeLevelDidChange;
- (void)notifyPlaylistDidChange;
- (void)notifyVideoDidChange;
- (void)notifyMediaTimesDidChange;
- (void)notifyConnectionStateDidChange;
- (void)actionDidOccur;
- (void)clearAutoplay;
- (void)destroyVolumeController;
- (void)createVolumeController;
- (long long)hardwareVolume;
- (void)initializeVolume;
- (long long)loggingMillisecondsSinceConnectionEstablished;
- (long long)loggingMillisecondsSinceConnectionStarted;
- (void)setConnectionState:(long long)arg1;
- (void)sendDataDelayed;
- (void)sendMessage:(id)arg1;
- (void)reconnectAfterError;
- (void)prepareToReconnectAfterError:(id)arg1 withDelay:(double)arg2;
- (void)disconnectWithError:(id)arg1;
- (void)stopScreenApp;
- (void)leaveScreenApp;
- (void)stopReceiverApplicationIfNeededWithUserAction:(_Bool)arg1;
- (void)invalidateReconnectionTimedAction;
- (void)connectToOnlineScreenWithPlaybackDescriptor:(id)arg1 uiParam:(_Bool)arg2;
- (void)makeAdWatchNextRequestWithAdVideoID:(id)arg1 adNextParams:(id)arg2;
- (void)appWillTerminate:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)userDidChange;
- (void)volumeDidDecrease;
- (void)volumeDidIncrease;
- (void)channel:(id)arg1 didEncounterError:(id)arg2;
- (void)channel:(id)arg1 didReceiveMessage:(id)arg2;
- (long long)adInfoVisibilityStateWithMessage:(id)arg1;
- (long long)playerStateWithMessage:(id)arg1;
- (void)unhandledMessageReceived:(id)arg1;
- (void)onHasPreviousNextChanged:(id)arg1;
- (void)requestAssistedSignIn:(id)arg1;
- (void)onVideoQualityChanged:(id)arg1;
- (void)onPlaylistModeChanged:(id)arg1;
- (void)onSubtitlesTrackChanged:(id)arg1;
- (void)onAudioTrackChanged:(id)arg1;
- (void)onAudioTrackListChanged:(id)arg1;
- (void)autoplayUpNext:(id)arg1;
- (void)onAutoplayModeChanged:(id)arg1;
- (void)autoplayDismissed:(id)arg1;
- (void)nowAutoplaying:(id)arg1;
- (void)onAdStateChange:(id)arg1;
- (void)onAdInfoChange:(id)arg1;
- (void)adPlaying:(id)arg1;
- (void)gracefulReconnect:(id)arg1;
- (void)onVolumeChanged:(id)arg1;
- (void)onStateChange:(id)arg1;
- (void)nowPlayingPlaylist:(id)arg1;
- (void)nowPlaying:(id)arg1;
- (void)playlistModified:(id)arg1;
- (void)loungeScreenDisconnected:(id)arg1;
- (void)ignoredMessageReceived:(id)arg1;
- (void)remoteDisconnected:(id)arg1;
- (void)sessionStatus:(id)arg1;
- (void)loungeStatus:(id)arg1;
- (void)sendDebugCommand:(id)arg1;
- (void)skipAd;
- (void)unsetCaptionTrackForVideoID:(id)arg1;
- (void)setCaptionTrack:(id)arg1 forVideoID:(id)arg2;
- (void)setImpactedSessionServerEvent:(id)arg1;
- (void)setMDXVolume:(long long)arg1;
- (void)setAudioTrack:(id)arg1 forVideoID:(id)arg2;
- (void)seekTo:(double)arg1;
- (void)next;
- (void)previous;
- (void)dpadBack;
- (void)dpadSelect;
- (void)dpadRight;
- (void)dpadLeft;
- (void)dpadDown;
- (void)dpadUp;
- (void)sendDpadMessage:(id)arg1;
- (void)voiceCommandWithStatus:(long long)arg1 stableText:(id)arg2 unstableText:(id)arg3;
- (void)stop;
- (void)replay;
- (void)pause;
- (void)play;
- (_Bool)audioSession;
- (void)setAutoplayEnabledForTV:(_Bool)arg1;
- (void)dismissAutoplay;
- (void)clearPlaylist;
- (void)removeVideoWithID:(id)arg1;
- (void)moveVideoWithID:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)insertVideoWithID:(id)arg1;
- (void)insertVideosWithIDs:(id)arg1;
- (void)insertVideoListWithID:(id)arg1;
- (void)addVideoWithID:(id)arg1;
- (void)addVideosWithPlaylistID:(id)arg1;
- (void)setPlaybackDescriptor:(id)arg1;
- (void)setWatchEndpoint:(id)arg1;
- (id)channelMessageForSetPlaylistCommandWithPlaybackDescriptor:(id)arg1;
- (int)disconnectReasonFromMDXError:(id)arg1;
- (id)sessionDisconnectedLoggingPayload;
- (id)sessionConnectedLoggingPayload;
- (id)sessionStartedLoggingPayload;
- (void)sendCustomMessageWithName:(id)arg1 body:(id)arg2;
@property(readonly, nonatomic) YTIAudioTrack *currentAudioTrack; // @synthesize currentAudioTrack=_currentAudioTrack;
@property(readonly, nonatomic) double currentContentVideoProgress;
@property(readonly, nonatomic) double currentVideoProgress;
@property(readonly, nonatomic) double videoLiveIngestionTime;
@property(readonly, nonatomic) double videoSeekableEnd;
@property(readonly, nonatomic) double videoSeekableStart;
- (double)timeSinceLastReceivedContentVideoTime;
- (double)timeSinceLastReceivedVideoTime;
- (_Bool)isCurrentListIDEqualToListID:(id)arg1;
- (void)removeSessionObserver:(id)arg1;
- (void)addSessionObserver:(id)arg1;
- (void)connectWithPlaybackDescriptor:(id)arg1;
@property(readonly, nonatomic) double volumeStepInterval;
@property(readonly, nonatomic, getter=isSmartRemoteEnabled) _Bool smartRemoteEnabled;
- (void)launchScreenAppWithPlaybackDescriptor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)initializeRouter;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)arg1 loggingSessionType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectAudioMessagePlaybackServicePlaying-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectAudioMessagePlaybackServiceQuerying-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectAudioMessagePlaybackServiceSeeking-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectAudioPlayingDelegate-Protocol.h>

@class IGAudioSessionClient, IGDirectUIMessageMetadata, NSMutableDictionary, NSString;
@protocol IGDirectAudioMessagePlaybackServiceAnnouncer, IGDirectAudioPlaying, IGDirectOutgoingUpdateSending;

@interface IGDirectAudioMessagePlaybackService : NSObject <IGDirectAudioMessagePlaybackServicePlaying, IGDirectAudioMessagePlaybackServiceSeeking, IGDirectAudioMessagePlaybackServiceQuerying, IGDirectAudioPlayingDelegate>
{
    id <IGDirectAudioMessagePlaybackServiceAnnouncer> _announcer;
    IGDirectUIMessageMetadata *_currentlyPlayingMetadata;
    _Bool _currentlyPlayingMessageIsShhMode;
    id <IGDirectAudioPlaying> _player;
    NSMutableDictionary *_playbackSessionStateForMetadata;
    NSString *_sessionId;
    id <IGDirectOutgoingUpdateSending> _outgoingUpdateSender;
    IGAudioSessionClient *_audioSessionClient;
    long long _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)finishAudioMessageSeekWithMetadata:(id)arg1 audio:(id)arg2 progress:(double)arg3 isShhMode:(_Bool)arg4;
- (void)updateAudioMessageSeekWithMetadata:(id)arg1 progress:(double)arg2 isShhMode:(_Bool)arg3;
- (void)beginAudioMessageSeekWithMetadata:(id)arg1 progress:(double)arg2 isShhMode:(_Bool)arg3;
- (void)markPlaybackSessionEndedWithThreadId:(id)arg1;
- (void)markPlaybackSessionStarted;
- (void)pauseCurrentlyPlayingMessage;
- (void)playAudioMessageWithMetadata:(id)arg1 audio:(id)arg2 isShhMode:(_Bool)arg3;
- (id)currentlyPlayingMetadata;
- (double)progressForAudioMessageWithMetadata:(id)arg1;
- (_Bool)isAudioMessagePlayingWithMetadata:(id)arg1;
- (void)audioPlaybackDidPlayToEnd;
- (void)audioPlaybackDidProgress:(double)arg1;
- (void)audioPlaybackDidPause;
- (void)audioPlaybackDidFailWithError:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_updatePlaybackSessionStateForMetadata:(id)arg1 sessionId:(id)arg2 progress:(double)arg3 isShhMode:(_Bool)arg4;
- (void)_markMessageAsSeenWithMetadata:(id)arg1 isShhMode:(_Bool)arg2;
- (void)_updatePlayingWithAudio:(id)arg1;
- (void)_setCurrentlyPlayingMetadata:(id)arg1 audio:(id)arg2 isShhMode:(_Bool)arg3;
- (id)initWithVideoPlayerManager:(id)arg1 outgoingUpdateSender:(id)arg2 soundStateListener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


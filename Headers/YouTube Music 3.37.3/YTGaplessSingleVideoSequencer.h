//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSingleVideoControllerQueuePlayerDelegate-Protocol.h"
#import "YTSingleVideoControllerVideoSequencerDelegate-Protocol.h"
#import "YTSingleVideoSequencer-Protocol.h"

@class GIMMe, NSString, YTPlaybackConfig, YTPlaybackData, YTPlaybackTimeline, YTPlayerTransition, YTPlayerView, YTSingleVideoController;
@protocol HAMClock, MLPlayerItem, MLPlayerItemSegment, MLQueuePlayer, MLViewportSizeProvider, YTSingleVideoControllerDelegate, YTSingleVideoSequencerDelegate;

@interface YTGaplessSingleVideoSequencer : NSObject <YTSingleVideoControllerVideoSequencerDelegate, YTSingleVideoControllerQueuePlayerDelegate, YTSingleVideoSequencer>
{
    id <YTSingleVideoSequencerDelegate> _delegate;
    id <YTSingleVideoControllerDelegate> _videoControllerDelegate;
    YTPlayerView *_playerView;
    id <MLViewportSizeProvider> _viewportSizeProvider;
    YTPlayerTransition *_playerTransition;
    YTPlaybackConfig *_playbackConfig;
    YTPlaybackData *_contentPlaybackData;
    double _userIntentToPlayTime;
    id <MLPlayerItem> _playerItem;
    id <MLPlayerItemSegment> _playerItemSegment;
    YTPlayerTransition *_upcomingPlayerTransition;
    YTPlaybackConfig *_upcomingPlaybackConfig;
    YTPlaybackData *_upcomingContentPlaybackData;
    YTSingleVideoController *_upcomingVideoController;
    id <MLPlayerItem> _upcomingPlayerItem;
    id <MLPlayerItemSegment> _upcomingPlayerItemSegment;
    id <MLQueuePlayer> _queuePlayer;
    id <HAMClock> _clock;
    YTSingleVideoController *_activeVideoController;
    YTSingleVideoController *_contentVideoController;
    YTPlaybackTimeline *_playbackTimeline;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTPlaybackTimeline *playbackTimeline; // @synthesize playbackTimeline=_playbackTimeline;
@property(readonly, nonatomic) YTSingleVideoController *contentVideoController; // @synthesize contentVideoController=_contentVideoController;
@property(readonly, nonatomic) YTSingleVideoController *activeVideoController; // @synthesize activeVideoController=_activeVideoController;
- (void).cxx_destruct;
- (void)replaySingleVideoController:(id)arg1;
- (void)finishContentSequence;
- (void)suspendActiveVideoController;
- (void)activateVideoController:(id)arg1 playerStatus:(id)arg2;
- (void)setInitialFormatConstraintsOnPlayerItem:(id)arg1;
- (void)loadEnqueuedVideoControllerWithPlayerItem:(id)arg1 playerItemSegment:(id)arg2;
- (void)loadVideoControllerWithQueuePlayer:(id)arg1 visibility:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadVideoControllerWithoutQueuePlayer:(id)arg1 visibility:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadVideoController:(id)arg1 visibility:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadAndActivateVideoController:(id)arg1;
- (void)shutDownQueuePlayer;
- (void)singleVideoController:(id)arg1 mediaPlayerDidSwitchFromSegment:(id)arg2 toSegment:(id)arg3;
- (void)singleVideoController:(id)arg1 rawMediaPlayerStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)singleVideoController:(id)arg1 mediaPlayerDidSwitchToTimelineSection:(id)arg2 absoluteTime:(double)arg3;
- (void)stopDAIAndReloadMediaPlayer;
- (void)reactivateSuspendedAd;
- (void)suspendAd;
- (void)initializeSuspendedAdWithAdInterrupt:(id)arg1 transition:(id)arg2;
- (id)registerAdInterrupt:(id)arg1;
- (id)shutDownAd;
- (void)activateAdWithAdInterrupt:(id)arg1 transition:(id)arg2;
- (void)seekToEndOfActiveVideo;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToProductionTime:(double)arg1;
- (void)replayActiveVideo;
- (void)reloadActiveVideoControllerMediaPlayer;
- (void)loadFirstVideoInContentSequenceIntoInactiveState;
- (void)suspendContentSequence;
- (void)restartContentSequence;
- (void)activateContentSequence;
- (_Bool)hasUpcomingContentPlaybackData;
- (void)setUpcomingContentPlaybackData:(id)arg1 initialContentTime:(CDStruct_d60ef703)arg2 playerTransition:(id)arg3 playbackConfig:(id)arg4;
- (void)setContentPlaybackData:(id)arg1 initialContentTime:(CDStruct_d60ef703)arg2 playerTransition:(id)arg3 playbackConfig:(id)arg4 prebufferedContentVideo:(id)arg5 userIntentToPlayTime:(double)arg6;
- (void)shutDown;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 videoControllerDelegate:(id)arg2 playerView:(id)arg3 viewportSizeProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


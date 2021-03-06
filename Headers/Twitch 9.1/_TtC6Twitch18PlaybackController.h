//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _TtC6Twitch15VideoPlayerView, _TtC6Twitch21VideoPlayerController;
@protocol TWTranscodeQuality, _TtP6Twitch26PlaybackControllerDelegate_;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch18PlaybackController : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: currentPlaySessionID
    // Error parsing type: , name: originalPlaySessionID
    // Error parsing type: , name: sortedVideoTranscodes
    // Error parsing type: , name: sortedAudioTranscodes
    // Error parsing type: , name: playbackTime
    // Error parsing type: , name: playerController
    // Error parsing type: , name: currentTheaterVODMetadata
    // Error parsing type: , name: currentTranscode
    // Error parsing type: , name: suppressClientSideAds
    // Error parsing type: , name: state
    // Error parsing type: , name: pictureInPicturePossible
    // Error parsing type: , name: channelIdentity
    // Error parsing type: , name: looping
    // Error parsing type: , name: lastUniqueADID
    // Error parsing type: , name: numPlayerStalls
    // Error parsing type: , name: bufferEmptyDate
    // Error parsing type: , name: hasEnqueuedPlay
    // Error parsing type: , name: enqueuedSeekTime
    // Error parsing type: , name: insertedMidrollTimer
    // Error parsing type: , name: videoInitDate
    // Error parsing type: , name: firstVideoPlayTracked
    // Error parsing type: , name: videoPlayTimer
    // Error parsing type: , name: videoSeekSuccessTracker
    // Error parsing type: , name: discoveryPath
    // Error parsing type: , name: minutesWatchedTimer
    // Error parsing type: , name: pictureInPicturePossibleKVOToken
    // Error parsing type: , name: lastSentTimeSinceLoadStart
    // Error parsing type: , name: analyticsController
    // Error parsing type: , name: currentPlaySession
    // Error parsing type: , name: currentStitchedAdSession
    // Error parsing type: , name: dispatchRemoveAdUI
}

+ (id)analyticsValueForPlayerType:(long long)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)insertedMidrollTimerFired:(id)arg1;
- (id)selectTranscode:(id)arg1 setAsDefault:(_Bool)arg2;
- (void)theaterWasPresented:(id)arg1;
- (_Bool)seekToTime:(CDStruct_1b6d18a9)arg1 scrubbingInProgress:(_Bool)arg2 seekTrigger:(long long)arg3;
- (_Bool)loop;
- (_Bool)pause;
- (_Bool)play;
- (_Bool)reset;
@property(nonatomic) _Bool isMuted;
- (void)dealloc;
@property(nonatomic, readonly) _TtC6Twitch15VideoPlayerView *playerView;
@property(nonatomic) long long state; // @synthesize state;
@property(nonatomic, readonly) double liveLatency;
@property(nonatomic, retain) id <TWTranscodeQuality> currentTranscode; // @synthesize currentTranscode;
@property(nonatomic, readonly) _TtC6Twitch21VideoPlayerController *playerController; // @synthesize playerController;
@property(nonatomic) CDStruct_1b6d18a9 playbackTime; // @synthesize playbackTime;
@property(nonatomic, copy) NSUUID *currentPlaySessionID;
@property(nonatomic) __weak id <_TtP6Twitch26PlaybackControllerDelegate_> delegate; // @synthesize delegate;

@end


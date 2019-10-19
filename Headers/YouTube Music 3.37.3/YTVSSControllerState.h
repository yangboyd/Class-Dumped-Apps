//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GIMMe, NSString;

@interface YTVSSControllerState : NSObject <NSCopying>
{
    _Bool _playing;
    _Bool _autoplay;
    _Bool _playbackReported;
    _Bool _delayedPlaybackReported;
    _Bool _finalWatchtimePingReported;
    GIMMe *_gimme;
    NSString *_CPN;
    double _startTime;
    double _liveIngestionOffset;
    NSString *_playlistID;
    NSString *_defaultAudioTrackID;
    unsigned long long _formatItag;
    unsigned long long _audioFormatItag;
    unsigned long long _scheduledFlushWalltimeSecondsIndex;
    double _lastScheduledWatchtime;
    CDStruct_d60ef703 _currentMediaTime;
}

@property(nonatomic) double lastScheduledWatchtime; // @synthesize lastScheduledWatchtime=_lastScheduledWatchtime;
@property(nonatomic) unsigned long long scheduledFlushWalltimeSecondsIndex; // @synthesize scheduledFlushWalltimeSecondsIndex=_scheduledFlushWalltimeSecondsIndex;
@property(nonatomic) unsigned long long audioFormatItag; // @synthesize audioFormatItag=_audioFormatItag;
@property(nonatomic) unsigned long long formatItag; // @synthesize formatItag=_formatItag;
@property(nonatomic, getter=isFinalWatchtimePingReported) _Bool finalWatchtimePingReported; // @synthesize finalWatchtimePingReported=_finalWatchtimePingReported;
@property(nonatomic, getter=isDelayedPlaybackReported) _Bool delayedPlaybackReported; // @synthesize delayedPlaybackReported=_delayedPlaybackReported;
@property(nonatomic, getter=isPlaybackReported) _Bool playbackReported; // @synthesize playbackReported=_playbackReported;
@property(copy, nonatomic) NSString *defaultAudioTrackID; // @synthesize defaultAudioTrackID=_defaultAudioTrackID;
@property(nonatomic, getter=isAutoplay) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(copy, nonatomic) NSString *playlistID; // @synthesize playlistID=_playlistID;
@property(nonatomic) double liveIngestionOffset; // @synthesize liveIngestionOffset=_liveIngestionOffset;
@property(nonatomic) CDStruct_d60ef703 currentMediaTime; // @synthesize currentMediaTime=_currentMediaTime;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCPN:(id)arg1 playlistID:(id)arg2 autoplay:(_Bool)arg3;

@end


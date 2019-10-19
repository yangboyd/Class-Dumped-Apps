//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLAVPlayerItemLogRecorderDelegate-Protocol.h"
#import "MLQOEStreamSelectorDelegate-Protocol.h"

@class AVPlayerItem, GIMMe, MLAVPlayerItemLogRecorder, MLFormat, MLPlayerEventCenter, MLPlayerItemEventCenter, MLQOEFormatData, MLQOEPeriodicStatsSnapshot, NSString, YTIAudioTrack;
@protocol HAMClock;

@interface MLAVQOEMeasurementProvider : NSObject <MLAVPlayerItemLogRecorderDelegate, MLQOEStreamSelectorDelegate>
{
    MLPlayerEventCenter *_playerEventCenter;
    MLPlayerItemEventCenter *_playerItemEventCenter;
    id <HAMClock> _clock;
    AVPlayerItem *_playerItem;
    MLQOEFormatData *_QOEFormatData;
    YTIAudioTrack *_currentAudioTrack;
    double _lastFormatSelectionTime;
    _Bool _isUsingLocalStreams;
    MLQOEPeriodicStatsSnapshot *_lastCumulativeSnapshot;
    MLAVPlayerItemLogRecorder *_playerItemLogRecorder;
    _Bool _videoTracksUnavailable;
    NSString *_lastUnrecordedFormatURI;
    MLFormat *_selectedAudioFormat;
    MLFormat *_selectedVideoFormat;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat; // @synthesize selectedVideoFormat=_selectedVideoFormat;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat; // @synthesize selectedAudioFormat=_selectedAudioFormat;
- (void).cxx_destruct;
- (id)playerItem;
- (id)logRecorderForPlayerItem:(id)arg1;
- (void)clearLogRecorder;
- (void)recordMeasurementsFromSnapshotDiff:(id)arg1 atAbsoluteTime:(double)arg2;
- (void)updateWithCumulativeSnapshot:(id)arg1;
- (void)recordFormatChangeWithVideoFormat:(id)arg1 audioFormat:(id)arg2 reason:(long long)arg3;
- (void)recordFormatChangeEventWithURI:(id)arg1;
- (void)setUsingLocalStreams:(_Bool)arg1;
- (void)recordErrorLogEvent:(id)arg1;
- (void)playerItemErrorLogHasNewEvent:(id)arg1;
- (void)playerItemAccessLogHasNewEventWithURI:(id)arg1 eventStatsSnapshot:(id)arg2 previousStatsSnapshot:(id)arg3;
- (void)streamSelectorRecordNonFatalError:(id)arg1;
- (void)streamSelectorHasQOEFormatData:(id)arg1;
- (void)streamSelectorDidSelectVideoFormat:(id)arg1 audioFormat:(id)arg2 selectionReason:(long long)arg3;
- (void)flush;
- (void)setQOEFormatData:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)stopPoller;
- (void)startPoller;
- (void)recordQOEError:(id)arg1 fatal:(_Bool)arg2;
- (void)recordError:(id)arg1 fatal:(_Bool)arg2;
- (id)initWithPlayerEventCenter:(id)arg1 playerItemEventCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBaseTrackRenderer.h"

#import "HAMAudioTrackRenderer-Protocol.h"
#import "HAMSampleBufferSourceDelegate-Protocol.h"

@class GIMMe, NSString;
@protocol HAMClock, HAMFormat, HAMRootMediaSource, HAMSampleBufferSource, HAMTrackRendererDelegate;

@interface MLHAMSimulatedAudioTrackRenderer : HAMBaseTrackRenderer <HAMSampleBufferSourceDelegate, HAMAudioTrackRenderer>
{
    id <HAMClock> _clock;
    id <HAMSampleBufferSource> _source;
    struct OpaqueCMClock *_clockRef;
    struct OpaqueCMTimebase *_timebaseRef;
    CDStruct_1b6d18a9 _lastReadSampleTime;
    id <HAMFormat> _lastReadFormat;
    float _volume;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (void)sampleBufferSourceFormatDescriptionWillChange:(id)arg1;
- (void)mediaSource:(id)arg1 didFailWithError:(id)arg2;
- (void)mediaSource:(id)arg1 setCurrentTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)internalDoWorkAtTime:(CDStruct_576a8307)arg1 error:(id *)arg2;
- (void)internalSeekToTime:(CDStruct_1b6d18a9)arg1;
- (void)internalSetRate:(float)arg1;
- (void)internalTerminate;
- (_Bool)internalDisableAndReturnError:(id *)arg1;
- (_Bool)internalStopAndReturnError:(id *)arg1;
- (_Bool)internalStartAndReturnError:(id *)arg1;
- (_Bool)internalPrimeAndReturnError:(id *)arg1;
- (_Bool)internalEnableAndReturnError:(id *)arg1;
- (_Bool)internalPrepareAndReturnError:(id *)arg1;
@property(readonly, nonatomic) int mediaContentType;
@property(readonly, nonatomic) CDStruct_576a8307 currentTime;
- (void)dealloc;
- (id)initWithContext:(id)arg1 rootMediaSource:(id)arg2 sampleBufferSource:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) _Bool allowsBackgroundPlayback;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HAMTrackRendererDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) float rate;
@property(readonly, nonatomic) id <HAMRootMediaSource> rootMediaSource;
@property(readonly, nonatomic) CDStruct_e83c9415 seekableTimeRange;
@property(readonly, nonatomic) long long status;
@property(readonly) Class superclass;

@end


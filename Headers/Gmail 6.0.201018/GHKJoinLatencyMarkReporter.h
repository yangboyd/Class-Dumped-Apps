//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GHKMarkReporter;
@protocol GHKClearcutManager;

@interface GHKJoinLatencyMarkReporter : NSObject
{
    GHKMarkReporter *_markReporter;
    _Bool _shouldMarkFirstRemoteMedia[2];
    _Bool _haveMarkedFirstMedia[2];
    long long _firstRemoteMediaTimeMs[2];
    id <GHKClearcutManager> _clearcutManager;
}

+ (long long)currentTimeMs;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GHKClearcutManager> clearcutManager; // @synthesize clearcutManager=_clearcutManager;
- (void)addAction:(int)arg1;
- (void)addFinalMark:(int)arg1 atTime:(long long)arg2;
- (void)addMark:(int)arg1 atTime:(long long)arg2;
- (void)addFinalMark:(int)arg1;
- (void)addMark:(int)arg1;
- (void)markCallJoined;
- (void)markCallResolved;
- (void)markCallStart;
- (void)markBandwidthEstimateReached:(int)arg1;
- (void)markIncomingAudioDetected;
- (void)markIncomingVideoDetected;
- (_Bool)didDetectIncomingMedia:(unsigned long long)arg1;
- (void)markNavigationStart;
- (void)maybeMarkFirstRemoteMedia:(unsigned long long)arg1;
- (void)didCompleteInitialRemoteSourceSyncWithUnmutedAudio:(_Bool)arg1 unmutedVideo:(_Bool)arg2;
- (void)sendReport;
- (id)initWithClearcutManager:(id)arg1 actions:(id)arg2;
- (id)initWithClearcutManager:(id)arg1 callInfo:(id)arg2;
- (id)initWithClearcutManager:(id)arg1;

@end


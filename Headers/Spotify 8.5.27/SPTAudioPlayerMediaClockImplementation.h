//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioPlayerMediaClock-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, NSTimer, NSURL, SPTObserverManager;
@protocol SPTPlayerFeature, SPTResolver;

@interface SPTAudioPlayerMediaClockImplementation : NSObject <SPTPlayerObserver, SPTAudioPlayerMediaClock>
{
    _Bool _trackingPosition;
    float _playbackSpeed;
    NSURL *_audioTrackURI;
    id <SPTResolver> _cosmosResolver;
    NSTimer *_pollingTimer;
    id <SPTPlayerFeature> _contextPlayerFeature;
    long long _position;
    long long _timestamp;
    SPTObserverManager *_observerManager;
}

@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) _Bool trackingPosition; // @synthesize trackingPosition=_trackingPosition;
@property(nonatomic) float playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) __weak id <SPTPlayerFeature> contextPlayerFeature; // @synthesize contextPlayerFeature=_contextPlayerFeature;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) id <SPTResolver> cosmosResolver; // @synthesize cosmosResolver=_cosmosResolver;
@property(readonly, nonatomic) NSURL *audioTrackURI; // @synthesize audioTrackURI=_audioTrackURI;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)finishSyncPolling;
- (void)startSyncPolling;
- (void)syncAudioClock;
- (void)removeVideoPlaybackEventObserver:(id)arg1;
- (void)addVideoPlaybackEventObserver:(id)arg1;
- (double)currentPosition;
- (void)dealloc;
- (id)initWithTrackURI:(id)arg1 contextPlayer:(id)arg2 cosmosResolver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


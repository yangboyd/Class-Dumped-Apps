//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NFPlayer-Protocol.h>

@class AVPlayer, AVPlayerItem, NSNumber, NSString;
@protocol NFPlaybackLoggerAuxiliaryLogInfo, NFPlayerBoundaryObserver, NFPlayerDelegate, NFPlayerFactory;

@protocol NFPlayerInternal <NFPlayer>
@property(nonatomic) _Bool doNotShareBoundaryRegistrations;
@property(retain, nonatomic) id <NFPlaybackLoggerAuxiliaryLogInfo> auxiliaryLogInfo;
@property(retain, nonatomic) id <NFPlayerFactory> playerFactory;
@property(readonly, nonatomic) AVPlayer *avPlayer;
@property(readonly, nonatomic) double minimalVideoFps;
@property(readonly, nonatomic) AVPlayerItem *playerItem;
@property(nonatomic) __weak id <NFPlayerDelegate> delegate;
@property(readonly, nonatomic) NSString *uuid;
- (void)removeBoundaryObserver:(id)arg1;
- (void)removeBoundaryObserver:(id <NFPlayerBoundaryObserver>)arg1 atTime:(double)arg2;
- (id)addBoundaryObserver:(id <NFPlayerBoundaryObserver>)arg1 atTime:(double)arg2 withContext:(id)arg3;
- (_Bool)canAddBoundaryObservers;
- (void)presentAVPlayerIfNeeded;

@optional
- (NSNumber *)getCurrentPlaybackBitRate;
- (void)removeRangeObserver:(id <NFPlayerBoundaryObserver>)arg1 forRange:(NSString *)arg2;
- (void)addRangeObserver:(id <NFPlayerBoundaryObserver>)arg1 forRange:(NSString *)arg2 withContext:(id)arg3;
- (void)undefineTimeRangeNamed:(NSString *)arg1;
- (void)defineTimeRangeNamed:(NSString *)arg1 fromTime:(double)arg2 toTime:(double)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDXAdSessionState, MDXCaptionTrack, NSArray, NSString, YTIAudioTrack;
@protocol MLCaptionTrack;

@protocol MDXScreenPlaybackController <NSObject>
@property(readonly, nonatomic) MDXCaptionTrack *currentCaptionTrack;
@property(readonly, nonatomic) YTIAudioTrack *currentAudioTrack;
@property(readonly, nonatomic) NSArray *availableAudioTracks;
@property(nonatomic) long long volume;
@property(readonly, nonatomic) MDXAdSessionState *adSessionState;
@property(readonly, nonatomic) long long MDXPlayerState;
@property(readonly, nonatomic) double videoLiveIngestionTime;
@property(readonly, nonatomic) double videoSeekableEnd;
@property(readonly, nonatomic) double videoSeekableStart;
@property(readonly, nonatomic) double currentContentVideoProgress;
@property(readonly, nonatomic) double currentVideoProgress;
- (void)skipAd;
- (void)unsetCaptionTrackForVideoID:(NSString *)arg1;
- (void)setCaptionTrack:(id <MLCaptionTrack>)arg1 forVideoID:(NSString *)arg2;
- (void)setAudioTrack:(YTIAudioTrack *)arg1 forVideoID:(NSString *)arg2;
- (void)seekTo:(double)arg1;
- (void)dpadBack;
- (void)dpadSelect;
- (void)dpadRight;
- (void)dpadLeft;
- (void)dpadDown;
- (void)dpadUp;
- (void)voiceCommandWithStatus:(long long)arg1 stableText:(NSString *)arg2 unstableText:(NSString *)arg3;
- (void)stop;
- (void)next;
- (void)previous;
- (void)replay;
- (void)pause;
- (void)play;
@end


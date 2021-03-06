//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAsset, UIView;

@protocol DBMediaPlayer <NSObject>
- (void)enterPictureInPictureMode;
- (_Bool)isInPictureInPictureMode;
- (_Bool)isPictureInPictureSupported;
- (_Bool)isRestoringFromPictureInPicture;
- (double)currentPlaybackRate;
- (void)prepareToPlayWithAsset:(AVAsset *)arg1 initialPlaybackTime:(double)arg2 requireHighPrecisionSeek:(_Bool)arg3;
- (UIView *)mediaPlayerView;
- (double)playableTime;
- (double)totalPlaybackTime;
- (double)currentPlaybackTime;
- (void)setCurrentPlaybackTime:(double)arg1 requireHighPrecision:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)isPlaying;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (_Bool)canSeek;
- (void)toggleZoom;
@end


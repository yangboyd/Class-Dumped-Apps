//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMECameraPlaybackControls;

@protocol HMECameraPlaybackControlsDelegate <NSObject>
- (void)playerPlaybackControlsSeekBarDidEndScrubbing:(HMECameraPlaybackControls *)arg1;
- (void)playerPlaybackControlsSeekBarDidChangeValue:(HMECameraPlaybackControls *)arg1;
- (void)playerPlaybackControlsDidPressForwardButton:(HMECameraPlaybackControls *)arg1 secondsInterval:(double)arg2;
- (void)playerPlaybackControlsDidPressBackwardButton:(HMECameraPlaybackControls *)arg1 secondsInterval:(double)arg2;
- (void)playerPlaybackControlsDidPressPauseButton:(HMECameraPlaybackControls *)arg1;
- (void)playerPlaybackControlsDidPressPlayButton:(HMECameraPlaybackControls *)arg1;
@end


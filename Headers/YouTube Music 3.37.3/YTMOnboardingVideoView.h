//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, YTMBackingVideoView;
@protocol YTMOnboardingVideoViewDelegate;

@interface YTMOnboardingVideoView : UIView
{
    YTMBackingVideoView *_backingView;
    CDStruct_1b6d18a9 _loopRepeatTime;
    AVPlayer *_player;
    id <YTMOnboardingVideoViewDelegate> _delegate;
}

+ (id)onboardingVideoViewWithURL:(id)arg1;
@property(nonatomic) __weak id <YTMOnboardingVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playbackStopped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadVideoAtURL:(id)arg1;
- (void)play;
- (void)setLoopRepeatTimestamp:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 videoURL:(id)arg2;

@end


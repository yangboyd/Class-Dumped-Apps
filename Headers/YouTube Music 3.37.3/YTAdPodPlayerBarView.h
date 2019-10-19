//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInlinePlayerBarView.h"

#import "YTAirPlayViewDelegate-Protocol.h"

@class CAGradientLayer, NSString, UIImageView, UIView, YTAirPlayView, YTBadge, YTLabel, YTQTMButton;
@protocol YTPlayerBarViewDelegate;

@interface YTAdPodPlayerBarView : YTInlinePlayerBarView <YTAirPlayViewDelegate>
{
    UIView *_playingProgress;
    UIView *_downloadingProgress;
    YTLabel *_timeLabel;
    double _minimumSeekableTime;
    double _maximumSeekableTime;
    double _mediaTime;
    double _downloadedTime;
    double _adDuration;
    double _podRemainingTime;
    double _timeLabelOffsetY;
    UIImageView *_exitFullscreenImageView;
    _Bool _pausable;
    UIView *_fullScreenGradientView;
    CAGradientLayer *_fullScreenGradientLayer;
    YTQTMButton *_adChoicesButton;
    UIView *_peekableView;
    YTQTMButton *_enterFullscreenButton;
    YTQTMButton *_exitFullscreenButton;
    YTAirPlayView *_airPlayView;
    YTBadge *_adBadge;
    YTLabel *_podLabel;
    YTQTMButton *_adVisitSiteButton;
    id <YTPlayerBarViewDelegate> _delegate;
    struct CGRect _barFrame;
}

@property(nonatomic) __weak id <YTPlayerBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)barFrame;
- (void).cxx_destruct;
- (void)didPressToggleFullscreen:(id)arg1;
- (void)visibilityDidChange;
- (double)preferredHeight;
- (void)removeDidPressVisitAdSiteTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressVisitAdSiteTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressAdChoicesTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressAdChoicesTarget:(id)arg1 action:(SEL)arg2;
- (void)setAdChoicesButtonHidden:(_Bool)arg1;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setAirPlayAllowed:(_Bool)arg1;
- (void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2;
- (void)setAdIndex:(int)arg1 totalAdsInPod:(int)arg2 podRemainingTime:(double)arg3;
- (void)setMediaTime:(double)arg1;
- (void)setDownloadedTime:(double)arg1;
- (void)setTotalTime:(double)arg1;
- (void)setVisitAdvertiserVisible:(_Bool)arg1;
- (void)setInlinePlayerBarViewDelegate:(id)arg1;
- (void)setPausable:(_Bool)arg1;
- (void)resetTimeLabelOffsetY;
- (void)setTimeLabelOffsetY:(double)arg1;
- (void)setScrubberEnlarged:(_Bool)arg1;
- (void)setMiniscreen:(_Bool)arg1;
- (void)setFullscreen:(_Bool)arg1;
- (void)setPeekableViewVisible:(_Bool)arg1;
- (void)setTimeLabelVisible:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


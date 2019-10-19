//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GA11YMixinEmbedder.h"
#import "MDCInkTouchControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "YTPageStyling.h"

@class FLXLayout, NSString, UITapGestureRecognizer, YTBadge, YTLabel, YTNGWatchMiniBarButtonView, YTNGWatchMiniBarCircularProgressView, YTNGWatchMiniBarPlayPauseButtonView, YTScrollingLabel;

@interface YTNGWatchMiniBarControlsView : UIView <MDCInkTouchControllerDelegate, UIGestureRecognizerDelegate, YTPageStyling, GA11YMixinEmbedder>
{
    FLXLayout *_layout;
    id <YTNGWatchMiniBarControlsViewDelegate> _delegate;
    UITapGestureRecognizer *_playPauseButtonTapRecognizer;
    UITapGestureRecognizer *_replayNextButtonTapRecognizer;
    UITapGestureRecognizer *_closeButtonTapRecognizer;
    YTNGWatchMiniBarCircularProgressView *_circularProgressView;
    long long _miniBarState;
    id <YTNGWatchMiniBarViewSizeProvider> _miniBarViewSizeProvider;
    long long _adPlaybackState;
    long long _pageStyle;
    id <GA11YMixinImpl> _accessibilityMixin;
    UIView *_playerControls;
    YTNGWatchMiniBarPlayPauseButtonView *_playPauseButton;
    YTNGWatchMiniBarButtonView *_replayNextButton;
    YTNGWatchMiniBarButtonView *_closeButton;
    YTScrollingLabel *_scrollingTitleLabel;
    YTLabel *_titleLabel;
    YTLabel *_bylineLabel;
    long long _replayNextButtonState;
    YTBadge *_adBadge;
}

@property(readonly, nonatomic) YTBadge *adBadge; // @synthesize adBadge=_adBadge;
@property(nonatomic) long long replayNextButtonState; // @synthesize replayNextButtonState=_replayNextButtonState;
@property(readonly, nonatomic) YTLabel *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
@property(readonly, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) YTScrollingLabel *scrollingTitleLabel; // @synthesize scrollingTitleLabel=_scrollingTitleLabel;
@property(readonly, nonatomic) YTNGWatchMiniBarButtonView *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) YTNGWatchMiniBarButtonView *replayNextButton; // @synthesize replayNextButton=_replayNextButton;
@property(readonly, nonatomic) YTNGWatchMiniBarPlayPauseButtonView *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) UIView *playerControls; // @synthesize playerControls=_playerControls;
- (void).cxx_destruct;
- (void)didTapCloseButton;
- (void)didTapReplayNextButton;
- (void)didTapPlayPauseButton;
- (void)addTapTargets;
- (id)root;
- (void)resetLayout;
- (void)setAdPlaying:(_Bool)arg1;
- (id)accessibilityCustomActions;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setAdPlaybackState:(long long)arg1;
- (void)setMiniBarViewSizeProvider:(id)arg1;
- (void)updateAdCountdownWithSecondsRemaining:(double)arg1 totalSeconds:(double)arg2;
- (void)stopCountdown:(_Bool)arg1;
- (void)startAutonavCountdownWithSeconds:(double)arg1;
- (void)setByline:(id)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 byline:(id)arg2 showingPaidPromotion:(_Bool)arg3;
- (void)stopAutoScrolling;
- (void)startAutoScrolling;
- (void)setMiniBarState:(long long)arg1 hasNextVideo:(_Bool)arg2 isAutonavEnabled:(_Bool)arg3;
- (struct CGRect)touchTargetFrame;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 minibarViewSizeProvider:(id)arg2 delegate:(id)arg3 enableMarqueeText:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


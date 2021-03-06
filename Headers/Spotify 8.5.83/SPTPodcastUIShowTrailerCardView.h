//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastUIHighlightableView.h"

@class GLUELabel, SPTPodcastUIRoundedImageView, SPTPodcastUIShowTrailerCardStyle, SPTPodcastUIShowTrailerProgressView, SPTPodcastUITrailerAccessoryLabel, UIImageView, UIView;

@interface SPTPodcastUIShowTrailerCardView : SPTPodcastUIHighlightableView
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    SPTPodcastUIRoundedImageView *_imageView;
    SPTPodcastUIShowTrailerProgressView *_progressView;
    double _progress;
    SPTPodcastUIShowTrailerCardStyle *_cardStyle;
    UIImageView *_playIconImageView;
    UIView *_darkOverlayView;
    UIView *_coloredBackgroundView;
    SPTPodcastUITrailerAccessoryLabel *_trailerLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPodcastUITrailerAccessoryLabel *trailerLabel; // @synthesize trailerLabel=_trailerLabel;
@property(retain, nonatomic) UIView *coloredBackgroundView; // @synthesize coloredBackgroundView=_coloredBackgroundView;
@property(retain, nonatomic) UIView *darkOverlayView; // @synthesize darkOverlayView=_darkOverlayView;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(retain, nonatomic) SPTPodcastUIShowTrailerCardStyle *cardStyle; // @synthesize cardStyle=_cardStyle;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) SPTPodcastUIShowTrailerProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTPodcastUIRoundedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)stopPlayback;
- (void)startPlaybackWithProgress:(double)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)showProgress;
- (void)applyStyle;
- (id)gradientOverlay;
- (void)setupLabels;
- (void)setupPlayControls;
- (void)setupProgressViews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

@end


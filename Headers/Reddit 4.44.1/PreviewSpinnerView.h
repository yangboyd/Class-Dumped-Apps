//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseImageView, CABasicAnimation, CAShapeLayer, UIColor;

@interface PreviewSpinnerView : BaseView
{
    _Bool _failed;
    _Bool _isLoadingGifContent;
    _Bool _isFading;
    _Bool _shouldAnimateFading;
    double _progressPercentage;
    BaseImageView *_loaderImageView;
    CABasicAnimation *_fadeInOutAnimation;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_progressLayer;
    long long _imageType;
    UIColor *_imageColor;
}

+ (void)initialize;
@property(retain, nonatomic) UIColor *imageColor; // @synthesize imageColor=_imageColor;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) _Bool shouldAnimateFading; // @synthesize shouldAnimateFading=_shouldAnimateFading;
@property(nonatomic) _Bool isFading; // @synthesize isFading=_isFading;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) CABasicAnimation *fadeInOutAnimation; // @synthesize fadeInOutAnimation=_fadeInOutAnimation;
@property(retain, nonatomic) BaseImageView *loaderImageView; // @synthesize loaderImageView=_loaderImageView;
@property(nonatomic) _Bool isLoadingGifContent; // @synthesize isLoadingGifContent=_isLoadingGifContent;
@property(nonatomic) _Bool failed; // @synthesize failed=_failed;
@property(nonatomic) double progressPercentage; // @synthesize progressPercentage=_progressPercentage;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setImageType:(long long)arg1 color:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isVisible;
- (void)didMoveToSuperview;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)updateView;
- (void)updateLoaderImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end


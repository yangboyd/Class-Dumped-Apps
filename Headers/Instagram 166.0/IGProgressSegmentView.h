//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, UIImageView;

@interface IGProgressSegmentView : UIView
{
    long long _style;
    UIView *_containerView;
    UIView *_backgroundView;
    IGGradientView *_progressView;
    UIImageView *_sparklerView;
    UIImageView *_smokeView;
    _Bool _shouldOptimizeCornerRounding;
    _Bool _useRoundedCorner;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_startSmokeAnimationIfNeeded;
- (void)_loadSmokeViewIfNeeded;
- (void)_loadSparklerViewIfNeeded;
- (void)setProgressViewColors:(id)arg1;
- (void)removeFromProgressView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 useRoundedCorner:(_Bool)arg2 shouldOptimizeCornerRounding:(_Bool)arg3;

@end


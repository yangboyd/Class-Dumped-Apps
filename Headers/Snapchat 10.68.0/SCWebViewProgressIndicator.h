//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, FBShimmeringLayer;

@interface SCWebViewProgressIndicator : UIView
{
    FBShimmeringLayer *_shimmeringLayer;
    CAGradientLayer *_barLayer;
    _Bool _needsReset;
    _Bool _animating;
    double progress;
}

+ (Class)layerClass;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double progress; // @synthesize progress;
- (void).cxx_destruct;
- (void)_configMaskLayerWithHeight:(double)arg1;
- (void)_updateShimmeringIfNeeded;
- (void)rotateProgressBar;
- (void)_resetProgressBar;
- (void)setProgress:(double)arg1 withExplicitDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 leftColor:(id)arg2 rightColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCProgressGradientView, NSArray, UIColor, UIProgressView;

@interface MDCProgressView : UIView
{
    _Bool _animating;
    _Bool _animatingHide;
    float _progress;
    UIColor *_progressTintColor;
    NSArray *_progressTintColors;
    double _cornerRadius;
    long long _mode;
    long long _backwardProgressAnimationMode;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    MDCProgressGradientView *_progressView;
    MDCProgressGradientView *_indeterminateProgressView;
    UIView *_trackView;
}

+ (id)defaultTrackTintColorForProgressTintColor:(id)arg1;
+ (unsigned long long)animationOptions;
+ (double)animationDuration;
+ (id)bundlePathWithName:(id)arg1;
+ (id)bundle;
- (void).cxx_destruct;
@property(nonatomic) _Bool animatingHide; // @synthesize animatingHide=_animatingHide;
@property(retain, nonatomic) UIView *trackView; // @synthesize trackView=_trackView;
@property(retain, nonatomic) MDCProgressGradientView *indeterminateProgressView; // @synthesize indeterminateProgressView=_indeterminateProgressView;
@property(retain, nonatomic) MDCProgressGradientView *progressView; // @synthesize progressView=_progressView;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic) long long backwardProgressAnimationMode; // @synthesize backwardProgressAnimationMode=_backwardProgressAnimationMode;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) NSArray *progressTintColors; // @synthesize progressTintColors=_progressTintColors;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
- (void)startAnimatingBar;
- (void)updateTrackView;
- (void)updateIndeterminateProgressView;
- (void)updateProgressView;
- (void)stopAnimating;
- (void)startAnimating;
- (id)defaultAccessibilityLabel;
- (id)accessibilityLabel;
- (void)announceAccessibilityValueChange;
- (void)accessibilityValueDidChange;
- (id)accessibilityValue;
@property(readonly, nonatomic) UIProgressView *accessibilityProgressView;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIColor *trackTintColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)commonMDCProgressViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


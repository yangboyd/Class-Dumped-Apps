//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTColorValueCallback, NFUILottieAnimationView, UIColor;

@interface NFUIPlayerLoadingView : UIView
{
    _Bool _isAnimating;
    id _delegate;
    long long _currentStatus;
    UIColor *_animationTintColor;
    NFUILottieAnimationView *_animationView;
    LOTColorValueCallback *_fillColorCallback;
}

@property(retain, nonatomic) LOTColorValueCallback *fillColorCallback; // @synthesize fillColorCallback=_fillColorCallback;
@property(retain, nonatomic) NFUILottieAnimationView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIColor *animationTintColor; // @synthesize animationTintColor=_animationTintColor;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForErrorRecovery;
- (void)handleTap:(id)arg1;
- (void)prepareForAnimation;
- (void)showBeginPlayAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)showReplayToPlayAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)showReplayAnimation;
- (void)showLoadingAnimationForInitialPlayback:(_Bool)arg1;
- (void)reset;
- (void)showInitialPlaybackAnimation;
- (void)showLoadingAnimation;
- (void)stopAnimating;
- (void)startAnimating;
- (void)configureAnimatinonWithTintColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)commonInit;

@end


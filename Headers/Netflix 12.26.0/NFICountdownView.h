//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NFICuepoint, NFIImageModel, UIImageView;
@protocol NFICountdownViewDelegate;

@interface NFICountdownView : UIView
{
    _Bool _isAnimating;
    _Bool _animationComplete;
    id <NFICountdownViewDelegate> _delegate;
    long long _timerType;
    CDUnknownBlockType _animationCompletionBlock;
    double _durationMS;
    NFIImageModel *_imageModel;
    UIImageView *_imageView;
    CADisplayLink *_displayLink;
    double _timeOffsetMS;
    double _startTimeMS;
    double _timeRemainingMS;
    double _playerTime;
    NFICuepoint *_timerCuepoint;
    struct CGRect _renderBounds;
}

+ (id)countdownViewForType:(long long)arg1;
@property(retain, nonatomic) NFICuepoint *timerCuepoint; // @synthesize timerCuepoint=_timerCuepoint;
@property double playerTime; // @synthesize playerTime=_playerTime;
@property double timeRemainingMS; // @synthesize timeRemainingMS=_timeRemainingMS;
@property double startTimeMS; // @synthesize startTimeMS=_startTimeMS;
@property double timeOffsetMS; // @synthesize timeOffsetMS=_timeOffsetMS;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NFIImageModel *imageModel; // @synthesize imageModel=_imageModel;
@property double durationMS; // @synthesize durationMS=_durationMS;
@property struct CGRect renderBounds; // @synthesize renderBounds=_renderBounds;
@property(readonly, copy, nonatomic) CDUnknownBlockType animationCompletionBlock; // @synthesize animationCompletionBlock=_animationCompletionBlock;
@property(readonly, nonatomic) long long timerType; // @synthesize timerType=_timerType;
@property(readonly, nonatomic) _Bool animationComplete; // @synthesize animationComplete=_animationComplete;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) __weak id <NFICountdownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)positionWithVector:(struct CGVector)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (void)disable;
- (void)renderState:(id)arg1;
- (void)animateLazyWithAnimations:(id)arg1;
- (void)animateOutWithAnimations:(id)arg1;
- (void)animateOut;
- (void)animateInWithAnimations:(id)arg1;
- (void)animateIn;
- (void)stopAnimating;
- (void)startAnimating;
- (void)playerStateChanged:(long long)arg1 playerTime:(double)arg2;
- (void)render;
- (void)resumeProgress;
- (void)pauseProgress;
- (void)configureWithImage:(id)arg1;
- (void)configureWithTime:(double)arg1;
- (void)configureWithTimerModel:(id)arg1 timerCuepoint:(id)arg2;
- (void)setCuepoint:(id)arg1;
- (void)updateTime:(double)arg1;
- (void)configureImageView;
- (_Bool)configureWithTime;
- (_Bool)allowsScaling;
- (void)setTimerType:(long long)arg1;
- (void)setAnimationCompletionBlock:(CDUnknownBlockType)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


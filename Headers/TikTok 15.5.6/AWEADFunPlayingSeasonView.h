//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEADFunPlayingSeasonViewProtocol-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"

@class AWEAwemeModel, CADisplayLink, NSDate, NSString, UIImageView, UILabel;

@interface AWEADFunPlayingSeasonView : UIView <CAAnimationDelegate, AWEADFunPlayingSeasonViewProtocol>
{
    _Bool _imageLoadSuccess;
    _Bool _isFold;
    _Bool _isAnimating;
    _Bool _shouldTrackPendantShow;
    _Bool _hasTrackPendantShow;
    long long _scalingMode;
    UIView *_destinationView;
    UIImageView *_adImageView;
    UILabel *_adDescLabel;
    UIView *_operationView;
    UIView *_containerView;
    AWEAwemeModel *_awemeModel;
    CDUnknownBlockType _destinationLeftBottomPointBlock;
    CDUnknownBlockType _displayFinishedBlock;
    CADisplayLink *_displayLink;
    double _totalTime;
    NSDate *_beginDate;
    struct CGPoint _destinationCenter;
    struct CGSize _destinationSize;
    struct CGPoint _showCenterPoint;
}

@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property _Bool hasTrackPendantShow; // @synthesize hasTrackPendantShow=_hasTrackPendantShow;
@property _Bool shouldTrackPendantShow; // @synthesize shouldTrackPendantShow=_shouldTrackPendantShow;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType displayFinishedBlock; // @synthesize displayFinishedBlock=_displayFinishedBlock;
@property(copy, nonatomic) CDUnknownBlockType destinationLeftBottomPointBlock; // @synthesize destinationLeftBottomPointBlock=_destinationLeftBottomPointBlock;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) _Bool imageLoadSuccess; // @synthesize imageLoadSuccess=_imageLoadSuccess;
@property(nonatomic) struct CGPoint showCenterPoint; // @synthesize showCenterPoint=_showCenterPoint;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) UILabel *adDescLabel; // @synthesize adDescLabel=_adDescLabel;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(nonatomic) __weak UIView *destinationView; // @synthesize destinationView=_destinationView;
@property(nonatomic) struct CGSize destinationSize; // @synthesize destinationSize=_destinationSize;
@property(nonatomic) struct CGPoint destinationCenter; // @synthesize destinationCenter=_destinationCenter;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
- (void).cxx_destruct;
- (void)logTimeDuration:(id)arg1;
- (void)trackShowResultIfNeeded:(id)arg1 resultType:(long long)arg2;
- (void)trackPreloadModelResultIfNeeded:(id)arg1 resultType:(long long)arg2;
- (void)trackPreloadModelIfNeeded:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)show;
- (void)hide;
- (void)handleTappedEventOnLocation:(struct CGPoint)arg1;
- (_Bool)shouldResponseTapEventOnLocation:(struct CGPoint)arg1;
- (void)resetAnimationView:(id)arg1;
- (void)resumeAnimationWithView:(id)arg1;
- (void)pauseAnimationWithView:(id)arg1;
- (_Bool)shouldShowFunPlayingView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)trackShowClickIfNeeded;
- (void)handleWhenAllAnimationCompletion;
- (void)invalidateTimer;
- (void)reset;
- (void)resetAnimationLayer;
- (void)handleViewTapped;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)foldEggView;
- (void)startFoldAnimationWithDestinationLeftBottomPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)executeFoldAnimation:(_Bool)arg1;
- (void)handleFoldAnimation;
- (void)showAdDescLabelAnimated:(_Bool)arg1;
- (_Bool)showInView:(id)arg1 animated:(_Bool)arg2 destionLeftBottomPointBlock:(CDUnknownBlockType)arg3 displayFinishedBlock:(CDUnknownBlockType)arg4;
- (void)configWithAwemeModel:(id)arg1;
- (void)updateLayout;
- (void)setUpAdDescLabel;
- (void)setupSubviews;
- (void)setupNotifications;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


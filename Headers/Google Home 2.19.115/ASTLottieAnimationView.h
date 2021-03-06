//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASTLottieAnimationViewAssetBundle, LOTAnimationView;

@interface ASTLottieAnimationView : UIView
{
    ASTLottieAnimationViewAssetBundle *_assetBundle;
    long long _contentScalingMode;
    LOTAnimationView *_introView;
    LOTAnimationView *_loopView;
    LOTAnimationView *_successView;
    LOTAnimationView *_failureView;
    long long _behaviorOnLoad;
    LOTAnimationView *_completionView;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) LOTAnimationView *completionView; // @synthesize completionView=_completionView;
@property(nonatomic) long long behaviorOnLoad; // @synthesize behaviorOnLoad=_behaviorOnLoad;
@property(readonly, nonatomic) LOTAnimationView *failureView; // @synthesize failureView=_failureView;
@property(readonly, nonatomic) LOTAnimationView *successView; // @synthesize successView=_successView;
@property(readonly, nonatomic) LOTAnimationView *loopView; // @synthesize loopView=_loopView;
@property(readonly, nonatomic) LOTAnimationView *introView; // @synthesize introView=_introView;
@property(nonatomic) long long contentScalingMode; // @synthesize contentScalingMode=_contentScalingMode;
@property(retain, nonatomic) ASTLottieAnimationViewAssetBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
- (void).cxx_destruct;
- (void)applyCenteredViewConstraintsForSubview:(id)arg1;
- (void)applyFullViewContraintsForSubview:(id)arg1;
- (void)applyConstraintsToSubview:(id)arg1;
- (void)configureConstraints;
- (void)playEnding;
- (void)introDidFinish;
- (void)prepareEnding:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setupSubviews;
- (void)reloadAnimationViewWithAssetBundle:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isFailurePlaying;
- (_Bool)isSuccessPlaying;
- (_Bool)isLoopPlaying;
- (_Bool)isIntroPlaying;
- (void)stopAnimating;
- (void)finishCurrentAnimation;
- (void)playFailureAnimationWithBlock:(CDUnknownBlockType)arg1;
- (void)playSuccessAnimationWithBlock:(CDUnknownBlockType)arg1;
- (void)playOnceWithBlock:(CDUnknownBlockType)arg1;
- (void)startAnimating;
- (void)didMoveToSuperview;
- (id)initWithAssetBundle:(id)arg1 contentScalingMode:(long long)arg2;
- (id)initWithAssetBundle:(id)arg1;

@end


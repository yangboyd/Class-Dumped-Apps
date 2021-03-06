//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKGlifRepeatedAnimator-Protocol.h"

@class NSArray, NSString, UIView;
@protocol GSKGlifDotsView><GSKGlifDotsLayout, GSKGlifRepeatedAnimatorDelegate;

@interface GSKGlifDotsThinkingAnimator : NSObject <GSKGlifRepeatedAnimator>
{
    NSArray *_chasingDots;
    _Bool _isChasingInProgress;
    _Bool _isAnimating;
    UIView<GSKGlifDotsView><GSKGlifDotsLayout> *_dotsView;
    id <GSKGlifRepeatedAnimatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GSKGlifRepeatedAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIView<GSKGlifDotsView><GSKGlifDotsLayout> *dotsView; // @synthesize dotsView=_dotsView;
- (id)chasingDotAnimationAtIndex:(long long)arg1 fromAngle:(double)arg2 fromCurrentTime:(double)arg3;
- (void)continueNextDotChasingCycle;
- (void)removeAllAnimations;
- (void)beginAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


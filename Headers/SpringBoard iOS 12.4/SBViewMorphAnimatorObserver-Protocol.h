//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBViewMorphAnimator;

@protocol SBViewMorphAnimatorObserver <NSObject>

@optional
- (void)animatorWasInterrupted:(SBViewMorphAnimator *)arg1;
- (void)animatorWasCanceled:(SBViewMorphAnimator *)arg1;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(void (^)(void))arg3;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(void (^)(void))arg3;
- (void)willStartTargetAnimations:(unsigned long long)arg1;
- (void)willStartSourceAnimations:(unsigned long long)arg1;
@end


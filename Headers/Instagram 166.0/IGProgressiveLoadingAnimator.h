//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGProgressiveLoadingAnimator : NSObject
{
    struct CGPoint _c1;
    struct CGPoint _c2;
    double _startTime;
    double _previousAnimatedProgressDelta;
    CDUnknownBlockType _updateBlock;
    _Bool _isInCompletion;
    double _currentProgressValue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInCompletion; // @synthesize isInCompletion=_isInCompletion;
@property(readonly, nonatomic) double currentProgressValue; // @synthesize currentProgressValue=_currentProgressValue;
- (void)reset;
- (id)_newProgressAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgressValue:(double)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGTransitionAnimationPanResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    double _changed_fractionComplete;
    struct CGPoint _changed_translation;
    struct CGPoint _finished_velocity;
    struct CGPoint _cancelled_velocity;
}

+ (id)finishedWithVelocity:(struct CGPoint)arg1;
+ (id)changedWithFractionComplete:(double)arg1 translation:(struct CGPoint)arg2;
+ (id)cancelledWithVelocity:(struct CGPoint)arg1;
+ (id)began;
- (void)matchBegan:(CDUnknownBlockType)arg1 changed:(CDUnknownBlockType)arg2 finished:(CDUnknownBlockType)arg3 cancelled:(CDUnknownBlockType)arg4;

@end


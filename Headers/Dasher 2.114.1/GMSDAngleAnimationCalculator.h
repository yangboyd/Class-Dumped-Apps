//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSLinearAnimationCalculator;

@interface GMSDAngleAnimationCalculator : NSObject
{
    GMSLinearAnimationCalculator *_linearCalculator;
}

- (void).cxx_destruct;
- (id)animation;
- (double)velocityAtTime:(double)arg1;
- (double)angleAtTime:(double)arg1;
- (id)initWithStartAngle:(double)arg1 startVelocity:(double)arg2 endAngle:(double)arg3 endVelocity:(double)arg4 beginTime:(double)arg5 duration:(double)arg6;

@end


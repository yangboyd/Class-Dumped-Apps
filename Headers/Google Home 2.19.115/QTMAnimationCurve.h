//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QTMAnimationCurve : NSObject
{
}

+ (CDStruct_e3b9714e)quantumArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 minArcAngle:(double)arg3 maxArcAngle:(double)arg4;
+ (id)curvedPathFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)linear;
+ (id)quantumEaseIn;
+ (id)quantumEaseOut;
+ (id)quantumEaseInOut;
+ (id)animationTimingFunctionForCurve:(unsigned long long)arg1;

@end


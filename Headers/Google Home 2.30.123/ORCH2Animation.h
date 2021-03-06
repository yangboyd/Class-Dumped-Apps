//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ORCH2Animation_CubicBezierInterpolator, ORCH2Effect;

@interface ORCH2Animation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2Animation_CubicBezierInterpolator *cubicBezierInterpolator; // @dynamic cubicBezierInterpolator;
@property(nonatomic) int durationMs; // @dynamic durationMs;
@property(retain, nonatomic) ORCH2Effect *effect; // @dynamic effect;
@property(nonatomic) _Bool hasCubicBezierInterpolator; // @dynamic hasCubicBezierInterpolator;
@property(nonatomic) _Bool hasDurationMs; // @dynamic hasDurationMs;
@property(nonatomic) _Bool hasEffect; // @dynamic hasEffect;
@property(nonatomic) _Bool hasStartDelayMs; // @dynamic hasStartDelayMs;
@property(nonatomic) int startDelayMs; // @dynamic startDelayMs;

@end


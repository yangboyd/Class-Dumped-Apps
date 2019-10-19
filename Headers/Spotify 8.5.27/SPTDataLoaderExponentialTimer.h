//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTDataLoaderExponentialTimer : NSObject
{
    double _timeInterval;
    double _maxTime;
    double _initialTime;
    double _jitter;
    double _growFactor;
}

+ (double)normalWithMu:(double)arg1 sigma:(double)arg2;
+ (id)exponentialTimerWithInitialTime:(double)arg1 maxTime:(double)arg2 jitter:(double)arg3;
+ (id)exponentialTimerWithInitialTime:(double)arg1 maxTime:(double)arg2;
@property(readonly, nonatomic) double growFactor; // @synthesize growFactor=_growFactor;
@property(readonly, nonatomic) double jitter; // @synthesize jitter=_jitter;
@property(readonly, nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(readonly, nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (double)timeIntervalAndCalculateNext;
- (double)calculateNext;
- (void)reset;
- (id)initWithInitialTime:(double)arg1 maxTime:(double)arg2 growFactor:(double)arg3 jitter:(double)arg4;

@end


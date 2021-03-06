//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, NSString;

@protocol FBWatchdogExpiryHandling
@property(readonly, copy, nonatomic) NSSet *timeouts;
- (void)setExtraInfoString:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)watchdogTimerWasStopped;
- (void)runLoopCompletedAtTime:(double)arg1;
- (void)runLoopTimedOutAtTime:(double)arg1 withTimeout:(double)arg2 atRunLoopActivity:(unsigned long long)arg3;
- (NSString *)lastStallTraceID;
@end


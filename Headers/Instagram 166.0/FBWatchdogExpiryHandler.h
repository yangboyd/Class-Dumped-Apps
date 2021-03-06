//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBWatchdogExpiryHandling-Protocol.h>

@class FBWatchdogExpiryHandlerConfiguration, FBWatchdogStallFileManager, NSSet;

@interface FBWatchdogExpiryHandler : NSObject <FBWatchdogExpiryHandling>
{
    FBWatchdogExpiryHandlerConfiguration *_configuration;
    FBWatchdogStallFileManager *_sharedStallFileManager;
    // Error parsing type: {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >="__a_value"Ad}}, name: _lastStallEndTime
    // Error parsing type: {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >="__a_value"AB}}, name: _currentlyStalled
    _Bool _forceWatchdogLoggingForTesting;
    NSSet *_timeouts;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceWatchdogLoggingForTesting; // @synthesize forceWatchdogLoggingForTesting=_forceWatchdogLoggingForTesting;
@property(readonly, copy, nonatomic) NSSet *timeouts; // @synthesize timeouts=_timeouts;
- (void)_writeWatchdogStallFile:(id)arg1 withTimeout:(double)arg2;
- (id)lastStallTraceID;
- (void)setExtraInfoString:(id)arg1 forKey:(id)arg2;
- (void)watchdogTimerWasStopped;
- (void)runLoopCompletedAtTime:(double)arg1;
- (void)runLoopTimedOutAtTime:(double)arg1 withTimeout:(double)arg2 atRunLoopActivity:(unsigned long long)arg3;
- (void)_calculateTimeouts;
- (id)initWithConfiguration:(id)arg1;

@end


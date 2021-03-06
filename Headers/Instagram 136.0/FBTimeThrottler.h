//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBCancelable, OS_dispatch_queue;

@interface FBTimeThrottler : NSObject
{
    double _period;
    long long _options;
    NSObject<OS_dispatch_queue> *_queueForPerforming;
    CDUnknownBlockType _block;
    CDUnknownBlockType _timeBlock;
    CDUnknownBlockType _callAfterBlock;
    double _lastCallTime;
    id <FBCancelable> _scheduledTrailingInvocation;
}

- (void).cxx_destruct;
- (void)_performTrailingInvocation;
- (void)_cancelScheduledTrailingInvocation_unlocked;
- (void)_scheduleTrailingInvocationIfNeeded_unlocked:(double)arg1;
- (_Bool)_shouldInvokeImmediately_unlocked:(double)arg1;
- (void)reset;
- (void)callWithThrottling;
- (id)initWithPeriod:(double)arg1 options:(long long)arg2 queueForPerforming:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithPeriod:(double)arg1 options:(long long)arg2 queueForPerforming:(id)arg3 block:(CDUnknownBlockType)arg4 timeBlock:(CDUnknownBlockType)arg5 callAfterBlock:(CDUnknownBlockType)arg6;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SCSDKCoreKit/AnalyticsEventsQueueDelegate-Protocol.h>

@class AnalyticsEventsQueue, NSString;

@interface SCSDKOperationalMetricsQueue : NSObject <AnalyticsEventsQueueDelegate>
{
    AnalyticsEventsQueue *_eventsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (struct picoproto_ctx_s *)_picoprotoTimestampWithTimestamp:(double)arg1;
- (id)eventsQueue:(id)arg1 parseEvents:(id)arg2 maxSequenceId:(long long)arg3;
- (void)addLatencyFromTime:(double)arg1 name:(id)arg2;
- (void)addLatency:(long long)arg1 name:(id)arg2;
- (void)addCount:(long long)arg1 name:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


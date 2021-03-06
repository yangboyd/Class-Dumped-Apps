//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALXMetricLoggerProtocol-Protocol.h"

@class NSString;

@interface ALXMockMetricLogger : NSObject <ALXMetricLoggerProtocol>
{
}

- (void)stopRecording:(id)arg1;
- (void)startRecording:(id)arg1;
- (void)registerCounterWithMetricName:(id)arg1 triggerName:(id)arg2;
- (void)registerAndLogMetric:(id)arg1 withTrigger:(id)arg2;
- (void)logWakewordDetectedStartMetric:(id)arg1;
- (void)logWakewordDetectedHandledMetric:(id)arg1;
- (void)logStop:(id)arg1;
- (void)logStart:(id)arg1;
- (void)logRequestUnexpectedResponseMetric:(id)arg1;
- (void)logRequestStatusCodeMetric:(id)arg1 withStatusCode:(unsigned long long)arg2;
- (void)logRequestServerErrorMetric:(id)arg1;
- (void)logRequestSentMetric:(id)arg1;
- (void)logRequestResponseReceivedMetric:(id)arg1;
- (void)logRequestFailureMetric:(id)arg1;
- (void)logMetricWithTriggerName:(id)arg1;
- (void)log:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


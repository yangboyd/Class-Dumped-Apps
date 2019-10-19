//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLoadMessageLogging-Protocol.h"

@class NSString, SCLoadMessageLogAggregator;
@protocol SCPerforming;

@interface SCLoadMessageLogger : NSObject <SCLoadMessageLogging>
{
    id <SCPerforming> _performer;
    SCLoadMessageLogAggregator *_aggregator;
}

- (void).cxx_destruct;
- (void)_logStepWithMessageId:(id)arg1 mediaId:(id)arg2 timestampType:(long long)arg3 loadStep:(long long)arg4 timestampInSeconds:(double)arg5 result:(long long)arg6;
- (void)setMetadataForMessageId:(id)arg1 mediaId:(id)arg2 messageBodyType:(id)arg3 mediaType:(long long)arg4;
- (void)logDiscreteStepWithMessageId:(id)arg1 mediaId:(id)arg2 loadStep:(long long)arg3 timestampInSeconds:(double)arg4;
- (void)logStepEndWithMessageId:(id)arg1 mediaId:(id)arg2 loadStep:(long long)arg3 timestampInSeconds:(double)arg4 result:(long long)arg5;
- (void)logStepStartWithMessageId:(id)arg1 mediaId:(id)arg2 loadStep:(long long)arg3 timestampInSeconds:(double)arg4;
- (id)initWithMetricsEmitter:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


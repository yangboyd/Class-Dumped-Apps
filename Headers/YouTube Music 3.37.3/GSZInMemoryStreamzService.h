//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSZStreamzService-Protocol.h"

@class GSZInMemoryStreamzServiceOptions, NSMutableArray, NSString;
@protocol GSZStreamzConfigurationService, GSZStreamzTransportService, OS_dispatch_queue;

@interface GSZInMemoryStreamzService : NSObject <GSZStreamzService>
{
    GSZInMemoryStreamzServiceOptions *_options;
    id <GSZStreamzTransportService> _transportService;
    id <GSZStreamzConfigurationService> _configurationService;
    NSMutableArray *_counterValues;
    NSMutableArray *_eventMetricValues;
    NSMutableArray *_snapshotsToLog;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_transportQueue;
}

- (void).cxx_destruct;
- (_Bool)shouldRecordEventMetricValue:(id)arg1;
- (_Bool)shouldIncrementCounterValue:(id)arg1;
- (void)transportAllSynchronously;
- (void)setupAutoFlushWithDelayInSeconds:(unsigned long long)arg1;
- (void)flushSnapshotToTransport:(id)arg1;
- (void)flushAllIncludingCurrentStreamz:(_Bool)arg1;
- (id)snapshotAndClearStreamz;
- (void)handleAppToBackground;
- (void)flush;
- (void)logWithEventMetricValue:(id)arg1;
- (void)logWithCounterValue:(id)arg1;
- (void)dealloc;
- (id)initWithStreamzConfigurationService:(id)arg1 streamzTransportService:(id)arg2 options:(id)arg3;
- (id)initWithOptions:(id)arg1 transportService:(id)arg2 configurationService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


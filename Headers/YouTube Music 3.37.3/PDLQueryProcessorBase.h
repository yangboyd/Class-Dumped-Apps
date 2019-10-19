//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLQueryProcessor-Protocol.h"

@class NSString, PDLClientConfigInternal, PDLQueryProcessorFilter;
@protocol OS_dispatch_queue, PDLMetricsLogger, PDLQueryProcessorDelegate;

@interface PDLQueryProcessorBase : NSObject <PDLQueryProcessor>
{
    NSString *_query;
    PDLClientConfigInternal *_clientConfig;
    NSObject<OS_dispatch_queue> *_loadResultsQueue;
    id <PDLMetricsLogger> _metricsLogger;
    PDLQueryProcessorFilter *_queryProcessorFilter;
    id <PDLQueryProcessorDelegate> _delegate;
}

@property(nonatomic) __weak id <PDLQueryProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PDLQueryProcessorFilter *queryProcessorFilter; // @synthesize queryProcessorFilter=_queryProcessorFilter;
@property(readonly, nonatomic) id <PDLMetricsLogger> metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loadResultsQueue; // @synthesize loadResultsQueue=_loadResultsQueue;
@property(readonly, nonatomic) PDLClientConfigInternal *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)processQuery;
- (void)cancel;
- (long long)queryProcessorType;
- (id)initWithDelegate:(id)arg1 context:(id)arg2 filter:(id)arg3 loadResultsQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


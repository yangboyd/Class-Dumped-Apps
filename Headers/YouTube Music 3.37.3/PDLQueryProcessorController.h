//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLQueryProcessorDelegate-Protocol.h"
#import "PDLQueryProcessorDelivererDelegate-Protocol.h"
#import "PDLQueryProcessorFilterDelegate-Protocol.h"

@class NSArray, NSString, PDLClientConfigInternal, PDLLiveAutocompleteQueryProcessor, PDLQueryProceesorDeliverer, PDLQueryProcessorContext, PDLQueryProcessorFilter, PDLResourceCollector, PDLSessionContext, PDLTopNCacheQueryProcessor, Reachability;
@protocol GSCAccountId, OS_dispatch_queue, PDLDeviceContactsService, PDLExperimentsService, PDLMetricsLogger, PDLQueryProcessor, PDLTopNCache;

@interface PDLQueryProcessorController : NSObject <PDLQueryProcessorDelegate, PDLQueryProcessorFilterDelegate, PDLQueryProcessorDelivererDelegate>
{
    _Bool _shouldContinueRunning;
    id <GSCAccountId> _accountID;
    NSString *_query;
    PDLClientConfigInternal *_clientConfig;
    PDLQueryProcessorContext *_queryProcessorContext;
    PDLSessionContext *_sessionContext;
    Reachability *_reachability;
    id <PDLDeviceContactsService> _deviceContactsService;
    id <PDLTopNCache> _topNCache;
    id <PDLQueryProcessor> _deviceContactQueryProcessor;
    PDLLiveAutocompleteQueryProcessor *_liveAutocompleteQueryProcessor;
    PDLTopNCacheQueryProcessor *_topNCacheQueryProcessor;
    PDLQueryProcessorFilter *_queryProcessorFilter;
    PDLQueryProceesorDeliverer *_queryProcessorDeliverer;
    NSArray *_callbacks;
    NSObject<OS_dispatch_queue> *_queryProcessorQueue;
    PDLResourceCollector *_resourceCollector;
    id <PDLMetricsLogger> _metricsLogger;
    id <PDLExperimentsService> _experimentsService;
}

@property(readonly, nonatomic) id <PDLExperimentsService> experimentsService; // @synthesize experimentsService=_experimentsService;
@property(readonly, nonatomic) id <PDLMetricsLogger> metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(retain, nonatomic) PDLResourceCollector *resourceCollector; // @synthesize resourceCollector=_resourceCollector;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queryProcessorQueue; // @synthesize queryProcessorQueue=_queryProcessorQueue;
@property(readonly, nonatomic) NSArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) PDLQueryProceesorDeliverer *queryProcessorDeliverer; // @synthesize queryProcessorDeliverer=_queryProcessorDeliverer;
@property(retain, nonatomic) PDLQueryProcessorFilter *queryProcessorFilter; // @synthesize queryProcessorFilter=_queryProcessorFilter;
@property(retain, nonatomic) PDLTopNCacheQueryProcessor *topNCacheQueryProcessor; // @synthesize topNCacheQueryProcessor=_topNCacheQueryProcessor;
@property(retain, nonatomic) PDLLiveAutocompleteQueryProcessor *liveAutocompleteQueryProcessor; // @synthesize liveAutocompleteQueryProcessor=_liveAutocompleteQueryProcessor;
@property(retain, nonatomic) id <PDLQueryProcessor> deviceContactQueryProcessor; // @synthesize deviceContactQueryProcessor=_deviceContactQueryProcessor;
@property(readonly, nonatomic) id <PDLTopNCache> topNCache; // @synthesize topNCache=_topNCache;
@property(readonly, nonatomic) id <PDLDeviceContactsService> deviceContactsService; // @synthesize deviceContactsService=_deviceContactsService;
@property(readonly, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) PDLSessionContext *sessionContext; // @synthesize sessionContext=_sessionContext;
@property _Bool shouldContinueRunning; // @synthesize shouldContinueRunning=_shouldContinueRunning;
@property(retain, nonatomic) PDLQueryProcessorContext *queryProcessorContext; // @synthesize queryProcessorContext=_queryProcessorContext;
@property(readonly, nonatomic) PDLClientConfigInternal *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) id <GSCAccountId> accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (_Bool)shouldQueryLiveAutocomplete;
- (_Bool)shouldQueryDeviceContacts;
- (id)ownerFieldsSet;
- (void)ownerFieldsToFilter;
- (void)processNextDataSourceWithCurrentDataSource:(long long)arg1;
- (long long)nextDataSourceAfterDataSource:(long long)arg1;
- (void)queryProcessor:(id)arg1 didFailToRetrieveResultsWithError:(id)arg2;
- (void)queryProcessor:(id)arg1 didRetrieveResults:(id)arg2 resultsIterator:(id)arg3;
- (void)cancel;
- (void)processQuery;
- (id)initWithQueryProcessorContext:(id)arg1 sessionContext:(id)arg2 accountID:(id)arg3 callbacks:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


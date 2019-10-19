//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsAdRenderDataParserMetricsAdapter-Protocol.h"
#import "SCSnapAdsOperationMetricsAdapter-Protocol.h"

@class NSString, SCSnapAdsAdLifecycleWatermarkEventsTracker;

@interface SCSnapAdsMetricsManager : NSObject <SCSnapAdsOperationMetricsAdapter, SCSnapAdsAdRenderDataParserMetricsAdapter>
{
    SCSnapAdsAdLifecycleWatermarkEventsTracker *_adLifecycleTracker;
}

- (void).cxx_destruct;
- (void)_requestResolved:(id)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestLatencyInSec:(double)arg4 isPrimary:(_Bool)arg5;
- (void)logDataInvalid:(unsigned long long)arg1;
- (id)_stringContextFromEnum:(unsigned long long)arg1;
- (void)adExpired:(id)arg1;
- (void)logAdvertiserIdStatus:(id)arg1 requestType:(unsigned long long)arg2 isPrimary:(_Bool)arg3;
- (void)requestResolvedAdIdentifiers:(id)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestURL:(id)arg4 requestLatencyInSec:(double)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7;
- (void)requestResolvedAdIdentifiers:(id)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestURL:(id)arg4 requestLatencyInSec:(double)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7 requestSize:(unsigned long long)arg8;
- (void)requestSubmittedAdIdentifier:(id)arg1 requestType:(unsigned long long)arg2 requestURL:(id)arg3 targetingParams:(id)arg4 debugViewParams:(id)arg5 isPrimary:(_Bool)arg6;
- (void)logRequestFailedReason:(long long)arg1 adIdentifier:(id)arg2 requestType:(unsigned long long)arg3 isPrimary:(_Bool)arg4;
- (void)trackRequestFailureErrorStatusCode:(long long)arg1 requestURL:(id)arg2 requestType:(unsigned long long)arg3 requestLatencyInSec:(double)arg4 adType:(id)arg5 adProductType:(unsigned long long)arg6 adIdentifier:(id)arg7 isPrimary:(_Bool)arg8;
- (void)trackRequestSuccessRequestURL:(id)arg1 adIdentifier:(id)arg2 requestType:(unsigned long long)arg3 requestLatencyInSec:(double)arg4 adType:(id)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7;
- (void)trackRequestSubmitted:(id)arg1 isPrimary:(_Bool)arg2;
- (void)serveRequestResolved:(id)arg1 statusCode:(long long)arg2 requestLatencyInSec:(double)arg3 isPrimary:(_Bool)arg4;
- (void)serveItemsMoreThanRequested:(unsigned long long)arg1 isPrimary:(_Bool)arg2;
- (void)serveResponseResolved:(id)arg1 isPrimary:(_Bool)arg2;
- (void)serveResponseFinishesDeserializing:(unsigned long long)arg1 responseSize:(long long)arg2 deserializationLatency:(double)arg3 serveItemsCount:(long long)arg4 isPrimary:(_Bool)arg5;
- (void)serveResponseStartsDeserializing:(id)arg1 isPrimary:(_Bool)arg2;
- (void)serveRequestFailed:(id)arg1 errorResponseType:(unsigned long long)arg2 requestType:(unsigned long long)arg3 failedReason:(long long)arg4 isPrimary:(_Bool)arg5;
- (void)serveRequestSubmitted:(id)arg1 requestURL:(id)arg2 requestType:(unsigned long long)arg3 debugViewParams:(id)arg4 isPrimary:(_Bool)arg5;
@property(readonly, nonatomic) SCSnapAdsAdLifecycleWatermarkEventsTracker *adLifecycleTracker;
- (id)initWithAdLifeCycleTracker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


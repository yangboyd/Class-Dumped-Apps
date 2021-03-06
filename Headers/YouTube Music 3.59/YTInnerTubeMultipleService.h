//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol YTInnerTubeUIService, YTInnerTubeUIServiceWithTimeoutInterval;

@interface YTInnerTubeMultipleService : NSObject
{
    id <YTInnerTubeUIService> _mandatoryService;
    id <YTInnerTubeUIServiceWithTimeoutInterval> _optionalService;
    double _optionalServiceTimeout;
    unsigned long long _nextRequestID;
    NSMutableDictionary *_requests;
}

- (void).cxx_destruct;
- (void)scheduleWatchDogForRequestID:(unsigned long long)arg1;
- (void)saveOptionalResponse:(id)arg1 cached:(_Bool)arg2 forRequestID:(unsigned long long)arg3;
- (void)saveMandatoryResponse:(id)arg1 cached:(_Bool)arg2 forRequestID:(unsigned long long)arg3;
- (void)sendError:(id)arg1 forRequestID:(unsigned long long)arg2;
- (void)setSendNowforRequestID:(unsigned long long)arg1;
- (unsigned long long)generateNewRequestID;
- (unsigned long long)requestCount;
- (void)makeMandatoryRequest:(id)arg1 optionalRequest:(id)arg2 refresh:(_Bool)arg3 multipleResponseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 multipleResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)clearCaches;
- (Class)responseClass;
- (id)initWithMandatoryService:(id)arg1 optionalService:(id)arg2 optionalServiceTimeout:(double)arg3;

@end


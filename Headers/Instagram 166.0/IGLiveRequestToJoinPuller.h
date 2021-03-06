//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, IGLiveRequestToJoinService, NSNumber;

@interface IGLiveRequestToJoinPuller : NSObject
{
    IGLiveRequestToJoinService *_service;
    CDUnknownBlockType _countsCallback;
    CDUnknownBlockType _requestsCallback;
    FBTimer *_countsTimer;
    FBTimer *_requestsTimer;
    double _lastSeenTime;
    double _lastFetchedTime;
    NSNumber *_lastTotalCount;
}

- (void).cxx_destruct;
- (void)markCountsSeen;
- (void)stopPullingRequests;
- (void)_pullRequest;
- (void)startPullingRequestsAtInterval:(double)arg1 fetchImmediately:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)stopObservingCounts;
- (void)_didCountWithUsers:(id)arg1 newCount:(long long)arg2 totalCount:(long long)arg3 unseenCount:(long long)arg4 resultsTimestamp:(double)arg5 error:(id)arg6;
- (void)_fetchCount;
- (void)startObservingCountsChange:(CDUnknownBlockType)arg1;
- (id)initWithFetcher:(id)arg1;

@end


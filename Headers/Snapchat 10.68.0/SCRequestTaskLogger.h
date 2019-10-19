//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SCRequestTaskLogger : NSObject
{
    NSMutableArray *_queueDelays;
    NSMutableArray *_networkDelays;
    NSMutableArray *_waitingResponseDelays;
    NSMutableArray *_requestIDs;
    long long _overallQueueDelay;
    long long _overallNetworkDelay;
    long long _overallUserInitiatedQueueDelay;
    long long _overallUserInitiatedNetworkDelay;
    long long _overallWaitingResponseDelay;
    long long _fromStartToSubmitTime;
    double _enqueueTime;
    double _runStartTime;
    double _userInitiatedTime;
    double _logStatsRate;
    struct SCNetworkTraceFileStruct *_traceFile;
    unsigned long long _enqueueTraceTime;
    unsigned long long _runStartTraceTime;
    NSString *_userContext;
    long long _appState;
}

+ (void)addNetworkStepToPerfMetricsWithEndpoint:(id)arg1 networkStepName:(id)arg2;
- (void).cxx_destruct;
- (id)_orderedJSONObjectFromDictionary:(id)arg1;
- (_Bool)_shouldTraceTask:(id)arg1;
- (id)_stringForRequestPriority:(long long)arg1;
- (id)_stringForDownloadManagerMode:(_Bool)arg1;
- (_Bool)_shouldLogStatsOnTaskFinish;
- (void)taskDidCompleteWithResponseInfo:(id)arg1;
- (void)taskDidFinish:(id)arg1 error:(id)arg2;
- (void)taskDidPause:(id)arg1;
- (void)taskDidRun:(id)arg1;
- (void)taskDidSent:(id)arg1;
- (void)taskWillRun:(id)arg1;
- (void)taskDidSubmit:(id)arg1;
- (void)taskDidEnqueue:(id)arg1;
- (void)taskDidInitiateByUser;
- (id)initWithNetworkTraceFile:(struct SCNetworkTraceFileStruct *)arg1;
- (id)init;

@end


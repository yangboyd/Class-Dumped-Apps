//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCRequestConcurrencyCounter : NSObject
{
    NSMutableDictionary *_registeredTasks;
    NSMutableDictionary *_largeDLTasksInContext;
    NSMutableDictionary *_largeDLTasksInURLSessionPriority;
    NSMutableDictionary *_registeredVirtualStreamingRequests;
    NSMutableDictionary *_virtualStreamingRequestsInContext;
    SCQueuePerformer *_performer;
    unsigned long long _numOfAnalyticTasks;
    unsigned long long _numOfMetadataTasks;
    unsigned long long _numOfUploadTasks;
    unsigned long long _numOfSmallDLTasks;
    unsigned long long _numOfLargeDLTasks;
    unsigned long long _numOfBatchSmallDLTasks;
    unsigned long long _numOfVirtualStreamingRequests;
    unsigned long long _numOfStreamingChunkRequests;
}

+ (unsigned long long)_numberOfTasksInArray:(id)arg1 thatMatch:(CDUnknownBlockType)arg2;
@property unsigned long long numOfStreamingChunkRequests; // @synthesize numOfStreamingChunkRequests=_numOfStreamingChunkRequests;
@property unsigned long long numOfVirtualStreamingRequests; // @synthesize numOfVirtualStreamingRequests=_numOfVirtualStreamingRequests;
@property unsigned long long numOfBatchSmallDLTasks; // @synthesize numOfBatchSmallDLTasks=_numOfBatchSmallDLTasks;
@property unsigned long long numOfLargeDLTasks; // @synthesize numOfLargeDLTasks=_numOfLargeDLTasks;
@property unsigned long long numOfSmallDLTasks; // @synthesize numOfSmallDLTasks=_numOfSmallDLTasks;
@property unsigned long long numOfUploadTasks; // @synthesize numOfUploadTasks=_numOfUploadTasks;
@property unsigned long long numOfMetadataTasks; // @synthesize numOfMetadataTasks=_numOfMetadataTasks;
@property unsigned long long numOfAnalyticTasks; // @synthesize numOfAnalyticTasks=_numOfAnalyticTasks;
- (void).cxx_destruct;
- (_Bool)_hasChunkRequestTask:(id)arg1;
- (id)_getOrCreateVirtualStreamingRequest:(id)arg1;
- (void)_safeCheckCountersAfterUnregisterTask:(id)arg1;
- (void)_willFinishStreamingChunkRequestTask:(id)arg1;
- (void)_willRunStreamingChunkRequestTask:(id)arg1;
- (unsigned long long)_numberOfVirtualRegisteredStreamingRequestsThatMatch:(CDUnknownBlockType)arg1;
- (unsigned long long)numOfRunningLargeInContextDownloadTasks;
- (unsigned long long)numOfRunningInContextDownloadTasks;
- (unsigned long long)numOfLargeDLTasksInContext:(id)arg1 URLSessionPriority:(float)arg2;
- (unsigned long long)numOfLargeDLTasksInURLSessionPriority:(float)arg1;
- (unsigned long long)numOfVirtualStreamingRequestsInContext:(id)arg1;
- (unsigned long long)numOfLargeDLTasksInContext:(id)arg1;
- (_Bool)_isCriticalTask:(id)arg1;
- (unsigned long long)numOfCriticalTasks;
- (void)reset;
- (void)removeContext:(id)arg1 toTask:(id)arg2;
- (void)addContext:(id)arg1 toTask:(id)arg2;
- (_Bool)hasRegisteredTask:(id)arg1;
- (void)updateTask:(id)arg1 willRunTask:(_Bool)arg2;
- (void)unregisterTask:(id)arg1;
- (void)registerTask:(id)arg1;
- (id)init;

@end


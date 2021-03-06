//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBMetadataRequesterObserver-Protocol.h>

@class DBMetadataDatabase, DBMetadataRequestsDictionary, DBMetadataRequestsQueueDictionary, DBWeakObserverMap, NSOperationQueue, NSString;
@protocol DBMetadataRequesterProtocol;

@interface DBMetadataRequestQueue : NSObject <DBMetadataRequesterObserver>
{
    DBMetadataDatabase *_metadataDatabase;
    NSOperationQueue *_operationQueue;
    DBMetadataRequestsDictionary *_runningRequests;
    DBMetadataRequestsQueueDictionary *_backgroundRequests;
    DBWeakObserverMap *_requestObservers;
    _Bool _terminated;
    id <DBMetadataRequesterProtocol> _requester;
}

+ (_Bool)db_requestForPath:(id)arg1 conflictsWithRequestForPath:(id)arg2;
- (void).cxx_destruct;
- (void)requester:(id)arg1 requestDidCompleteForPath:(id)arg2;
- (void)requester:(id)arg1 requestDidFailForPath:(id)arg2 withError:(id)arg3;
- (void)requester:(id)arg1 requestDidSucceedForPath:(id)arg2 withMetadata:(id)arg3;
- (void)requester:(id)arg1 didReceiveRequestResponseForPath:(id)arg2;
- (void)queueNewMetadataRequestIfNotExistsForPath:(id)arg1;
- (void)refetchAnyOngoingMetadataRequestForPath:(id)arg1;
- (id)addRequestCompletionListener:(id)arg1;
- (void)db_setupDependenciesForRequest:(id)arg1 andAddToQueue:(id)arg2;
- (void)cancelAllOperationsAndTerminateQueue;
- (void)refreshWithUserPriorityMetadataRequest:(id)arg1;
- (void)db_dequeueBackgroundRequest;
- (_Bool)reprioritizeRequest:(id)arg1 withAtLeastPriority:(unsigned long long)arg2;
- (id)queueRequestForPath:(id)arg1 requestParams:(id)arg2 withPriority:(unsigned long long)arg3;
- (id)backgroundRequestForPath:(id)arg1;
- (id)pendingRequestForPath:(id)arg1;
- (id)initWithMetadataDatabase:(id)arg1 withRequester:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


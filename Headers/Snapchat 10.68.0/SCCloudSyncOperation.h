//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface SCCloudSyncOperation : NSObject
{
    NSDate *_operationStartNetworkProcessingTimestampUtc;
}

+ (void)snaps:(id *)arg1 details:(id *)arg2 private:(_Bool *)arg3 forPayload:(id)arg4 requestID:(id)arg5 dataObjectContext:(id)arg6;
+ (unsigned long long)numberOfSnapsForPayload:(id)arg1 requestID:(id)arg2;
+ (id)deserialize:(id)arg1 requestID:(id)arg2;
@property(copy, nonatomic) NSDate *operationStartNetworkProcessingTimestampUtc; // @synthesize operationStartNetworkProcessingTimestampUtc=_operationStartNetworkProcessingTimestampUtc;
- (void).cxx_destruct;
- (id)cleanupContextForOutOfOrderDeletionWithDataObjectContext:(id)arg1;
- (id)processAndCleanupForOutOfOrderDeletions:(id)arg1 dataObjectContext:(id)arg2 dataSource:(id)arg3 logger:(id)arg4 queue:(id)arg5;
- (_Bool)needRunImmediately;
- (_Bool)requiresSyncStatusUpdate;
- (id)logParameters;
- (_Bool)isOperationValidBeforeRemoteSync:(id)arg1 dataObjectContext:(id)arg2;
- (_Bool)isOperationFromRetryEntry;
- (_Bool)allMediaUploadsCompleteWithDataObjectContext:(id)arg1;
- (_Bool)doesNotRequireMediaUpload;
- (_Bool)eligibleForOutOfOrderExecution;
- (id)changedSnapContextsWithEntryUpdate:(id)arg1;
- (void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3;
- (id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2;
- (void)remoteSyncFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 dataVault:(id)arg3 dataObjectContext:(id)arg4 networker:(id)arg5 useProtobuf:(_Bool)arg6 logger:(id)arg7 filterInvalidSnaps:(_Bool)arg8 queue:(id)arg9 progressHandler:(CDUnknownBlockType)arg10 failureHandler:(CDUnknownBlockType)arg11 successHandler:(CDUnknownBlockType)arg12;
- (void)prepareRemoteSyncWithDataObjectContext:(id)arg1 cloudFS:(id)arg2 dataVault:(id)arg3 networker:(id)arg4 logger:(id)arg5 queue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2;
- (id)detectAndResolveConflictsWithCloudFS:(id)arg1 dataObjectContext:(id)arg2 logger:(id)arg3;
- (id)initWithSnapshot:(id)arg1 requestID:(id)arg2;
- (id)makeSnapshot;
@property(readonly, copy, nonatomic) NSArray *entryIds;
@property(readonly, copy, nonatomic) NSString *requestID;
@property(readonly, nonatomic) unsigned long long type;
- (void)recordOperationStartNetworkProcessing;
- (id)serialize;
- (double)estimatedUploadTimeWithCloudFS:(id)arg1;

@end


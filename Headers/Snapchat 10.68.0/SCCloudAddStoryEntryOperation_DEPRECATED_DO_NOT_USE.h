//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCloudSyncOperation.h"

#import "SCCloudSyncStoryOperation-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCloudSyncTriggerUserContext, SCGalleryEntry, SCGalleryProfile;

@interface SCCloudAddStoryEntryOperation_DEPRECATED_DO_NOT_USE : SCCloudSyncOperation <SCCloudSyncStoryOperation>
{
    NSString *_requestID;
    SCGalleryProfile *_profile;
    SCGalleryEntry *_entryPlaceholder;
    NSDictionary *_dataVaultEncryption;
    NSArray *_detailPlaceholders;
    NSArray *_miniThumbnailPlaceholders;
    NSArray *_snapPlaceholders;
    SCCloudSyncTriggerUserContext *_userContext;
}

- (void).cxx_destruct;
- (void)_updateEntryFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 networker:(id)arg3 dataObjectContext:(id)arg4 useProtobuf:(_Bool)arg5 snapsUploadInfo:(id)arg6 queue:(id)arg7 failureHandler:(CDUnknownBlockType)arg8 successHandler:(CDUnknownBlockType)arg9;
- (_Bool)isPrivateWithDataObjectContext:(id)arg1;
- (id)dataVaultEncryption;
- (unsigned long long)numberOfSnaps;
- (id)miniThumbnailPlaceholders;
- (id)detailPlaceholders;
- (id)snapPlaceholders;
- (id)cleanupContextForOutOfOrderDeletionWithDataObjectContext:(id)arg1;
- (id)processAndCleanupForOutOfOrderDeletions:(id)arg1 dataObjectContext:(id)arg2 dataSource:(id)arg3 logger:(id)arg4 queue:(id)arg5;
- (_Bool)needRunImmediately;
- (_Bool)requiresSyncStatusUpdate;
- (_Bool)allMediaUploadsCompleteWithDataObjectContext:(id)arg1;
- (_Bool)isOperationFromRetryEntry;
- (_Bool)doesNotRequireMediaUpload;
- (_Bool)eligibleForOutOfOrderExecution;
- (id)logParameters;
@property(readonly, copy) NSString *description;
- (void)remoteSyncFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 dataVault:(id)arg3 dataObjectContext:(id)arg4 networker:(id)arg5 useProtobuf:(_Bool)arg6 logger:(id)arg7 filterInvalidSnaps:(_Bool)arg8 queue:(id)arg9 progressHandler:(CDUnknownBlockType)arg10 failureHandler:(CDUnknownBlockType)arg11 successHandler:(CDUnknownBlockType)arg12;
- (_Bool)isOperationValidBeforeRemoteSync:(id)arg1 dataObjectContext:(id)arg2;
- (id)changedSnapContextsWithEntryUpdate:(id)arg1;
- (void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3;
- (id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2;
- (_Bool)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2;
- (id)detectAndResolveConflictsWithCloudFS:(id)arg1 dataObjectContext:(id)arg2 logger:(id)arg3;
- (id)makeSnapshot;
- (id)entryIds;
- (id)requestID;
- (id)initWithSnapshot:(id)arg1 requestID:(id)arg2;
- (id)initWithProfile:(id)arg1 entryPlaceholder:(id)arg2 addSnapEntities:(id)arg3 dataVaultEncryption:(id)arg4 userContext:(id)arg5;
- (unsigned long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


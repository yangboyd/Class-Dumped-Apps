//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCloudSyncOperation.h"

#import "SCCloudSyncStoryOperation-Protocol.h"

@class NSString, SCCloudCreateOrExtendOperationProgressReporter, SCCloudSyncTriggerUserContext, SCDataVaultEncryption;
@protocol SCGalleryEntry, SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudCreateOrExtendEntryOperationV2 : SCCloudSyncOperation <SCCloudSyncStoryOperation>
{
    NSString *_requestID;
    id <SCGalleryProfile> _profile;
    id <SCGalleryEntry> _entryPlaceholder;
    SCDataVaultEncryption *_dataVaultEncryption;
    id <SCGallerySnap> _snapPlaceholder;
    id <SCGallerySnapDetail> _detailPlaceholder;
    id <SCGallerySnapMiniThumbnail> _miniThumbnailPlaceholder;
    SCCloudSyncTriggerUserContext *_userContext;
    SCCloudCreateOrExtendOperationProgressReporter *_progressReporter;
}

- (void).cxx_destruct;
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
- (void)_updateEntryFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 networker:(id)arg3 dataObjectContext:(id)arg4 logger:(id)arg5 queue:(id)arg6 snapsUploadInfo:(id)arg7 failureHandler:(CDUnknownBlockType)arg8 successHandler:(CDUnknownBlockType)arg9;
- (id)changedSnapContextsWithEntryUpdate:(id)arg1;
- (void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3;
- (id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2;
- (void)remoteSyncFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 dataVault:(id)arg3 dataObjectContext:(id)arg4 networker:(id)arg5 useProtobuf:(_Bool)arg6 logger:(id)arg7 filterInvalidSnaps:(_Bool)arg8 queue:(id)arg9 progressHandler:(CDUnknownBlockType)arg10 failureHandler:(CDUnknownBlockType)arg11 successHandler:(CDUnknownBlockType)arg12;
- (_Bool)isOperationValidBeforeRemoteSync:(id)arg1 dataObjectContext:(id)arg2;
- (_Bool)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2;
- (id)detectAndResolveConflictsWithCloudFS:(id)arg1 dataObjectContext:(id)arg2 logger:(id)arg3;
- (id)initWithSnapshot:(id)arg1 requestID:(id)arg2;
- (id)makeSnapshot;
- (id)entryIds;
- (id)requestID;
- (unsigned long long)type;
- (id)initWithEntryPlaceholder:(id)arg1 addSnapEntity:(id)arg2 dataVaultEncryption:(id)arg3 profile:(id)arg4 userContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


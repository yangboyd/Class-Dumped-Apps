//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMemoriesDataMutatingAddSnap-Protocol.h"
#import "SCMemoriesDataMutatingAutoSave-Protocol.h"
#import "SCMemoriesDataMutatingBackupRetry-Protocol.h"
#import "SCMemoriesDataMutatingBatchCapture-Protocol.h"
#import "SCMemoriesDataMutatingDelete-Protocol.h"
#import "SCMemoriesDataMutatingEdit-Protocol.h"
#import "SCMemoriesDataMutatingHighlight-Protocol.h"
#import "SCMemoriesDataMutatingMEO-Protocol.h"
#import "SCMemoriesDataMutatingMultiSnap-Protocol.h"
#import "SCMemoriesDataMutatingRecovery-Protocol.h"
#import "SCMemoriesDataMutatingSharedStory-Protocol.h"
#import "SCMemoriesDataMutatingSpectacles-Protocol.h"
#import "SCMemoriesDataMutatingStory-Protocol.h"

@class NSMutableDictionary, NSString, SCDataObjectContext, SCMemoriesGrantSavedSnapRequester, SCQueuePerformer, SCUserSession;

@interface SCGalleryDataMutator : NSObject <SCMemoriesDataMutatingAddSnap, SCMemoriesDataMutatingAutoSave, SCMemoriesDataMutatingBackupRetry, SCMemoriesDataMutatingBatchCapture, SCMemoriesDataMutatingDelete, SCMemoriesDataMutatingEdit, SCMemoriesDataMutatingHighlight, SCMemoriesDataMutatingMultiSnap, SCMemoriesDataMutatingMEO, SCMemoriesDataMutatingRecovery, SCMemoriesDataMutatingSharedStory, SCMemoriesDataMutatingSpectacles, SCMemoriesDataMutatingStory>
{
    SCDataObjectContext *_dataObjectContext;
    SCQueuePerformer *_storeQueuePerformer;
    SCUserSession *_userSession;
    SCMemoriesGrantSavedSnapRequester *_grantRequester;
    NSMutableDictionary *_updatedSnapIdMap;
}

- (void).cxx_destruct;
- (void)_checkSnapMediaType:(int)arg1 servletMediaFormat:(id)arg2 isSavingVideo:(_Bool)arg3 userContext:(id)arg4;
- (long long)_sojuMediaFormatFromServletMediaFormat:(id)arg1;
- (id)_checkServletMediaFormat:(id)arg1 sojuMediaType:(int)arg2;
- (void)_appendByteSizeOperationsForStory:(id)arg1 addSnapEntities:(id)arg2 fromFailedEntry:(id)arg3 dataVaultEncryption:(id)arg4 userContext:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)_placeholderForPhotoAsset:(id)arg1 mediaURL:(id)arg2 orientation:(id)arg3 isPrivate:(_Bool)arg4 creatorUserId:(id)arg5 sharedSnapId:(id)arg6 attribution:(id)arg7 source:(unsigned long long)arg8 creatorAttribution:(id)arg9 dataVaultEncryption:(id)arg10 mutationInfo:(id)arg11 userContext:(id)arg12;
- (void)_addStoryWithEntryId:(id)arg1 externalId:(id)arg2 title:(id)arg3 autosaveTimeUtc:(id)arg4 entryType:(unsigned long long)arg5 entrySource:(long long)arg6 viewType:(unsigned long long)arg7 addSnapEntities:(id)arg8 isPrivate:(_Bool)arg9 dataVaultEncryption:(id)arg10 userContext:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (void)_addPhoto:(id)arg1 sojuMediaType:(int)arg2 servletMediaFormat:(id)arg3 source:(unsigned long long)arg4 cameraRollId:(id)arg5 attribution:(id)arg6 externalId:(id)arg7 title:(id)arg8 entryType:(unsigned long long)arg9 entrySource:(long long)arg10 autosaveTimeUtc:(id)arg11 captureTimeUtc:(id)arg12 createTimeUtc:(id)arg13 orientation:(long long)arg14 duration:(double)arg15 isInfiniteDuration:(_Bool)arg16 overlayFormat:(id)arg17 overlay:(id)arg18 location:(id)arg19 isPrivate:(_Bool)arg20 autosave:(_Bool)arg21 saveSource:(unsigned long long)arg22 isFromSavedMetadata:(_Bool)arg23 cameraFrontFacing:(_Bool)arg24 creatorAttribution:(id)arg25 snap3DAssetMetadata:(id)arg26 userContext:(id)arg27 completionHandler:(CDUnknownBlockType)arg28;
- (id)_generateEncryptedPhotoSnap:(id)arg1 sojuMediaType:(int)arg2 servletMediaFormat:(id)arg3 overlayFormat:(id)arg4 overlay:(id)arg5 source:(unsigned long long)arg6 cameraRollId:(id)arg7 sharedSnapId:(id)arg8 attribution:(id)arg9 captureTimeUtc:(id)arg10 createTimeUtc:(id)arg11 orientation:(long long)arg12 duration:(double)arg13 location:(id)arg14 isPrivate:(_Bool)arg15 isInfiniteDuration:(_Bool)arg16 dataVaultEncryption:(id)arg17 mutationInfo:(id)arg18 cameraFrontFacing:(_Bool)arg19 creatorAttribution:(id)arg20 snap3DAssetMetadata:(id)arg21;
- (void)_addVideo:(id)arg1 sojuMediaType:(int)arg2 servletMediaFormat:(id)arg3 source:(unsigned long long)arg4 cameraRollId:(id)arg5 attribution:(id)arg6 externalId:(id)arg7 title:(id)arg8 entryType:(unsigned long long)arg9 entrySource:(long long)arg10 autosaveTimeUtc:(id)arg11 captureTimeUtc:(id)arg12 createTimeUtc:(id)arg13 orientation:(long long)arg14 overlayFormat:(id)arg15 overlay:(id)arg16 location:(id)arg17 isPrivate:(_Bool)arg18 autosave:(_Bool)arg19 saveSource:(unsigned long long)arg20 isInfiniteDuration:(_Bool)arg21 isFromSavedMetadata:(_Bool)arg22 cameraFrontFacing:(_Bool)arg23 creatorAttribution:(id)arg24 encryptedMediaFile:(id)arg25 hasOptimizedForNetworkUse:(_Bool)arg26 deviceFirmwareInfo:(id)arg27 deviceId:(id)arg28 userContext:(id)arg29 completionHandler:(CDUnknownBlockType)arg30;
- (id)_generateEncryptedVideoSnap:(id)arg1 sojuMediaType:(int)arg2 servletMediaFormat:(id)arg3 overlayFormat:(id)arg4 overlay:(id)arg5 timeScale:(double)arg6 source:(unsigned long long)arg7 cameraRollId:(id)arg8 sharedSnapId:(id)arg9 attribution:(id)arg10 captureTimeUtc:(id)arg11 createTimeUtc:(id)arg12 orientation:(long long)arg13 location:(id)arg14 isPrivate:(_Bool)arg15 isInfiniteDuration:(_Bool)arg16 dataVaultEncryption:(id)arg17 mutationInfo:(id)arg18 cameraFrontFacing:(_Bool)arg19 creatorAttribution:(id)arg20 encryptedMediaFile:(id)arg21 hasOptimizedForNetworkUse:(_Bool)arg22 deviceFirmwareInfo:(id)arg23 deviceId:(id)arg24 userContext:(id)arg25;
- (_Bool)_shouldApplyFastStartOperation:(_Bool)arg1 isOKToUseEncryptedMediaFile:(_Bool)arg2;
- (_Bool)_isOKToUseEncryptedMediaFile:(id)arg1 isPrivate:(_Bool)arg2;
- (id)_generateEncryptedVideoSnap:(id)arg1 sojuMediaType:(int)arg2 servletMediaFormat:(id)arg3 overlayFormat:(id)arg4 overlay:(id)arg5 timeScale:(double)arg6 source:(unsigned long long)arg7 cameraRollId:(id)arg8 sharedSnapId:(id)arg9 attribution:(id)arg10 captureTimeUtc:(id)arg11 createTimeUtc:(id)arg12 orientation:(long long)arg13 location:(id)arg14 isPrivate:(_Bool)arg15 isInfiniteDuration:(_Bool)arg16 dataVaultEncryption:(id)arg17 mutationInfo:(id)arg18 cameraFrontFacing:(_Bool)arg19 creatorAttribution:(id)arg20 userContext:(id)arg21;
- (id)initWithUserSession:(id)arg1 dataObjectContext:(id)arg2;
- (void)addPhoto:(id)arg1 sojuMediaType:(int)arg2 servletMediaFormat:(id)arg3 source:(unsigned long long)arg4 cameraRollId:(id)arg5 attribution:(id)arg6 captureTimeUtc:(id)arg7 createTimeUtc:(id)arg8 orientation:(long long)arg9 duration:(double)arg10 overlayFormat:(id)arg11 overlay:(id)arg12 location:(id)arg13 isPrivate:(_Bool)arg14 saveSource:(unsigned long long)arg15 isInfiniteDuration:(_Bool)arg16 isFromSavedMetadata:(_Bool)arg17 cameraFrontFacing:(_Bool)arg18 creatorAttribution:(id)arg19 snap3DAssetMetadata:(id)arg20 userContext:(id)arg21 completionHandler:(CDUnknownBlockType)arg22;
- (void)addVideoProvider:(id)arg1 sojuMediaType:(int)arg2 source:(unsigned long long)arg3 cameraRollId:(id)arg4 attribution:(id)arg5 captureTimeUtc:(id)arg6 createTimeUtc:(id)arg7 orientation:(long long)arg8 overlayFormat:(id)arg9 overlay:(id)arg10 location:(id)arg11 isPrivate:(_Bool)arg12 saveSource:(unsigned long long)arg13 isInfiniteDuration:(_Bool)arg14 isFromSavedMetadata:(_Bool)arg15 cameraFrontFacing:(_Bool)arg16 creatorAttribution:(id)arg17 encryptedMediaFile:(id)arg18 deviceFirmwareInfo:(id)arg19 deviceId:(id)arg20 userContext:(id)arg21 completionHandler:(CDUnknownBlockType)arg22;
- (void)addVideoProvider:(id)arg1 sojuMediaType:(int)arg2 source:(unsigned long long)arg3 cameraRollId:(id)arg4 attribution:(id)arg5 captureTimeUtc:(id)arg6 createTimeUtc:(id)arg7 orientation:(long long)arg8 overlayFormat:(id)arg9 overlay:(id)arg10 location:(id)arg11 isPrivate:(_Bool)arg12 saveSource:(unsigned long long)arg13 isInfiniteDuration:(_Bool)arg14 isFromSavedMetadata:(_Bool)arg15 cameraFrontFacing:(_Bool)arg16 creatorAttribution:(id)arg17 userContext:(id)arg18 completionHandler:(CDUnknownBlockType)arg19;
- (void)_addAutosavedVideoProvider:(id)arg1 sojuMediaType:(int)arg2 captureTimeUtc:(id)arg3 orientation:(long long)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 autosavedEntry:(id)arg10 entryType:(unsigned long long)arg11 entrySource:(long long)arg12 externalId:(id)arg13 title:(id)arg14 attribution:(id)arg15 cameraFrontFacing:(_Bool)arg16 userContext:(id)arg17 completionHandler:(CDUnknownBlockType)arg18;
- (void)addAutosavedMyStoryVideoProvider:(id)arg1 sojuMediaType:(int)arg2 captureTimeUtc:(id)arg3 orientation:(long long)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 cameraFrontFacing:(_Bool)arg10 userContext:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (void)addAutosavedMobVideoProvider:(id)arg1 sojuMediaType:(int)arg2 captureTimeUtc:(id)arg3 orientation:(long long)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 externalId:(id)arg11 displayName:(id)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 completionHandler:(CDUnknownBlockType)arg15;
- (void)_addAutosavedPhoto:(id)arg1 captureTimeUtc:(id)arg2 orientation:(long long)arg3 duration:(double)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 autosavedEntry:(id)arg10 entryType:(unsigned long long)arg11 entrySource:(long long)arg12 externalId:(id)arg13 title:(id)arg14 attribution:(id)arg15 cameraFrontFacing:(_Bool)arg16 snap3DAssetMetadata:(id)arg17 userContext:(id)arg18 completionHandler:(CDUnknownBlockType)arg19;
- (void)addAutosavedMyStoryPhoto:(id)arg1 captureTimeUtc:(id)arg2 orientation:(long long)arg3 duration:(double)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 cameraFrontFacing:(_Bool)arg10 snap3DAssetMetadata:(id)arg11 userContext:(id)arg12 completionHandler:(CDUnknownBlockType)arg13;
- (void)addAutosavedMobPhoto:(id)arg1 captureTimeUtc:(id)arg2 orientation:(long long)arg3 duration:(double)arg4 overlayFormat:(id)arg5 overlay:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 externalId:(id)arg11 displayName:(id)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 snap3DAssetMetadata:(id)arg15 completionHandler:(CDUnknownBlockType)arg16;
- (void)deleteFailedEntries:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_retryFailedEntry:(id)arg1 userContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retryFailedEntry:(id)arg1 userContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retryFailedSnap:(id)arg1 userContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addBatchCaptureStoryWithVideoUrlsOrImages:(id)arg1 servletMediaFormats:(id)arg2 orientations:(id)arg3 overlayFormats:(id)arg4 overlays:(id)arg5 locations:(id)arg6 isPrivate:(_Bool)arg7 userContext:(id)arg8 entryType:(unsigned long long)arg9 entrySource:(long long)arg10 currentEntry:(id)arg11 externalId:(id)arg12 title:(id)arg13 attribution:(id)arg14 cameraFrontFacings:(id)arg15 createTimes:(id)arg16 timeRanges:(id)arg17 completionHandler:(CDUnknownBlockType)arg18;
- (void)addBatchCaptureStoryWithVideoUrlsOrImages:(id)arg1 servletMediaFormats:(id)arg2 orientations:(id)arg3 overlayFormats:(id)arg4 overlays:(id)arg5 locations:(id)arg6 isPrivate:(_Bool)arg7 isAutosave:(_Bool)arg8 cameraFrontFacings:(id)arg9 createTimes:(id)arg10 timeRanges:(id)arg11 userContext:(id)arg12 currentEntry:(id)arg13 isMultiSnap:(_Bool)arg14 completionHandler:(CDUnknownBlockType)arg15;
- (void)addMobBatchCaptureStoryWithVideoUrlsOrImages:(id)arg1 servletMediaFormats:(id)arg2 orientations:(id)arg3 overlayFormats:(id)arg4 overlays:(id)arg5 locations:(id)arg6 isPrivate:(_Bool)arg7 userContext:(id)arg8 externalId:(id)arg9 displayName:(id)arg10 entrySource:(long long)arg11 cameraFrontFacings:(id)arg12 createTimes:(id)arg13 timeRanges:(id)arg14 isMultiSnap:(_Bool)arg15 completionHandler:(CDUnknownBlockType)arg16;
- (void)_deleteEntries:(id)arg1 prioritized:(_Bool)arg2 deleteAll:(_Bool)arg3 userContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_allOtherSharedSnapEntryIds:(id)arg1 existedEntryId:(id)arg2 deleteSnaps:(id)arg3;
- (void)detachSnap:(id)arg1 cloudFile:(id)arg2 fromEntry:(id)arg3 userContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteSnap:(id)arg1 fromEntry:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteEntries:(id)arg1 prioritized:(_Bool)arg2 deleteAll:(_Bool)arg3 userContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateEntry:(id)arg1 addSnaps:(id)arg2 addPhotoAssets:(id)arg3 photoAssetMediaURLs:(id)arg4 photoAssetOrientations:(id)arg5 userContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)updateEntry:(id)arg1 title:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createSnapFrom:(id)arg1 cloudFile:(id)arg2 overlayFormat:(id)arg3 overlay:(id)arg4 isInfiniteDuration:(_Bool)arg5 isPrivate:(_Bool)arg6 createTimeUtc:(id)arg7 userContext:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)replacePhoto:(id)arg1 cloudFile:(id)arg2 entry:(id)arg3 duration:(double)arg4 isInfiniteDuration:(_Bool)arg5 overlayFormat:(id)arg6 overlay:(id)arg7 snap3DAssetMetadata:(id)arg8 userContext:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)replaceVideo:(id)arg1 cloudFile:(id)arg2 entry:(id)arg3 overlayFormat:(id)arg4 overlay:(id)arg5 isInfiniteDuration:(_Bool)arg6 userContext:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)getUpdatedSnapIdWithOldSnapId:(id)arg1;
- (void)saveFeaturedStory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addMultiSnapWithVideoUrls:(id)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(id)arg3 orientation:(long long)arg4 overlayFormats:(id)arg5 overlays:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 entryType:(unsigned long long)arg11 entrySource:(long long)arg12 currentEntry:(id)arg13 externalId:(id)arg14 title:(id)arg15 attribution:(id)arg16 cameraFrontFacing:(_Bool)arg17 createTimeOfFirstSnap:(id)arg18 timeRanges:(id)arg19 completionHandler:(CDUnknownBlockType)arg20;
- (void)addMultiSnapWithVideoUrls:(id)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(id)arg3 orientation:(long long)arg4 overlayFormats:(id)arg5 overlays:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isAutosave:(_Bool)arg9 isInfiniteDuration:(_Bool)arg10 cameraFrontFacing:(_Bool)arg11 createTimeOfFirstSnap:(id)arg12 timeRanges:(id)arg13 userContext:(id)arg14 currentEntry:(id)arg15 completionHandler:(CDUnknownBlockType)arg16;
- (void)addMobMultiSnapWithVideoUrls:(id)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(id)arg3 orientation:(long long)arg4 overlayFormats:(id)arg5 overlays:(id)arg6 location:(id)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(id)arg10 externalId:(id)arg11 displayName:(id)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 createTimeOfFirstSnap:(id)arg15 timeRanges:(id)arg16 completionHandler:(CDUnknownBlockType)arg17;
- (void)updatePrivacyForEntries:(id)arg1 isPrivate:(_Bool)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)recoverDanglingMediaWithSnapId:(id)arg1 cloudFile:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_addEntryFromSnap:(id)arg1 creatorUserId:(id)arg2 externalId:(id)arg3 title:(id)arg4 createTimeUtc:(id)arg5 orientation:(long long)arg6 isPrivate:(_Bool)arg7 entrySource:(long long)arg8 isFromSavedMetadata:(_Bool)arg9 dataVaultEncryption:(id)arg10 mutationInfo:(id)arg11 userContext:(id)arg12 completionHandler:(CDUnknownBlockType)arg13;
- (void)autosaveSharedMultiSnapWithVideoUrls:(id)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(id)arg3 source:(unsigned long long)arg4 creatorUserId:(id)arg5 sharedSnapId:(id)arg6 externalId:(id)arg7 cameraRollId:(id)arg8 attribution:(id)arg9 title:(id)arg10 createTimeOfFirstSnap:(id)arg11 timeRanges:(id)arg12 orientation:(long long)arg13 overlayFormats:(id)arg14 overlays:(id)arg15 location:(id)arg16 isPrivate:(_Bool)arg17 entrySource:(long long)arg18 saveSource:(unsigned long long)arg19 isInfiniteDuration:(_Bool)arg20 isFromSavedMetadata:(_Bool)arg21 cameraFrontFacing:(_Bool)arg22 creatorAttribution:(id)arg23 userContext:(id)arg24 completionHandler:(CDUnknownBlockType)arg25;
- (void)addShareSnaps:(id)arg1 sharedPHAsset:(id)arg2 photoAssetMediaURLs:(id)arg3 photoAssetOrientations:(id)arg4 sharedEntry:(id)arg5 userContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_requestGrantSaveSnap:(id)arg1 creatorAttribution:(id)arg2 entryExternalId:(id)arg3 entrySource:(long long)arg4 location:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)saveSharedVideoSnap:(id)arg1 videoProvider:(id)arg2 sojuMediaType:(long long)arg3 servletMediaFormat:(id)arg4 source:(unsigned long long)arg5 creatorUserId:(id)arg6 sharedSnapId:(id)arg7 externalId:(id)arg8 cameraRollId:(id)arg9 attribution:(id)arg10 title:(id)arg11 captureTimeUtc:(id)arg12 createTimeUtc:(id)arg13 orientation:(long long)arg14 overlayFormat:(id)arg15 overlay:(id)arg16 location:(id)arg17 isPrivate:(_Bool)arg18 entrySource:(long long)arg19 saveSource:(unsigned long long)arg20 isInfiniteDuration:(_Bool)arg21 isFromSavedMetadata:(_Bool)arg22 cameraFrontFacing:(_Bool)arg23 creatorAttribution:(id)arg24 userContext:(id)arg25 completionHandler:(CDUnknownBlockType)arg26;
- (void)saveSharedImageSnap:(id)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(id)arg3 source:(unsigned long long)arg4 creatorUserId:(id)arg5 sharedSnapId:(id)arg6 externalId:(id)arg7 cameraRollId:(id)arg8 attribution:(id)arg9 title:(id)arg10 captureTimeUtc:(id)arg11 createTimeUtc:(id)arg12 orientation:(long long)arg13 duration:(double)arg14 overlayFormat:(id)arg15 overlay:(id)arg16 location:(id)arg17 isPrivate:(_Bool)arg18 entrySource:(long long)arg19 saveSource:(unsigned long long)arg20 isInfiniteDuration:(_Bool)arg21 isFromSavedMetadata:(_Bool)arg22 cameraFrontFacing:(_Bool)arg23 creatorAttribution:(id)arg24 snap3DAssetMetadata:(id)arg25 userContext:(id)arg26 completionHandler:(CDUnknownBlockType)arg27;
- (id)grantRequester;
- (void)_deleteSpectaclesSnaps:(id)arg1 fromMutiSnapEntry:(id)arg2 userContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)moveSpectaclesSnaps:(id)arg1 fromMultiSnapEntry:(id)arg2 userContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)toggleMagicMomentStateForSnap:(id)arg1 entry:(id)arg2 magicMomentFrameTime:(id)arg3 userContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_createTicketForBadMediaWithMessage:(id)arg1;
- (id)_generateEncryptedDayStorySnapFromPlaceholder:(id)arg1 dataVaultEncryption:(id *)arg2 mutationInfo:(id)arg3 metadata:(id)arg4;
- (void)appendToDayStory:(id)arg1 snapPlaceholder:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_highlightSnapIds:(id)arg1 entry:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)highlightSnapIds:(id)arg1 forEntry:(id)arg2 userContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)toggleHighlightStateForSnap:(id)arg1 userContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_attemptToLoadVideoAtrributions:(id)arg1 retryCount:(unsigned long long)arg2;
- (void)_populateFieldsForSnapsToAppend:(id)arg1 isPrivate:(_Bool)arg2 addSnapEntities:(id)arg3 mutationInfo:(id)arg4 dataVaultEncryption:(id)arg5 userContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)_snapsToAppendForAllSnaps:(id)arg1 entrySnaps:(id)arg2;
- (void)_extendStoriesForEntry:(id)arg1 storySnaps:(id)arg2 isPrivate:(_Bool)arg3 userContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_saveStoriesWithStoriesId:(id)arg1 storyDisplayName:(id)arg2 entrySource:(long long)arg3 storySnaps:(id)arg4 isPrivate:(_Bool)arg5 isFromSavedMetadataMap:(id)arg6 userContext:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)saveStoryWithId:(id)arg1 storyDisplayName:(id)arg2 entrySource:(long long)arg3 storySnaps:(id)arg4 isPrivate:(_Bool)arg5 isFromSavedMetadataMap:(id)arg6 userContext:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)createStoryWithSnaps:(id)arg1 photoAssets:(id)arg2 photoAssetMediaURLs:(id)arg3 photoAssetOrientations:(id)arg4 storyDisplayName:(id)arg5 isPrivate:(_Bool)arg6 userContext:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


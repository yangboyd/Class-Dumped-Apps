//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EphemeralMedia.h"

#import "MediaCacheInfoDataSource-Protocol.h"
#import "MediaDataSource-Protocol.h"
#import "MediaDelegate-Protocol.h"
#import "MediaImageProcessingDelegate-Protocol.h"
#import "MediaUploadDelegate-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationDelegate-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationListener-Protocol.h"
#import "SCReportStoryDataParamsProvider-Protocol.h"
#import "SCReportStoryMetadataParamsProvider-Protocol.h"
#import "SCStoryExporterItem-Protocol.h"

@class IMPBusinessProfile, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableSet, NSNumber, NSString, NSURL, SCAdToLens, SCEncryptedCache, SCImageToVideoWriter, SCImpalaHighlightStoryInfo, SCImpalaStoryPlaybackInfo, SCMapStoryInfo, SCSearchStoryInfo, SCSearchStreamingLoggingInfo, SCSearchStreamingMediaInfo, SCSnapActionsConfiguration, SCSnapTime, SCSnapVideoFilterState, SCStoryMediaStateListenerAnnouncer, SOJUAudioStitch, SOJUBroadcastAttribution, SOJUSnapCreatorAttribution, SOJUStoryFrame;
@protocol SCChunk, SCLensRemoteAssetsUploadOperation;

@interface Story : EphemeralMedia <SCLensRemoteAssetsUploadOperationDelegate, SCReportStoryDataParamsProvider, SCReportStoryMetadataParamsProvider, MediaDataSource, MediaDelegate, MediaUploadDelegate, MediaImageProcessingDelegate, SCLensRemoteAssetsUploadOperationListener, SCStoryExporterItem, MediaCacheInfoDataSource, NSCopying>
{
    SCStoryMediaStateListenerAnnouncer *_mediaStateListenerAnnouncer;
    NSString *_cachedSnapIdComponent;
    SCEncryptedCache *_storyPersistentCache;
    NSString *_savedOriginalPublicationId;
    _Bool _shouldPostStoryAfterLensAssetRemoteOperation;
    _Bool _shouldPostStoryAfterMediaUploaded;
    _Bool _shouldShowToastWhenPostComplete;
    _Bool _screenshotReported;
    _Bool _saveReported;
    _Bool _insideMergedFriendStories;
    _Bool _postMaster;
    _Bool _isMyStory;
    _Bool _isMySharedStory;
    _Bool _isSharedStory;
    _Bool _isOfficialStory;
    _Bool _isPublic;
    _Bool _isGroupStory;
    _Bool _isPromotedStory;
    _Bool _isAppStory;
    _Bool _isSearchDynamicStory;
    _Bool _isCheetahStory;
    _Bool _viewed;
    _Bool _needsAuthToFetch;
    _Bool _savedByUser;
    _Bool _isDynamicAdSlot;
    _Bool _adCanFollow;
    _Bool _addToMyStory;
    _Bool _unrecoverable;
    _Bool _hasLensMetadataOnServer;
    _Bool _hasAsyncPostFailed;
    long long _postingState;
    NSDate *_expirationDate;
    NSString *_mediaKey;
    NSString *_mediaId;
    NSString *_mediaIv;
    NSString *_thumbnailIv;
    NSString *_boltMedia;
    NSString *_boltOverlay;
    unsigned long long _storyMediaStoryType;
    NSURL *_thumbnailURL;
    NSArray *_requestContexts;
    unsigned long long _mediaFormat;
    id <SCChunk> _chunk;
    NSDate *_timestamp;
    NSString *_userDisplayName;
    NSDate *_userPostedTimestamp;
    NSString *_key;
    NSString *_iv;
    NSDate *_postSuccessTimestamp;
    SCSearchStoryInfo *_searchStoryInfo;
    SCSearchStreamingMediaInfo *_streamingMediaInfo;
    SCSearchStreamingLoggingInfo *_streamingLoggingInfo;
    SCMapStoryInfo *_mapStoryInfo;
    long long _discoverStoryFeedType;
    NSString *_flushableStoryId;
    unsigned long long _screenshotToReportCount;
    unsigned long long _savesCountFriend;
    unsigned long long _savesCountOther;
    SOJUStoryFrame *_framing;
    NSString *_adUnitId;
    NSDictionary *_targetingParameters;
    NSString *_adKey;
    NSString *_adPlacementId;
    NSString *_adLineItemId;
    NSString *_adId;
    NSString *_adHeadline;
    NSString *_adBrandName;
    SCAdToLens *_adToLensModel;
    NSString *_politicalAdPayingAdvertiserName;
    NSString *_adRequestClientId;
    long long _adPosition;
    long long _brandFriendliness;
    NSArray *_ourStoriesMetadataToPostTo;
    NSNumber *_addToMyStoryPrivacyOverride;
    NSString *_sharedStoryGroupId;
    NSString *_sharedStoryDisplayName;
    NSString *_sharedStoryUserId;
    NSString *_sharedStoryAvatarId;
    NSString *_sharedStorySelfieId;
    NSString *_sharedStoryGeoLocation;
    NSArray *_appStories;
    NSString *_appStoryAppId;
    NSString *_appStoryDisplayName;
    IMPBusinessProfile *_businessProfile;
    NSArray *_businessIdsToPostTo;
    SCImpalaStoryPlaybackInfo *_businessStoryPlaybackInfo;
    SCImpalaHighlightStoryInfo *_highlightStoryInfo;
    NSArray *_groupStoryPubIdsToPostTo;
    long long _storyIndexInViewingSession;
    NSString *_submissionId;
    SOJUBroadcastAttribution *_attribution;
    SOJUAudioStitch *_audioStitch;
    NSURL *_mediaAPPURL;
    NSURL *_mediaD2SURL;
    NSDictionary *_rulefileParams;
    long long _retryCount;
    long long _remainingAutoRetryCount;
    NSString *_geofilterId;
    NSString *_lensId;
    id <SCLensRemoteAssetsUploadOperation> _lensAssetUploadOperation;
    NSString *_snapConnectClientDisplayName;
    NSString *_snapKitClientId;
    NSString *_largeThumbnailUrl;
    SOJUSnapCreatorAttribution *_repostAttribution;
    NSString *_comment;
    SCSnapVideoFilterState *_storyVideoFilterState;
    NSString *_savedUsername;
    long long _atomicMediaState;
    NSError *_lastMediaLoadError;
    NSDate *_markedAsViewedTimestamp;
    NSDate *_atomicMetadataDownloadTimestamp;
    long long _atomicBandwidthWhenDownloadMetadata;
    NSString *_thumbnailId;
    NSString *_atomicUsername;
    Story *_postMasterStory;
    SCImageToVideoWriter *_imageToVideoWriter;
    NSMutableArray *_mediaFetchCompletionBlocks;
    SCSnapTime *_snapTime;
    NSMutableSet *_siblingsCache;
    SCSnapActionsConfiguration *_actionsConfiguration;
    long long _postingDelay;
    NSDate *_expectedPostingTimestamp;
}

+ (void)_postNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)discoverFeedAdToLensToSCAdToLens:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(retain) NSDate *expectedPostingTimestamp; // @synthesize expectedPostingTimestamp=_expectedPostingTimestamp;
@property long long postingDelay; // @synthesize postingDelay=_postingDelay;
@property(retain) SCSnapActionsConfiguration *actionsConfiguration; // @synthesize actionsConfiguration=_actionsConfiguration;
@property(retain) NSMutableSet *siblingsCache; // @synthesize siblingsCache=_siblingsCache;
@property(retain) SCSnapTime *snapTime; // @synthesize snapTime=_snapTime;
@property(retain) NSMutableArray *mediaFetchCompletionBlocks; // @synthesize mediaFetchCompletionBlocks=_mediaFetchCompletionBlocks;
@property(retain) SCImageToVideoWriter *imageToVideoWriter; // @synthesize imageToVideoWriter=_imageToVideoWriter;
@property _Bool hasAsyncPostFailed; // @synthesize hasAsyncPostFailed=_hasAsyncPostFailed;
@property(retain) Story *postMasterStory; // @synthesize postMasterStory=_postMasterStory;
@property(copy) NSString *atomicUsername; // @synthesize atomicUsername=_atomicUsername;
@property(copy) NSString *thumbnailId; // @synthesize thumbnailId=_thumbnailId;
@property long long atomicBandwidthWhenDownloadMetadata; // @synthesize atomicBandwidthWhenDownloadMetadata=_atomicBandwidthWhenDownloadMetadata;
@property(retain) NSDate *atomicMetadataDownloadTimestamp; // @synthesize atomicMetadataDownloadTimestamp=_atomicMetadataDownloadTimestamp;
@property(retain) NSDate *markedAsViewedTimestamp; // @synthesize markedAsViewedTimestamp=_markedAsViewedTimestamp;
@property(retain) NSError *lastMediaLoadError; // @synthesize lastMediaLoadError=_lastMediaLoadError;
@property long long atomicMediaState; // @synthesize atomicMediaState=_atomicMediaState;
@property(copy, nonatomic) NSString *savedUsername; // @synthesize savedUsername=_savedUsername;
@property(copy, nonatomic) SCSnapVideoFilterState *storyVideoFilterState; // @synthesize storyVideoFilterState=_storyVideoFilterState;
@property(copy) NSString *comment; // @synthesize comment=_comment;
@property(copy) SOJUSnapCreatorAttribution *repostAttribution; // @synthesize repostAttribution=_repostAttribution;
@property(copy, nonatomic) NSString *largeThumbnailUrl; // @synthesize largeThumbnailUrl=_largeThumbnailUrl;
@property(copy) NSString *snapKitClientId; // @synthesize snapKitClientId=_snapKitClientId;
@property(copy) NSString *snapConnectClientDisplayName; // @synthesize snapConnectClientDisplayName=_snapConnectClientDisplayName;
@property(retain, nonatomic) id <SCLensRemoteAssetsUploadOperation> lensAssetUploadOperation; // @synthesize lensAssetUploadOperation=_lensAssetUploadOperation;
@property(nonatomic) _Bool hasLensMetadataOnServer; // @synthesize hasLensMetadataOnServer=_hasLensMetadataOnServer;
@property(copy) NSString *lensId; // @synthesize lensId=_lensId;
@property(copy) NSString *geofilterId; // @synthesize geofilterId=_geofilterId;
@property long long remainingAutoRetryCount; // @synthesize remainingAutoRetryCount=_remainingAutoRetryCount;
@property long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain) NSDictionary *rulefileParams; // @synthesize rulefileParams=_rulefileParams;
@property(retain) NSURL *mediaD2SURL; // @synthesize mediaD2SURL=_mediaD2SURL;
@property(retain) NSURL *mediaAPPURL; // @synthesize mediaAPPURL=_mediaAPPURL;
@property(copy) SOJUAudioStitch *audioStitch; // @synthesize audioStitch=_audioStitch;
@property(copy) SOJUBroadcastAttribution *attribution; // @synthesize attribution=_attribution;
@property(copy) NSString *submissionId; // @synthesize submissionId=_submissionId;
@property long long storyIndexInViewingSession; // @synthesize storyIndexInViewingSession=_storyIndexInViewingSession;
@property _Bool unrecoverable; // @synthesize unrecoverable=_unrecoverable;
@property(copy) NSArray *groupStoryPubIdsToPostTo; // @synthesize groupStoryPubIdsToPostTo=_groupStoryPubIdsToPostTo;
@property(copy) SCImpalaHighlightStoryInfo *highlightStoryInfo; // @synthesize highlightStoryInfo=_highlightStoryInfo;
@property(copy) SCImpalaStoryPlaybackInfo *businessStoryPlaybackInfo; // @synthesize businessStoryPlaybackInfo=_businessStoryPlaybackInfo;
@property(copy) NSArray *businessIdsToPostTo; // @synthesize businessIdsToPostTo=_businessIdsToPostTo;
@property(copy) IMPBusinessProfile *businessProfile; // @synthesize businessProfile=_businessProfile;
@property(copy) NSString *appStoryDisplayName; // @synthesize appStoryDisplayName=_appStoryDisplayName;
@property(copy) NSString *appStoryAppId; // @synthesize appStoryAppId=_appStoryAppId;
@property(copy) NSArray *appStories; // @synthesize appStories=_appStories;
@property(copy) NSString *sharedStoryGeoLocation; // @synthesize sharedStoryGeoLocation=_sharedStoryGeoLocation;
@property(copy) NSString *sharedStorySelfieId; // @synthesize sharedStorySelfieId=_sharedStorySelfieId;
@property(copy) NSString *sharedStoryAvatarId; // @synthesize sharedStoryAvatarId=_sharedStoryAvatarId;
@property(copy) NSString *sharedStoryUserId; // @synthesize sharedStoryUserId=_sharedStoryUserId;
@property(retain) NSString *sharedStoryDisplayName; // @synthesize sharedStoryDisplayName=_sharedStoryDisplayName;
@property(retain) NSString *sharedStoryGroupId; // @synthesize sharedStoryGroupId=_sharedStoryGroupId;
@property(retain) NSNumber *addToMyStoryPrivacyOverride; // @synthesize addToMyStoryPrivacyOverride=_addToMyStoryPrivacyOverride;
@property(retain) NSArray *ourStoriesMetadataToPostTo; // @synthesize ourStoriesMetadataToPostTo=_ourStoriesMetadataToPostTo;
@property _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
@property long long brandFriendliness; // @synthesize brandFriendliness=_brandFriendliness;
@property long long adPosition; // @synthesize adPosition=_adPosition;
@property _Bool adCanFollow; // @synthesize adCanFollow=_adCanFollow;
@property(copy) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(copy) NSString *politicalAdPayingAdvertiserName; // @synthesize politicalAdPayingAdvertiserName=_politicalAdPayingAdvertiserName;
@property(copy) SCAdToLens *adToLensModel; // @synthesize adToLensModel=_adToLensModel;
@property(copy) NSString *adBrandName; // @synthesize adBrandName=_adBrandName;
@property(copy) NSString *adHeadline; // @synthesize adHeadline=_adHeadline;
@property(copy) NSString *adId; // @synthesize adId=_adId;
@property(copy) NSString *adLineItemId; // @synthesize adLineItemId=_adLineItemId;
@property(copy) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
@property(copy) NSString *adKey; // @synthesize adKey=_adKey;
@property(retain) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(copy) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property _Bool isDynamicAdSlot; // @synthesize isDynamicAdSlot=_isDynamicAdSlot;
@property(copy) SOJUStoryFrame *framing; // @synthesize framing=_framing;
@property _Bool savedByUser; // @synthesize savedByUser=_savedByUser;
@property unsigned long long savesCountOther; // @synthesize savesCountOther=_savesCountOther;
@property unsigned long long savesCountFriend; // @synthesize savesCountFriend=_savesCountFriend;
@property unsigned long long screenshotToReportCount; // @synthesize screenshotToReportCount=_screenshotToReportCount;
@property _Bool needsAuthToFetch; // @synthesize needsAuthToFetch=_needsAuthToFetch;
@property(copy) NSString *flushableStoryId; // @synthesize flushableStoryId=_flushableStoryId;
@property _Bool viewed; // @synthesize viewed=_viewed;
@property long long discoverStoryFeedType; // @synthesize discoverStoryFeedType=_discoverStoryFeedType;
@property(retain) SCMapStoryInfo *mapStoryInfo; // @synthesize mapStoryInfo=_mapStoryInfo;
@property _Bool isCheetahStory; // @synthesize isCheetahStory=_isCheetahStory;
@property(copy) SCSearchStreamingLoggingInfo *streamingLoggingInfo; // @synthesize streamingLoggingInfo=_streamingLoggingInfo;
@property(copy) SCSearchStreamingMediaInfo *streamingMediaInfo; // @synthesize streamingMediaInfo=_streamingMediaInfo;
@property(copy) SCSearchStoryInfo *searchStoryInfo; // @synthesize searchStoryInfo=_searchStoryInfo;
@property _Bool isSearchDynamicStory; // @synthesize isSearchDynamicStory=_isSearchDynamicStory;
@property _Bool isAppStory; // @synthesize isAppStory=_isAppStory;
@property _Bool isPromotedStory; // @synthesize isPromotedStory=_isPromotedStory;
@property _Bool isGroupStory; // @synthesize isGroupStory=_isGroupStory;
@property _Bool isPublic; // @synthesize isPublic=_isPublic;
@property _Bool isOfficialStory; // @synthesize isOfficialStory=_isOfficialStory;
@property _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
@property _Bool isMySharedStory; // @synthesize isMySharedStory=_isMySharedStory;
@property _Bool isMyStory; // @synthesize isMyStory=_isMyStory;
@property(retain) NSDate *postSuccessTimestamp; // @synthesize postSuccessTimestamp=_postSuccessTimestamp;
@property(retain, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property _Bool postMaster; // @synthesize postMaster=_postMaster;
@property(nonatomic) _Bool insideMergedFriendStories; // @synthesize insideMergedFriendStories=_insideMergedFriendStories;
@property(retain) NSDate *userPostedTimestamp; // @synthesize userPostedTimestamp=_userPostedTimestamp;
@property(copy) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain) id <SCChunk> chunk; // @synthesize chunk=_chunk;
@property unsigned long long mediaFormat; // @synthesize mediaFormat=_mediaFormat;
@property _Bool saveReported; // @synthesize saveReported=_saveReported;
@property _Bool screenshotReported; // @synthesize screenshotReported=_screenshotReported;
@property(copy) NSArray *requestContexts; // @synthesize requestContexts=_requestContexts;
@property(retain) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(nonatomic) unsigned long long storyMediaStoryType; // @synthesize storyMediaStoryType=_storyMediaStoryType;
@property(retain, nonatomic) NSString *boltOverlay; // @synthesize boltOverlay=_boltOverlay;
@property(retain, nonatomic) NSString *boltMedia; // @synthesize boltMedia=_boltMedia;
@property(copy) NSString *thumbnailIv; // @synthesize thumbnailIv=_thumbnailIv;
@property(copy) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
@property(copy) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property _Bool shouldShowToastWhenPostComplete; // @synthesize shouldShowToastWhenPostComplete=_shouldShowToastWhenPostComplete;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property long long postingState; // @synthesize postingState=_postingState;
- (void).cxx_destruct;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didFailUploadingAssetWithId:(id)arg2 effectId:(id)arg3 error:(id)arg4;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didSucceedUploadingAssetWithId:(id)arg2 effectId:(id)arg3;
- (void)lensRemoteAssetsUploadOperationDidFail:(id)arg1 withError:(id)arg2;
- (void)lensRemoteAssetsUploadOperationDidSucceed:(id)arg1;
- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
- (void)_videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (void)removeMediaStateListener:(id)arg1;
- (void)addMediaStateListener:(id)arg1;
- (id)mediaStateListenerAnnouncer;
- (void)checkAndSetStreamingMediaInfo:(id)arg1;
- (void)updatePostingState:(long long)arg1;
- (void)updateMediaState:(long long)arg1 error:(id)arg2;
@property long long mediaState;
- (void)updateStoryNotesFromStory:(id)arg1;
- (unsigned long long)totalSaveCount;
- (unsigned long long)totalCaptureCount;
- (struct CGRect)spectaclesExportSize;
- (_Bool)isSpectacles60fps;
- (_Bool)isSpectaclesImage;
- (_Bool)isSpectaclesMedia;
- (_Bool)isLagunaMedia;
- (_Bool)isHD;
- (id)_encryptedStoryDatastore;
@property(readonly, copy) NSString *description;
- (id)getServerStoryId;
- (_Bool)hasAttributionIdForUserId:(id)arg1;
- (_Bool)isMyProfileStory;
- (_Bool)hasOfficialStoryAttribution;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)mediaLoadError;
- (id)flushableViewedJsonDictionary;
- (id)readReceiptWithMasterSibling:(id)arg1;
- (id)readReceipt;
- (void)_removeMediaAndThumbnailFromCache;
- (long long)uniqueCellDataIdWithSection:(long long)arg1;
- (void)markAsViewedForViewingType:(long long)arg1;
- (_Bool)isCountingDownForViewingType:(long long)arg1;
- (double)timeLeftForCounterForViewingType:(long long)arg1 isFirstSnap:(_Bool)arg2;
- (void)_setNotViewingFriendStoryWithViewingType:(long long)arg1;
- (void)addSibling:(id)arg1;
- (void)prepareForMergedStories;
- (id)mergedSiblings;
- (void)handleFailedStoryAfterUploadSuccess;
- (void)removePersistedFailedStoryData;
- (void)_loadPersistedFailedStoryData;
- (void)_loadThumbnailDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadThumbnailDataIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeSnapMediaFromDiskForCacheKey:(id)arg1;
- (void)_saveSnapMediaToCoordinatorWithData:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveThumbnailDataToThumbnailCoordinatorIfPossible;
- (void)_saveStoryDataToPersistentStoreWithData:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveDataToUploadToCacheAndPersistentStorage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)uploadSuccessUserDefaultsKey;
- (void)_saveMediaToCacheAndPersistentStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)postSaveWithSuccess:(_Bool)arg1;
- (void)didFinishSavingSnapToAlbumWithError:(id)arg1 isVideo:(_Bool)arg2 videoDuration:(double)arg3;
- (void)exportToVideoURLCompletion:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2 spectaclesExportSettings:(id)arg3;
- (double)_durationForVideoExport;
- (void)saveAndPostStory:(id)arg1 postToMyStory:(_Bool)arg2 additionalText:(id)arg3 shouldShowToast:(_Bool)arg4;
- (void)saveStory:(id)arg1;
- (void)didDeleteStory;
- (void)deleteStory;
- (void)_updatePostingStateWhileUploading:(long long)arg1;
- (void)invalidateLensAssetUploadOperation;
- (void)_uploadLensAssetUploadOperation;
- (void)_updateWithProgress:(id)arg1;
- (id)_uploadDataForStoryPost;
- (void)_uploadStoryMetadataWithDataToUpload:(id)arg1;
- (void)_uploadStoryMetadataOnly;
- (void)_postStoryWithDataToUpload:(id)arg1 saveThumbnailCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_shouldContinueOneStepPostWithDataToUpload:(id)arg1;
- (void)_tryToPostStoryWithDataToUpload:(id)arg1;
- (_Bool)_shouldPostStoryTogetherWithMedia;
- (void)uploadStoryWithMediaUploaded;
- (void)uploadStoryWithMediaNotReady;
- (void)_startPostingStory;
- (_Bool)_shouldLetPostMasterUploadStory;
- (void)uploadStory;
- (void)uploadMedia;
- (void)_removeUnrecoverableStory;
- (void)resetDependentStoriesState;
- (CDUnknownBlockType)uploadFailureBlock;
- (CDUnknownBlockType)uploadSuccessBlock;
- (CDUnknownBlockType)_uploadProgressBlock;
- (id)taggedUsernames;
- (id)_uploadParametersWithData:(_Bool)arg1;
- (id)postedTimestamp;
- (void)processFailedStoryUserInitiated:(_Bool)arg1;
- (void)_setupAppStory:(id)arg1 username:(id)arg2;
- (void)_setupWithCustomStory:(id)arg1;
- (void)_setupSharedStoryWithMetadata:(id)arg1;
- (void)verifyMediaState;
- (void)insertIntoList;
- (void)_uploadAndPostStory;
- (void)uploadAndPostStory;
- (void)fetchStoryMediaUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_imageProcessingDidSucceedForMedia:(id)arg1;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (_Bool)shouldPostFailToSendNotification;
- (id)encryptedMediaDataToUpload:(id)arg1;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (_Bool)isVideoProgressiveDownloadEnabled;
- (_Bool)isVideoStreaming;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)didStartDownload:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1 isFromCache:(_Bool)arg2;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)handleMediaNotFoundOrBadRequestForMedia:(id)arg1 error:(id)arg2;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (void)fetchMediaDidCancelForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1 error:(id)arg2;
- (void)fetchMediaIsLoadingForMedia:(id)arg1 userInitiated:(_Bool)arg2;
- (void)fetchMediaResponseHandlerCustom:(id)arg1 request:(id)arg2 response:(id)arg3 error:(id)arg4;
- (_Bool)isPrivateReposted;
- (_Bool)isReposted;
- (_Bool)shouldShowViewersList;
- (_Bool)isCreatedByCurrentUser;
- (_Bool)isFromProfileSavedChatMedia;
- (_Bool)isFromChat;
- (_Bool)isFromCameraRoll;
- (_Bool)isFromGallery;
- (unsigned long long)trackingExpirationInDaysForMedia:(id)arg1;
- (id)trackingMediaTypeForMedia:(id)arg1;
- (id)storyType;
- (id)trackingTypeForMedia:(id)arg1;
- (id)trackingIdForMedia:(id)arg1;
- (id)trackingId;
- (_Bool)hasNoMedia;
- (long long)requestFallbackPriority;
- (long long)requestPriorityUserInitiated:(_Bool)arg1;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (_Bool)isMediaAlreadyEncrypted:(id)arg1;
- (_Bool)shouldEncryptOnDiskForMedia:(id)arg1;
- (id)encryptionIvForMedia:(id)arg1;
- (id)encryptionKeyForMedia:(id)arg1;
- (id)expirationForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)endpointParamsForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (id)URLForMedia:(id)arg1;
- (_Bool)usingD2SForMedia:(id)arg1;
- (void)updateMediaD2SURL:(id)arg1;
@property(retain, nonatomic) NSURL *mediaURL;
- (id)mediaIdForMedia:(id)arg1;
- (void)reportSaveIfNecessary;
- (void)reportScreenshotIfNecessary;
- (void)_logSearchMediaFetchFromCache;
- (id)_generateRulefileStoryEncodingInput;
- (id)persistingFailuresURL;
- (_Bool)timeToSendHasExpired;
- (_Bool)shouldReportSave;
- (_Bool)shouldReportScreenshot;
- (_Bool)isLensAssetUploadOperationComplete;
- (_Bool)isRecentlyReported;
- (_Bool)isExpired;
- (_Bool)hasUploaded;
- (_Bool)isSendingOrHasFailed;
- (_Bool)isMediaProcessingOrFailedToProcess;
- (_Bool)isMediaProcessing;
- (_Bool)hasMediaProcessingFailed;
@property(readonly, nonatomic) _Bool isBusinessStory;
@property(readonly) _Bool isMapStory;
- (_Bool)isShareable;
- (_Bool)isDeletable;
- (_Bool)isSaveable;
- (_Bool)isReportable;
- (_Bool)shouldAutoRetryToPost;
- (_Bool)isPostingOrHasPermanentlyFailed;
- (_Bool)isPostingOrHasFailed;
- (_Bool)hasUploadPermanentlyFailed;
- (_Bool)hasUploadFailed;
- (_Bool)isProcessingOrUploading;
- (id)uniqueConsistentId;
- (long long)storyTypeEnum;
- (id)storyId;
@property(readonly, nonatomic) NSString *clientIdSnapComponent;
- (void)setClientId:(id)arg1;
- (id)cacheMediaId;
- (void)updateWithIncomingMyStory:(id)arg1;
- (void)updateWithStory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didDecodeObject;
- (void)_markAndRemoveUnrecoverableStory;
- (void)_storyDidDecodeObject;
- (void)willEncodeObject;
- (void)_storyWillEncodeObject;
@property(readonly) NSString *publicationId;
- (_Bool)isInsidePrivateCustomStory;
- (double)percentTimeLeft;
- (id)posterUsername;
@property(copy) NSString *username;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initMyStoryWithSOJUPartialStoryLogbook:(id)arg1;
- (id)initMyStoryWithPostResponseDict:(id)arg1;
- (id)initMyStoryFromStory:(id)arg1;
- (id)initMyGroupStoryWithSOJUStoryLogbook:(id)arg1;
- (id)initGroupStoryWithSoju:(id)arg1;
- (id)initFriendStoryWithSoju:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;
- (void)_updateLoadedSectionsWithSections:(id)arg1;
- (id)initWithCheetahPromotedSnap:(id)arg1;
- (id)initWithCheetahMomentStory:(id)arg1 storyId:(id)arg2;
- (id)initWithSnapDoc:(id)arg1 storyDocId:(id)arg2 tile:(id)arg3;
- (long long)myStoryType;
- (long long)myStorySpecificType;
- (long long)storySpecificType;
- (id)loggingParamsForViewingType:(long long)arg1;
- (id)toStoryElement;
- (id)initWithStoryElement:(id)arg1 username:(id)arg2 manifestDisplayName:(id)arg3 enableStreaming:(_Bool)arg4 elementType:(unsigned long long)arg5;
- (id)initWithStorySnap:(id)arg1 storyId:(id)arg2 reportingInfo:(id)arg3 userId:(id)arg4 displayName:(id)arg5 username:(id)arg6 avatarId:(id)arg7 selfieId:(id)arg8 storyType:(long long)arg9 isSearchDynamicStory:(_Bool)arg10 isCheetahStory:(_Bool)arg11 discoverStoryFeedType:(long long)arg12 enableBoltMedia:(_Bool)arg13;
- (id)initWithStorySnap:(id)arg1 storyId:(id)arg2 reportingInfo:(id)arg3 userId:(id)arg4 displayName:(id)arg5 username:(id)arg6 avatarId:(id)arg7 selfieId:(id)arg8 storyType:(long long)arg9;
- (id)initWithAppStorySnap:(id)arg1 username:(id)arg2;
- (id)fileManagerForUploadOperation:(id)arg1;
- (id)assetsUploaderForUploadOperation:(id)arg1;
- (unsigned long long)baseLayerType;
- (id)playlistItemFeatureType;
- (_Bool)isBrandSnapStory;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)storyDataParamsWithHandler:(CDUnknownBlockType)arg1;
- (id)lensIdentifier;
- (id)attachmentUrlString;
- (id)reportedUsername;
- (id)storySnapId;
- (id)storyMetadataParams;
- (unsigned long long)reportSnapSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


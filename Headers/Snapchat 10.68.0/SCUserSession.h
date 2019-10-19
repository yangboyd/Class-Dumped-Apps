//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatStickerImageFetcherProvider-Protocol.h"
#import "SCComposerFriendsFeedCurrentUserInfoProviding-Protocol.h"
#import "SCCustomStickerImageFetcherProvider-Protocol.h"
#import "SCScannableActionAPIProvider-Protocol.h"

@class NSMutableDictionary, NSString, SCApiGatewayGrpcRequester, SCBoltUploadManager, SCBoltUrlResolver, SCCache, SCCaptionStyleResourceProvider, SCCognacAppActiveCardEligibility, SCCognacWebProxyCache, SCCognacWebProxyDownloader, SCCognacWebProxyLoader, SCCognacWebProxyPreloader, SCCustomStickerManager, SCDataObjectContext, SCDataSaverModePromptCoordinator, SCDynamicCaptionFetcher, SCEagleModelManager, SCGalleryBackupNotificationHelper, SCGalleryDataMutator, SCGalleryEncryptedDatabase, SCGalleryFaceCluster, SCGalleryFaceInfoIndexer, SCGalleryFaceManager, SCGalleryFaceRecognizer, SCGalleryFilePathManager, SCGalleryNotificationProcessor, SCGalleryOnboardingManager, SCGalleryPrivateGalleryManager, SCGallerySavingLogger, SCGallerySearch, SCGallerySearchDataSynchronizer, SCGallerySearchIndexer, SCGallerySearchQueryResultsCollector, SCGallerySearchTagUploader, SCGalleryStorySaver, SCGallerySuggestedQueryUpdater, SCGalleryTestDataCollector, SCGalleryThumbnailDelayDebugManager, SCGalleryUserDefaultsManager, SCGalleryUserSettingsManager, SCGalleryVisualConceptThresholdUpdater, SCImpalaBusinessProfileManager, SCImpalaService, SCImpalaWatchedStateManager, SCKeyService, SCMediaPackageBasedOrchestrator, SCMediaPackageManager, SCMediaPackagePreviewAdapter, SCMemoriesSavingSnapNotificationManager, SCMemoriesSearchDatabase, SCMergedGalleryDataSource, SCOnDemandGeofilterSession, SCPreviewGallerySavedMediaGenerator, SCSendToRankingServerMetadataManager, SCShazamConfigurationManager, SCShazamKeyValueCache, SCShazamRecogniseManager, SCSnapcodeManagerLogger, SCSnaptracksServices, SCStickerRankingManager, SCStickerVisualTagExpansionRuleUpdater, SCUnlockablesOpportunityRequestIdController, SCUnlockedStickerManager, SCUploadHostPinger, SCUploadMediaDataManager, SCUploadMediaManager;
@protocol OS_dispatch_semaphore, SCCustomStickerOwner, SCGalleryLogging, SCGalleryProfile, SCGroupInviteProfileActionHandler, SCGroupInviteServiceChatIntegration, SCLensChallengesScheduleProtocol, SCNetworker, SCUploadURLCaching;

@interface SCUserSession : NSObject <SCCustomStickerImageFetcherProvider, SCScannableActionAPIProvider, SCComposerFriendsFeedCurrentUserInfoProviding, SCChatStickerImageFetcherProvider>
{
    NSMutableDictionary *_userSessionScopedObjects;
    _Bool _invalidated;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSString *_userId;
    NSString *_username;
    NSString *_authToken;
    NSString *_lagunaId;
    NSString *_userEmail;
}

+ (id)currentSession_DEPRECATED_DO_NOT_USE;
+ (id)cacheURL;
+ (id)userScopedApplicationSupportPathRootForUser:(id)arg1;
+ (id)userScopedDocumentPathRootForUser:(id)arg1;
+ (id)userScopedCachePathRootForUser:(id)arg1;
+ (void)_cleanUpOutOfScopeDirectoriesIn:(id)arg1 forUserIdHash:(id)arg2 trash:(id)arg3;
+ (void)cleanUpOutOfScopeDocumentFilesExceptForUser:(id)arg1;
+ (id)userSessionWithLoginResponse:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(readonly, copy, nonatomic) NSString *lagunaId; // @synthesize lagunaId=_lagunaId;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isInvalidated;
- (void)invalidate;
- (id)objectForKey:(id)arg1 initializer:(CDUnknownBlockType)arg2;
- (id)initWithUserId:(id)arg1 username:(id)arg2 authToken:(id)arg3 lagunaId:(id)arg4 userEmail:(id)arg5;
- (id)dynamicAdMediaManager;
- (id)adMediaCoordinator;
- (id)adMediaFetcher;
- (id)userStoriesAdDataSource;
- (id)arcadiaMetadataStoreWithAnnouncerPerformer:(id)arg1;
- (id)arcadiaDataProvider;
- (id)bitmojiStickerManager;
- (id)bitmojiAvatarDataProvider;
- (id)bitmojiFashionPresenter;
- (id)bitmojiSettingsPresenter;
- (id)bitmojiBuilderManager;
- (id)bitmojiBuilderService;
- (id)bitmojiService;
- (id)cachingMediaManager;
- (id)mediaSendTaskManager;
- (id)notificationOptInRequestManager;
- (id)storyTooltipManager;
- (id)cognacAdDataSource;
- (id)cognacNotificationManager;
- (id)actionHandler;
@property(readonly, nonatomic) SCCognacWebProxyPreloader *cognacWebProxyPreloader;
@property(readonly, nonatomic) SCCognacWebProxyLoader *cognacWebProxyLoader;
@property(readonly, nonatomic) SCCognacWebProxyDownloader *cognacWebProxyDownloader;
@property(readonly, nonatomic) SCCognacWebProxyCache *cognacWebProxyCache;
- (id)commerceScopedOptionsDataCoordinator;
- (id)commerceDependencyManager;
- (id)commerceCartManager;
- (id)commerceImageManager;
- (id)commerceManager;
- (id)commerceSettingsManager;
@property(readonly, nonatomic) id <SCGroupInviteProfileActionHandler> groupInviteProfileActionHandler;
@property(readonly, nonatomic) id <SCGroupInviteServiceChatIntegration> groupInviteServiceChatIntegration;
- (id)groupInviteVenueSearchProvider;
- (id)contextCTAPreloader;
- (id)contextV2UserInfoProvider;
- (void)setSubtitlesSettings:(unsigned long long)arg1;
- (unsigned long long)subtitlesSettings;
- (id)subtitlesStateProvider;
- (id)discoverFeedCollection;
- (id)discoverFeedDataStore;
- (id)cheetahStoryFetcher;
- (id)discoverFeedEventsController;
- (id)discoverFeedRanker;
- (id)friendmojiRegistry;
- (id)friendmojiPresenter;
- (id)lowresMediaReuploader;
- (id)cloudFS;
- (id)cloudSync;
@property(readonly, nonatomic) id <SCNetworker> networker;
- (id)mediaDownload;
- (id)memoriesLostDataRestorer;
@property(readonly, nonatomic) SCGalleryDataMutator *galleryDataMutator;
- (id)highlightContentDataSource;
- (id)lagunaContentDataSource;
@property(readonly, nonatomic) SCMergedGalleryDataSource *mergedGalleryDataSource;
- (id)encryptedContentManager;
@property(readonly, copy, nonatomic) SCDataObjectContext *galleryDataObjectContext;
@property(readonly, nonatomic) SCGalleryEncryptedDatabase *galleryEncryptedDatabase;
@property(readonly, nonatomic) SCGalleryFilePathManager *filePathManager;
@property(readonly, nonatomic) SCMemoriesSavingSnapNotificationManager *savingSnapNotificationManager;
@property(readonly, nonatomic) SCGalleryThumbnailDelayDebugManager *thumbnailDebugManager;
@property(readonly, nonatomic) SCGalleryTestDataCollector *galleryTestDataCollector;
@property(readonly, nonatomic) id <SCGalleryLogging> galleryLogger;
@property(readonly, nonatomic) SCGalleryOnboardingManager *galleryOnboardingManager;
@property(readonly, nonatomic) SCGalleryFaceManager *galleryFaceManager;
@property(readonly, nonatomic) SCGalleryPrivateGalleryManager *privateGalleryManager;
@property(readonly, nonatomic) SCKeyService *keyService;
@property(readonly, nonatomic) SCGalleryFaceCluster *galleryFaceCluster;
@property(readonly, nonatomic) SCGalleryFaceInfoIndexer *galleryFaceInfoIndexer;
@property(readonly, nonatomic) SCGalleryFaceRecognizer *galleryFaceRecognizer;
@property(readonly, nonatomic) SCGallerySearchDataSynchronizer *gallerySearchDataSynchronizer;
@property(readonly, nonatomic) SCGallerySearchIndexer *gallerySearchIndexer;
@property(readonly, nonatomic) SCGallerySearchTagUploader *gallerySearchTagUploader;
@property(readonly, nonatomic) SCGallerySearchQueryResultsCollector *searchQueryResultsCollector;
@property(readonly, nonatomic) SCGallerySuggestedQueryUpdater *suggestedQueryUpdater;
@property(readonly, nonatomic) SCGallerySearch *gallerySearch;
@property(readonly, nonatomic) SCGalleryVisualConceptThresholdUpdater *visualConceptUpdater;
@property(readonly, nonatomic) SCGalleryUserDefaultsManager *galleryUserDefaultsManager;
- (id)galleryStreamingManager;
@property(readonly, nonatomic) SCGalleryBackupNotificationHelper *galleryBackupNotificationHelper;
@property(readonly, nonatomic) SCGalleryNotificationProcessor *galleryNotificationProcessor;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile;
- (id)lensesTooltipManager;
- (id)viewPageOnboardingTooltipManager;
- (id)auxiliaryContentPreloader;
- (id)lagunaNotificationHandler;
- (id)statusCoordinator;
- (id)lagunaUsageRecorder;
- (id)lagunaHomeWifiManager;
- (id)lagunaGalleryWifiController;
- (id)lagunaFirmwareManager;
- (id)spectaclesManager;
- (id)lagunaModule;
- (_Bool)isLagunaInitialized;
- (id)lensDownloadableContent;
- (id)lensExplorerItemCreator;
@property(readonly, nonatomic) id <SCLensChallengesScheduleProtocol> lensChallengesSchedule;
- (id)_cameraPresenterWithLoggingConfiguration:(id)arg1;
- (id)searchCameraPresenter;
- (id)contextCardCameraPresenter;
- (id)profileCameraPresenterWithRoleType:(long long)arg1 snapSource:(long long)arg2;
- (id)lensFeedLiveLensPreviewCameraPresenter;
- (id)lensChallengesCameraPresenter;
- (id)lensInPreviewLogger;
- (id)lensLogger;
- (id)lensLoggerForUserSession:(id)arg1;
- (id)lensRemoteAssetLogger;
- (id)lensCoreAnalyticsLoggerWithAnalyticsComponent:(id)arg1 metricsComponent:(id)arg2;
- (id)scheduledLensesMetadataStoreWithLensUserProvider:(id)arg1;
- (id)unifiedCameraObjectDataFetcher;
- (id)ucoDependencyFactory;
- (id)ucoLensByIdRetrievable;
- (id)ucoViewModelGenerator;
- (id)bitmoji3DMetadataStore;
- (id)lensBitmojiListManager;
- (id)lensDataFetcher;
- (id)lensDataPrefetcher;
- (id)lensDownloadTracker;
- (id)lensRemoteAssetsBlobUploader;
- (id)lensRemoteAssetsUploadDefaultFileManager;
- (id)lensRemoteAssetsUploadWithGalleryFileManager;
- (id)allTimeHitsDataProvider;
- (id)allTimeHitsTemplateDataStore;
- (id)onDemandLensDataStore;
- (id)scheduledLensesDataStore;
- (id)unlockableDataStore;
- (id)demoLensMetadataStore;
- (id)lensCacheClearTracker;
- (id)inMemoryLensAssetsDataProvider;
- (id)lensPreferences;
- (id)lensUsageTrackerNotifier;
- (id)unlockableDataStoreFilterFactory;
- (id)replyToSnapLayerLensDataProvider;
- (id)replyOnStoryLayerLensDataProvider;
- (id)locationServicesDataStore;
- (id)locationShareWithFriendControllerData;
- (id)locationSharingNotificationController;
- (id)mapTapToPlayResponderProvider;
- (id)mapFriendFinderDataProvider;
- (id)checkInOptionFetcher;
- (id)locationSharingPreferencesProvider;
- (id)locationSharingPreferencesMutator;
- (id)locationSharingPreferences;
- (id)mapPersonLocationsProvider;
- (id)mapBasePersonLocationsProvider;
- (id)mapBitmojiAvatarGenerator;
- (id)mapInstanceProvider;
- (id)mapNotificationPresenter;
- (id)mapPeopleFriendsProvider;
- (id)mapPeopleGroupsProvider;
- (id)mapSnapshotProviderForStyle:(long long)arg1;
- (id)mapStatusStore;
- (id)shakeToReportPresenter;
@property(readonly, nonatomic) SCMediaPackageBasedOrchestrator *mediaPackageBasedOrchestrator;
@property(readonly, nonatomic) SCMediaPackagePreviewAdapter *mediaPackagePreviewAdapter;
@property(readonly, nonatomic) SCUploadMediaDataManager *uploadMediaDataManager;
@property(readonly, nonatomic) SCUploadMediaManager *uploadMediaManager;
@property(readonly, nonatomic) SCOnDemandGeofilterSession *odgSession;
- (id)imageDownloader;
@property(readonly, nonatomic) SCDataSaverModePromptCoordinator *dataSaverModePromptCoordinator;
- (id)customStickerImageFetcher;
@property(readonly, nonatomic) SCCustomStickerManager *customStickerManager;
@property(readonly, copy, nonatomic) id <SCCustomStickerOwner> customStickerOwner;
@property(readonly, nonatomic) SCPreviewGallerySavedMediaGenerator *previewGallerySavedMediaGenerator;
- (id)scopedProcessorLoader;
- (id)scannablesAPI;
- (id)safeBrowsingAPI;
- (id)snapcodeManager;
- (id)searchStoryProvider;
- (id)searchOperaDebugInfoProvider;
- (id)searchStoryDebugInfoProvider;
- (id)searchEventLogger;
- (id)searchInteractionsTracker;
- (id)searchLogger;
- (id)searchUserSearcher;
- (id)publisherIconImageDownloader;
- (id)searchStreamingCompositeDownloader;
- (id)searchVideoDownloader;
- (id)searchFriendProvider;
- (id)fideliusChatV3Unwrapper;
@property(readonly, nonatomic) SCSnapcodeManagerLogger *snapcodeManagerLogger;
- (id)scanHistoryStore;
- (id)snapcodeDataStore;
- (id)snapcodeManagerAPI;
- (id)clearCacheManager;
@property(readonly, nonatomic) SCShazamRecogniseManager *shazamRecogniseManager;
- (id)giphyTrendingManager;
- (id)chatStickerImageFetcher;
- (id)chatStickerManager;
@property(readonly, nonatomic) SCUnlockedStickerManager *unlockedStickerManager;
@property(readonly, nonatomic) SCStickerRankingManager *stickerRankingManager;
- (id)stickerTagFuzzySearch;
@property(readonly, nonatomic) SCGalleryStorySaver *galleryStorySaver;
- (id)talkRPC;
- (id)talkIdentityServices;
- (id)talkAudioServices;
- (id)talkManager;
- (id)talkV3Manager;
- (id)talkHeadlessSessionController;
- (id)gtqNetworkController;
- (id)gtqDataSource;
- (id)gtqUnlockablesController;
- (id)unlockableSensitivityController;
- (id)unlockablesController;
- (id)unlockablesLoader;
@property(readonly, nonatomic) SCUnlockablesOpportunityRequestIdController *opportunityRequestIdController;
- (id)unlockablesCommonDataStore;
@property(readonly, nonatomic) SCEagleModelManager *eagleModelManager;
- (id)eagleController;
- (id)unmanaged_documentDirectory:(id)arg1 error:(id *)arg2;
- (id)unmanaged_cacheDirectory:(id)arg1 error:(id *)arg2;
- (id)documentDirectory:(id)arg1 error:(id *)arg2;
- (id)cacheDirectory:(id)arg1 error:(id *)arg2;
- (id)userPreferences;
- (id)experimentManager;
- (id)requestManager;
- (id)adPreferencesService;
- (id)authenticatedCaptchaService;
- (id)authenticatedPasswordService;
- (id)authenticatedPhoneService;
- (id)authenticatedTwoFAService;
- (id)authenticatedValidateRegistrationService;
- (id)emailService;
- (id)emojiBrushService;
- (id)lagunaService;
- (id)lifestyleCategoriesService;
- (id)reauthenticationService;
- (id)settingsService;
- (id)usernameChangeService;
- (id)updatesResponseAnnouncer;
- (id)temporaryDatastoreNamed:(id)arg1 type:(unsigned long long)arg2 defaultDaysForExpiry:(unsigned long long)arg3;
- (id)cache:(id)arg1 metricsName:(id)arg2 diskSizeLimitConfig:(id)arg3 useMemoryCache:(_Bool)arg4 skipEviction:(_Bool)arg5;
- (id)cache:(id)arg1 metricsName:(id)arg2 diskSizeLimitConfig:(id)arg3 useMemoryCache:(_Bool)arg4;
- (id)cache:(id)arg1 metricsName:(id)arg2 diskSizeLimitConfig:(id)arg3;
- (id)cache:(id)arg1 diskSizeLimitConfig:(id)arg2 useMemoryCache:(_Bool)arg3;
- (id)cache:(id)arg1 diskSizeLimitConfig:(id)arg2;
- (id)cacheWithNoEviction:(id)arg1;
- (id)fideliusManager;
- (id)cognacDataStorage;
- (id)featureSettingsManager;
- (id)snapTokenManager;
- (id)loginRegistrationStatus;
- (id)streamingMediaManager;
- (id)searchSnapInfoCollector;
- (id)cognacAssetCache;
- (id)downloadableContentManager;
- (id)previewContextImageClassifier;
@property(readonly, nonatomic) SCStickerVisualTagExpansionRuleUpdater *visualTagExpansionRuleUpdater;
- (id)cheetahFeedASTProvider;
- (id)mapFSNService;
- (id)mapServerService;
- (id)mapSnapTokenService;
- (id)mapboxStyleLoader;
- (id)mapboxStyleLoaderStyleProviderForMapStyle:(int)arg1;
- (id)mapUserPreferences;
- (id)streamingLocationService;
- (id)securityTokenUpdater;
- (id)groupManagerAPI;
@property(readonly, nonatomic) SCApiGatewayGrpcRequester *gatewayGrpcRequester;
@property(readonly, nonatomic) SCBoltUploadManager *uploadManager;
@property(readonly, nonatomic) SCSendToRankingServerMetadataManager *sendToRankingServerMetadataManager;
@property(readonly, nonatomic) SCCache *impalaCache;
@property(readonly, nonatomic) SCImpalaService *impalaService;
@property(readonly, nonatomic) SCImpalaWatchedStateManager *showsWatchedStateManager;
@property(readonly, nonatomic) SCImpalaBusinessProfileManager *businessProfileManager;
- (id)impalaPreferences;
- (void)ensureNativeModuleFactoriesAreRegistered;
@property(readonly, nonatomic) SCDynamicCaptionFetcher *dynamicCaptionFetcher;
@property(readonly, nonatomic) SCCaptionStyleResourceProvider *captionStyleResourceProvider;
@property(readonly, nonatomic) SCMemoriesSearchDatabase *memoriesSearchDatabase;
- (id)geoFilterURLDataFetcher;
- (id)spectaclesOAuth2;
@property(readonly, nonatomic) SCGalleryUserSettingsManager *galleryUserSettingsManager;
@property(readonly, nonatomic) SCBoltUrlResolver *boltUrlResolver;
@property(readonly, nonatomic) SCGallerySavingLogger *gallerySavingLogger;
- (id)lensUserSessionLifeCycleNotifier;
@property(readonly, nonatomic) SCShazamKeyValueCache *shazamKeyValueCache;
@property(readonly, nonatomic) SCShazamConfigurationManager *shazamConfigurationManager;
@property(readonly, nonatomic) SCSnaptracksServices *snaptracksServices;
- (id)reverseAudioCache;
- (id)discoverFeedDebugInfoDataProvider;
- (id)cheetahStoriesInteractionHistoryManager;
- (id)cheetahStoriesTapHistoryManager;
- (id)cognacExternalUserProfileRepository;
- (id)cognacServiceClient;
- (id)cognacServiceCoordinator;
- (id)cognacInviteSoundServices;
@property(readonly, nonatomic) SCCognacAppActiveCardEligibility *cognacAppActiveCardEligibility;
- (id)networkingUserProfileLoader;
@property(readonly, nonatomic) SCUploadHostPinger *uploadHostPinger;
@property(readonly, nonatomic) id <SCUploadURLCaching> uploadURLCache;
- (id)groupInviteService;
- (id)contextV2Manager;
- (id)mapSearchCacheManager;
- (id)mapGameStateDataStore;
- (id)mapboxEvents;
- (void)ensureMapComposerNativeModuleFactoriesAreRegistered;
@property(readonly, nonatomic) SCMediaPackageManager *mediaPackageManager;
- (id)rankingAppManager;
- (id)engagementManager;
- (id)stickerRankingAppManager;
- (id)ddmlRequestManager;
- (id)ddmlTokenManager;
- (id)phishyURLAppManager;
- (id)discoverFeedSessionAdRuleTracker;
- (id)adLensCarouselInteractionHistoryTracker;
- (id)adReportInteractionHistoryTracker;
- (id)adProvider;
- (id)weatherService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


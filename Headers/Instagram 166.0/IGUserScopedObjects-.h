//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGUserScopedObjects.h>

@class FBInAppPurchaseCache, FBInAppPurchasePaymentManager, IGAREffectBadgeController, IGARLinkModelManager, IGAdsPaymentsRiskAppealState, IGAppRatingHandler, IGAppStoreManager, IGAsyncTask, IGAutoupdaterReactService, IGAvatarEffectManager, IGBrandedContentAdAccessRequestManager, IGBrowserHotInstanceController, IGBugReportUploader, IGChannelSeenStateStore, IGCoPresenceManager, IGCommentEmojiProvider, IGContactPointManager, IGContinuousContactUploadSession, IGDeadFileJanitor, IGDemoVideoUploader, IGDirectCacheTrimmingService, IGDirectMsysMessagingMailbox, IGDirectPendingInboxSubscriptionService, IGDirectQuickReplyService, IGDirectRecentStickerService, IGDirectUserBlockAlertService, IGDirectVisualMessageActivityNetworker, IGDirectVisualMessagePlaybackTracker, IGDirectVisualMessagePreloadService, IGDirectVisualMessageReplayService, IGDirectVisualMessageReportService, IGDirectVisualMessageViewerSession, IGDirectVisualMessageViewerSessionPlaybackTracker, IGExplorePrefetchManager, IGExploreViewControllerConfig, IGFBFilteredImageGenerator, IGFavoritesNotificationController, IGFeatureFetchRealtimeManager, IGInAppBadgeManager, IGInAppPurchaseDelegate, IGLeadGenContextRegistry, IGLivePresenceService, IGLiveQuestionsManager, IGMinimizedViewerPresenter, IGMonetizationEligibilityStatusRequestSender, IGMonetizationProductInsightsRequestSender, IGMonetizationProductOnboardingRequestSender, IGMwsRealtimeTopicHandlingService, IGNetworkingBandwidthEstimateLogger, IGNetworkingSessionThroughputLogger, IGPictureInPictureManager, IGPromoteBottomNotificationBar, IGPromoteFlowPathManager, IGQPAppConfiguration, IGRTCKragle, IGRecentUserStore, IGSavedMediaCollectionsCacheController, IGShoppingActivityDataController, IGShoppingCartBadgingService, IGShoppingCartDataController, IGShoppingDestinationMenuDataController, IGShoppingHomeSurveyController, IGShoppingHomeTabSurveyController, IGShoppingMiniShopSurveyController, IGShoppingObjectsCache, IGShoppingProductHiddenDataController, IGSlideshowNUXManager, IGStoriesInteractionManager, IGStoryInlineStateManager, IGStoryReelLoadingErrorLogger, IGSuggestedUsersManager, IGSundialSeenStateManager, IGSundialSurveySeenStateStore, IGTVBouncyNuxSeenStateStore, IGTVContentGatingImpressionTracker, IGTVDraftsManager, IGTVGridItemImpressionTracker, IGTVGuideImpressionTracker, IGTVHScrollImpressionTracker, IGTVInsightsManager, IGTVVideoImpressionTracker, IGTimeSpentManager, IGUnlockedStickerService, IGUserListStore, IGVideoCallStartupHelper, _TtC13IGTVAppRating22IGTVAppRatingRequester;
@protocol IGAccountLinkingManaging, IGAdsPaymentsRiskAppealAnnouncer, IGContactPermissionAnnouncer, IGContentWarningProgressManagerAnnouncer, IGDirectQuickReplyCreationAnnouncer, IGDirectToastAnnouncer, IGFXIMManagerAnnouncer, IGGDPRConsentAnnouncer, IGGuideChangeAnnouncer, IGInAppBadgeAnnouncer, IGPurchaseExperienceAnnouncer, IGSaveCoordinating, IGSharedShoppingHistorySettingsAnnouncer, IGShoppingDestinationPrefetchAnnouncer, IGTVCaptionsRemovalAnnouncer, IGUsageInsightsAnnouncer;

@interface IGUserScopedObjects ()
@property(nonatomic, readonly) _TtC13IGTVAppRating22IGTVAppRatingRequester *igtvAppRatingRequester;
@property(readonly, nonatomic) IGAutoupdaterReactService *autoupdaterReactService;
@property(readonly, nonatomic) IGRTCKragle *kragle;
@property(readonly, nonatomic) IGSundialSeenStateManager *sundialSeenStateManager;
@property(readonly, nonatomic) IGSundialSurveySeenStateStore *sundialSurveySeenStateStore;
@property(readonly, nonatomic) IGExplorePrefetchManager *explorePrefetchManager;
@property(readonly, nonatomic) IGExploreViewControllerConfig *exploreConfiguration;
@property(readonly, nonatomic) IGShoppingHomeSurveyController *shoppingHomeSurveyController;
@property(readonly, nonatomic) IGMonetizationProductOnboardingRequestSender *monetizationProductOnboardingRequestSender;
@property(readonly, nonatomic) id <IGShoppingDestinationPrefetchAnnouncer> shoppingDestinationPrefetchAnnouncer;
@property(readonly, nonatomic) IGShoppingDestinationMenuDataController *shoppingDestinationMenuDataController;
@property(readonly, nonatomic) IGShoppingMiniShopSurveyController *shoppingMiniShopSurveyController;
- (id)livePreLiveAvailableOptionsService;
@property(readonly, nonatomic) IGBrandedContentAdAccessRequestManager *brandedContentAdAccessRequestManager;
@property(readonly, nonatomic) IGDirectVisualMessageReplayService *visualMessageReplayService;
@property(readonly, nonatomic) IGDirectVisualMessageReportService *visualMessageReportService;
@property(readonly, nonatomic) IGDirectVisualMessagePlaybackTracker *visualMessagePlaybackTracker;
@property(readonly, nonatomic) IGDirectVisualMessageViewerSession *visualMessageViewerSession;
@property(readonly, nonatomic) IGDirectVisualMessageViewerSessionPlaybackTracker *inboxVisualMessageViewerSessionPlaybackTracker;
@property(readonly, nonatomic) IGDirectVisualMessageViewerSessionPlaybackTracker *threadVisualMessageViewerSessionPlaybackTracker;
- (id)proOnboardingChecklistService;
@property(readonly, nonatomic) id <IGGuideChangeAnnouncer> guideChangeAnnouncer;
@property(readonly, nonatomic) IGDirectUserBlockAlertService *directUserBlockAlertService;
@property(readonly, nonatomic) IGStoryInlineStateManager *storyInlineStateManager;
@property(readonly, nonatomic) IGTVBouncyNuxSeenStateStore *igtvBouncyNuxSeenStateStore;
@property(readonly, nonatomic) IGMwsRealtimeTopicHandlingService *mwsRealtimeTopicHandlingService;
@property(readonly, nonatomic) id <IGSaveCoordinating> saveCoordinator;
@property(readonly, nonatomic) IGMonetizationEligibilityStatusRequestSender *monetizationEligibilityStatusRequestSender;
@property(readonly, nonatomic) IGCommentEmojiProvider *commentEmojiProvider;
@property(readonly, nonatomic) IGShoppingActivityDataController *shoppingActivityDataController;
@property(readonly, nonatomic) IGLeadGenContextRegistry *leadGenContextRegistry;
@property(readonly, nonatomic) id <IGContentWarningProgressManagerAnnouncer> contentWarningProgressManagerAnnouncer;
@property(readonly, nonatomic) IGAppStoreManager *appStoreManager;
@property(readonly, nonatomic) IGShoppingHomeTabSurveyController *shoppingTabSurveyController;
- (id)shoppingSearchAndFilterSurveyManager;
@property(readonly, nonatomic) IGBrowserHotInstanceController *browserHotInstanceController;
@property(readonly, nonatomic) IGPictureInPictureManager *pictureInPictureManager;
@property(readonly, nonatomic) IGPromoteBottomNotificationBar *bottomNotificationBar;
@property(readonly, nonatomic) IGPromoteFlowPathManager *promoteFlowPathManager;
@property(readonly, nonatomic) IGDirectMsysMessagingMailbox *messagingMailbox;
@property(readonly, nonatomic) id <IGFXIMManagerAnnouncer> FXIMManagerAnnouncer;
- (id)FXIMManager;
@property(readonly, nonatomic) IGBugReportUploader *bugReportUploader;
@property(readonly, nonatomic) IGShoppingCartBadgingService *shoppingBagBadgingService;
@property(readonly, nonatomic) IGFavoritesNotificationController *favoritesNotificationController;
@property(readonly, nonatomic) IGRecentUserStore *audienceBlocklistRecentStore;
- (id)roomService;
@property(readonly, nonatomic) IGCoPresenceManager *coPresenceManager;
@property(readonly, nonatomic) IGShoppingCartDataController *shoppingBagDataController;
@property(readonly, nonatomic) id <IGDirectToastAnnouncer> directToastAnnouncer;
- (id)appleMetricsReporter;
@property(readonly, nonatomic) IGAppRatingHandler *appRatingHandler;
- (id)accountSettingsPaymentsEligibilityDecider;
@property(readonly, nonatomic) IGTimeSpentManager *timeSpentManager;
@property(readonly, nonatomic) id <IGUsageInsightsAnnouncer> usageInsightsAnnouncer;
@property(readonly, nonatomic) IGTVContentGatingImpressionTracker *igtvContentGatingTracker;
@property(readonly, nonatomic) IGTVGridItemImpressionTracker *igtvGridItemTracker;
@property(readonly, nonatomic) IGTVGuideImpressionTracker *igtvGuideTracker;
@property(readonly, nonatomic) IGTVHScrollImpressionTracker *igtvHScrollTracker;
@property(readonly, nonatomic) IGTVVideoImpressionTracker *igtvVideoTracker;
@property(readonly, nonatomic) IGSavedMediaCollectionsCacheController *savedMediaCollectionsCacheController;
@property(readonly, nonatomic) FBInAppPurchaseCache *inAppPurchaseCache;
@property(readonly, nonatomic) FBInAppPurchasePaymentManager *inAppPurchaseManager;
@property(readonly, nonatomic) IGInAppPurchaseDelegate *inAppPurchaseDelegate;
- (id)inAppPurchaseFunnelLogger;
@property(readonly, nonatomic) IGContinuousContactUploadSession *continuousContactUploadSession;
@property(readonly, nonatomic) IGSuggestedUsersManager *suggestedUsersManager;
@property(readonly, nonatomic) IGUserListStore *userListStore;
@property(readonly, nonatomic) IGVideoCallStartupHelper *videoCallStartupHelper;
- (id)statusService;
@property(readonly, nonatomic) IGShoppingProductHiddenDataController *productHiddenDataController;
@property(readonly, nonatomic) IGLiveQuestionsManager *liveQuestionsManager;
- (id)igtvCreationCapabilitiesStore;
@property(readonly, nonatomic) IGStoryReelLoadingErrorLogger *reelLoadingErrorLogger;
@property(readonly, nonatomic) IGStoriesInteractionManager *storiesInteractionManager;
@property(readonly, nonatomic) IGSlideshowNUXManager *slideshowNUXManager;
@property(readonly, nonatomic) IGQPAppConfiguration *qpAppConfiguration;
@property(readonly, nonatomic) IGNetworkingSessionThroughputLogger *sessionThroughputLogger;
@property(readonly, nonatomic) IGMinimizedViewerPresenter *minimizedViewerPresenter;
- (id)archiveBadgeManager;
@property(readonly, nonatomic) IGARLinkModelManager *arLinkModelManager;
- (id)videoCallStatusStore;
@property(readonly, nonatomic) IGShoppingObjectsCache *shoppingObjectsCache;
@property(readonly, nonatomic) id <IGSharedShoppingHistorySettingsAnnouncer> sharedShoppingHistorySettingsAnnouncer;
@property(readonly, nonatomic) IGLivePresenceService *livePresenceService;
@property(readonly, nonatomic) IGUnlockedStickerService *unlockedStickerService;
@property(readonly, nonatomic) IGTVInsightsManager *igtvInsightsManager;
@property(readonly, nonatomic) IGTVDraftsManager *igtvDraftsManager;
@property(readonly, nonatomic) id <IGTVCaptionsRemovalAnnouncer> TVCaptionsRemovalAnnouncer;
- (id)systemMessageListener;
@property(readonly, nonatomic) IGAsyncTask *sundialShoppingCapabilities;
- (id)sessionStartupConfiguration;
@property(readonly, nonatomic) id <IGAccountLinkingManaging> accountLinkingManager;
- (id)sessionEndBlocker;
@property(readonly, nonatomic) id <IGPurchaseExperienceAnnouncer> purchaseExperienceAnnouncer;
@property(readonly, nonatomic) IGNetworkingBandwidthEstimateLogger *bandwidthEstimateLogger;
@property(readonly, nonatomic) IGMonetizationProductInsightsRequestSender *monetizationProductInsightsRequestSender;
@property(readonly, nonatomic) id <IGInAppBadgeAnnouncer> inAppBadgeAnnouncer;
@property(readonly, nonatomic) IGInAppBadgeManager *inAppBadgeManager;
@property(readonly, nonatomic) id <IGGDPRConsentAnnouncer> GDPRConsentAnnouncer;
@property(readonly, nonatomic) IGFBFilteredImageGenerator *fbFilteredImageGenerator;
@property(readonly, nonatomic) IGFeatureFetchRealtimeManager *featureFetchRealtimeManager;
@property(readonly, nonatomic) IGDemoVideoUploader *demoVideoUploader;
@property(readonly, nonatomic) IGDeadFileJanitor *deadFileJanitor;
@property(readonly, nonatomic) IGContactPointManager *contactPointManager;
@property(readonly, nonatomic) id <IGContactPermissionAnnouncer> contactPermissionAnnouncer;
@property(readonly, nonatomic) IGChannelSeenStateStore *channelSeenStateStore;
@property(readonly, nonatomic) IGAvatarEffectManager *avatarEffectManager;
@property(readonly, nonatomic) IGAdsPaymentsRiskAppealState *adsPaymentsRiskAppealState;
@property(readonly, nonatomic) id <IGAdsPaymentsRiskAppealAnnouncer> adsPaymentsRiskAppealAnnouncer;
@property(readonly, nonatomic) IGAREffectBadgeController *arEffectBadgeController;
@property(readonly, nonatomic) IGDirectPendingInboxSubscriptionService *pendingInboxSubscriptionService;
@property(readonly, nonatomic) IGDirectVisualMessagePreloadService *directVisualMessagePreloadService;
@property(readonly, nonatomic) IGDirectCacheTrimmingService *directCacheTrimmingService;
@property(readonly, nonatomic) IGDirectVisualMessageActivityNetworker *directVisualMessageActivityNetworker;
@property(readonly, nonatomic) IGDirectRecentStickerService *directRecentStickerService;
@property(readonly, nonatomic) id <IGDirectQuickReplyCreationAnnouncer> directQuickReplyCreationAnnouncer;
@property(readonly, nonatomic) IGDirectQuickReplyService *quickReplyService;
@end


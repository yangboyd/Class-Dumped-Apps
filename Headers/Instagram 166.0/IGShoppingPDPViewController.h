//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGALLogContextModelProvider-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterUpdateListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaDeletedListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPurchaseExperienceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGSaveStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingCameraCoordinatorDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingCheckoutBridgeControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingIGFundedIncentivesMegaphoneListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingIGFundedIncentivesMegaphoneSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingLightboxAnimationControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPDefaultProductVariantSelectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPHeroCarouselARSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPHeroCarouselDataControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPHeroCarouselSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPInterstitialsNetworkerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPLightboxViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPListKitDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPModuleHeaderSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPPermissionMegaphoneSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPSelectedProductSectionsNetworkerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPVariantsControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingProductLaunchTimerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingProductViewerHeaderControllingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingRestockReminderServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingSessionTracking-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCreationViewControllerNavigationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTransitionZoomFromCapable-Protocol.h>
#import <InstagramAppCoreFramework/IGTransitionZoomToCapable-Protocol.h>

@class IGActionableConfirmationToastController, IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGListAdapter, IGMedia, IGSaveProductLogger, IGScrollPerfLogger, IGSessionTracker, IGShoppingAdMetadata, IGShoppingCameraCoordinator, IGShoppingCartLogger, IGShoppingCheckoutBridgeController, IGShoppingConsumptionAnalyticsContext, IGShoppingConsumptionFeedItemLogger, IGShoppingConsumptionTimespentLogger, IGShoppingIGFundedIncentive, IGShoppingNavigationAnalyticsContext, IGShoppingPDPDefaultProductVariantSelectionController, IGShoppingPDPHeroCarouselDataController, IGShoppingPDPInterstitialsNetworker, IGShoppingPDPLightboxAnimationController, IGShoppingPDPLightboxViewController, IGShoppingPDPListKitDataSource, IGShoppingPDPPerformanceLogger, IGShoppingPDPPresentationContext, IGShoppingPDPProductInventoryLoggingManager, IGShoppingPDPSurveyController, IGShoppingProductLaunchTimer, IGShoppingProductReportViewController, IGShoppingRestockReminderService, IGStatefulNetworker, IGUserSession, NSDate, NSString, UICollectionView;
@protocol IGShoppingPDPViewControllerDelegate, IGShoppingProductViewerHeaderControlling;

@interface IGShoppingPDPViewController : IGViewController <IGALLogContextModelProvider, IGFeedScrollViewListener, IGListAdapterUpdateListener, IGMediaDeletedListener, IGMediaThumbnailSectionControllerSelectionDelegate, IGPurchaseExperienceListener, IGSaveStatusListener, IGShoppingCameraCoordinatorDelegate, IGShoppingCheckoutBridgeControllerDelegate, IGShoppingIGFundedIncentivesMegaphoneSectionControllerDelegate, IGShoppingIGFundedIncentivesMegaphoneListener, IGShoppingPDPDefaultProductVariantSelectionControllerDelegate, IGShoppingPDPHeroCarouselARSectionControllerDelegate, IGShoppingPDPHeroCarouselDataControllerDelegate, IGShoppingPDPHeroCarouselSectionControllerDelegate, IGShoppingPDPInterstitialsNetworkerDelegate, IGShoppingLightboxAnimationControllerDelegate, IGShoppingPDPLightboxViewControllerDelegate, IGShoppingPDPListKitDataSourceDelegate, IGShoppingPDPModuleHeaderSectionControllerDelegate, IGShoppingPDPPermissionMegaphoneSectionControllerDelegate, IGShoppingPDPVariantsControllerDelegate, IGShoppingProductLaunchTimerDelegate, IGShoppingProductViewerHeaderControllingDelegate, IGShoppingRestockReminderServiceDelegate, IGShoppingSessionTracking, IGStoryCreationViewControllerNavigationDelegate, IGShoppingPDPSelectedProductSectionsNetworkerDelegate, IGTransitionZoomFromCapable, IGTransitionZoomToCapable>
{
    IGUserSession *_userSession;
    IGMedia *_media;
    IGShoppingAdMetadata *_adMetadata;
    IGShoppingPDPPresentationContext *_presentationContext;
    id <IGShoppingPDPViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGShoppingPDPListKitDataSource *_dataSource;
    id <IGShoppingProductViewerHeaderControlling> _headerController;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGFeedPreviewHandler *_mftbPreviewHandler;
    IGActionableConfirmationToastController *_toastController;
    IGShoppingProductReportViewController *_reportViewController;
    long long _headerStyle;
    IGStatefulNetworker *_networker;
    IGShoppingPDPInterstitialsNetworker *_interstitialsNetworker;
    double _networkLoadStartTime;
    _Bool _asyncHeroCarouselFetchEnabled;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGSaveProductLogger *_saveProductLogger;
    IGScrollPerfLogger *_scrollPerfLogger;
    IGShoppingPDPPerformanceLogger *_perfLogger;
    IGShoppingCartLogger *_bagLogger;
    IGShoppingConsumptionTimespentLogger *_shoppingTimespentLogger;
    IGShoppingPDPProductInventoryLoggingManager *_inventoryLoggingManager;
    IGShoppingConsumptionAnalyticsContext *_consumptionLoggingInfo;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    IGShoppingCheckoutBridgeController *_checkoutBridgeController;
    IGShoppingPDPDefaultProductVariantSelectionController *_defaultProductVariantSelectionController;
    IGShoppingPDPHeroCarouselDataController *_heroCarouselDataController;
    IGShoppingPDPLightboxViewController *_lightboxViewController;
    IGShoppingPDPLightboxAnimationController *_viewerTransitionController;
    IGShoppingCameraCoordinator *_shoppingCameraCoordinator;
    IGShoppingProductLaunchTimer *_productLaunchTimer;
    IGShoppingPDPSurveyController *_surveyController;
    IGShoppingRestockReminderService *_restockReminderService;
    NSDate *_feedInitialLoadStartTime;
    _Bool _hasLoggedLoadSuccess;
    IGShoppingIGFundedIncentive *_igFundedIncentive;
    NSString *_checkoutSessionId;
    _Bool _shoppingBagEnabled;
    _Bool _unselectedVariantsEnabled;
    _Bool _isPresentedModally;
    _Bool _userSwipedToDismissStickyCta;
    _Bool _hasAddedPDPToBagOnce;
    _Bool _showingStickyCta;
    double _stickyCtaHeight;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (id)transitionZoomItemOverrideOnExit;
- (id)transitionZoomViewToItem:(id)arg1;
- (_Bool)shouldZoomTransition;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)userSession;
- (id)trackingModel;
- (id)analyticsExtras;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (void)shoppingProductLaunchTimer:(id)arg1 didFireTimerForProductItem:(id)arg2;
- (void)shoppingRestockReminderService:(id)arg1 didUpdateState:(long long)arg2 forProductItemWithPk:(id)arg3 fromState:(long long)arg4;
- (void)shoppingPDPRestockReminderSectionController:(id)arg1 didRequestUpdateToState:(long long)arg2;
- (void)productCarouselSectionController:(id)arg1 didTapDismissForGenericProductItem:(id)arg2 viewModel:(id)arg3;
- (void)productCarouselSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)dismissShoppingCameraAndShowPDPForCoordinator:(id)arg1 productItem:(id)arg2 creationViewController:(id)arg3;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)creationViewControllerDidUploadDemoVideo:(id)arg1;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 toGroupStoriesRecipients:(id)arg6 asset:(id)arg7 storyModelArray:(id)arg8 metadataArray:(id)arg9;
- (void)infoViewSectionController:(id)arg1 cellTappedWithViewModel:(id)arg2;
- (void)checkoutBridgeController:(id)arg1 didDismissCheckoutAndShouldAddToBag:(_Bool)arg2;
- (void)checkoutBridgeControllerDidCompletePurchase:(id)arg1 withProductIds:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)genericProductWithContextCardSectionController:(id)arg1 didTapDismissForGenericProductItem:(id)arg2;
- (_Bool)genericProductWithContextCardSectionController:(id)arg1 containsLastSavedGenericProductItem:(id)arg2;
- (void)genericProductWithContextCardSectionController:(id)arg1 willNavigateToPDPForGenericViewModel:(id)arg2;
- (void)genericProductWithContextCardSectionController:(id)arg1 didUpdateGenericProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(id)arg4;
- (void)shoppingPDPModuleHeaderSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)shoppingPDPDefaultProductVariantSelectionController:(id)arg1 didCompleteProductItemSelection:(id)arg2;
- (void)variantSelectorSectionController:(id)arg1 didTapVariantDimension:(id)arg2;
- (void)shoppingPDPColorVariantCarouselSectionController:(id)arg1 didSelectVariantValue:(id)arg2 fromVariantDimension:(id)arg3;
- (void)shoppingPDPTryInARSectionControllerDidTapCell:(id)arg1 inController:(id)arg2;
- (void)shoppingPDPHeroCarouselARSectionControllerDidTapCell:(id)arg1 inController:(id)arg2;
- (void)primaryButtonSectionController:(id)arg1 willDisplaySectionWithCell:(id)arg2;
- (void)primaryButtonSectionController:(id)arg1 didEndDisplayingWithCell:(id)arg2;
- (void)primaryButtonSectionControllerDidTapSave:(id)arg1;
- (void)primaryButtonSectionController:(id)arg1 didTapPrimaryButtonWithDestination:(long long)arg2 sectionIdentifier:(id)arg3;
- (void)shoppingProductDetailsSectionController:(id)arg1 didTapSaveButtonWithShouldSave:(_Bool)arg2;
- (void)shoppingProductDetailsSectionControllerDidTapMoreButton:(id)arg1;
- (void)shoppingPDPPermissionMegaphoneSectionController:(id)arg1 didUpdateToPermissionStatus:(long long)arg2;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (void)shoppingPDPLightboxAnimationController:(id)arg1 didRequestHeaderViewVisibilityUpdate:(_Bool)arg2 animated:(_Bool)arg3;
- (id)videoPlayerForLightbox;
- (void)prepareForAnimationTransitionWithIdentifier:(id)arg1 videoPlayer:(id)arg2 animationFinished:(_Bool)arg3;
- (void)lightboxViewControllerDidEndZoom:(id)arg1;
- (void)lightboxViewController:(id)arg1 didScrollToObjectWithIdentifier:(id)arg2 animationTransitionMediaView:(id)arg3;
- (void)shoppingPDPHeroCarouselSectionController:(id)arg1 didCancelFeaturedProductRequestForCellWithIdentifier:(id)arg2;
- (void)shoppingPDPHeroCarouselSectionController:(id)arg1 didTapViewModelWithIdentifier:(id)arg2 mediaCellAnimationTransitionView:(id)arg3 videoPlayer:(id)arg4 productSticker:(id)arg5;
- (void)shoppingPDPHeroCarouselDataController:(id)arg1 didUpdateFetchState:(long long)arg2 forProductItem:(id)arg3;
- (void)shoppingPDPHeroCarouselDataController:(id)arg1 didLoadHeroCarouselDataModel:(id)arg2 forProductItem:(id)arg3 withLoadTime:(double)arg4;
- (void)shoppingPDPInterstitialsNetworker:(id)arg1 didFailForProductItem:(id)arg2 withError:(id)arg3;
- (void)shoppingPDPInterstitialsNetworker:(id)arg1 didLoadInterstitials:(id)arg2 forProductItem:(id)arg3;
- (void)shoppingPDPSelectedProductSectionsNetworker:(id)arg1 didFailForSelectedProductItem:(id)arg2 withError:(id)arg3;
- (void)shoppingPDPSelectedProductSectionsNetworker:(id)arg1 didLoadResponse:(id)arg2 forSelectedProductItem:(id)arg3;
- (void)pdpVariantsControllerViewModelsNeedReloading:(id)arg1;
- (void)pdpVariantsController:(id)arg1 didUpdateProductGroupFetchState:(id)arg2;
- (void)shoppingProductViewerHeaderControllerDidTapBagButton:(id)arg1;
- (void)shoppingProductViewerHeaderController:(id)arg1 didUpdateHeaderStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)shoppingProductViewerHeaderControllerDidTapBackButton:(id)arg1;
- (void)shoppingProductViewerHeaderControllerDidTapTitleButton:(id)arg1;
- (void)shoppingProductViewerHeaderControllerDidTapMoreButton:(id)arg1;
- (void)purchaseExperienceBridgeModuleDidSharePurchaseToStory:(id)arg1 rootViewController:(id)arg2;
- (void)purchaseExperienceBridgeModuleCheckoutWillDismiss:(id)arg1;
- (void)purchaseExperienceBridgeModule:(id)arg1 didSuccessfullyCompletePurchase:(id)arg2 merchantPk:(id)arg3 purchasedProductIds:(id)arg4 appliedIncentiveIds:(id)arg5;
- (void)shoppingIGFundedIncentivesMegaphoneSectionController:(id)arg1 didDismissIncentiveWithId:(id)arg2;
- (void)shoppingIncentivesMegaphoneSectionController:(id)arg1 didTapDismissButton:(id)arg2;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (void)_showPDPForProductItem:(id)arg1 priorModule:(id)arg2;
- (void)_didDismissShoppingCamera;
- (void)_showShoppingCameraFromAnchorView:(id)arg1 entryPoint:(unsigned long long)arg2 entryPointString:(id)arg3;
- (void)_handleAddToBagFailureForProductItem:(id)arg1 withError:(id)arg2 bagLogger:(id)arg3;
- (void)_showBagConfirmationToastForProductItem:(id)arg1;
- (void)_navigateToShoppingBagForProductItem:(id)arg1 submodule:(id)arg2;
- (void)_handleAddToBagSuccessWithProductItem:(id)arg1 sectionIdentifier:(id)arg2 bagLogger:(id)arg3;
- (void)_addProductItemToShoppingBag:(id)arg1 sectionIdentifier:(id)arg2 submodule:(id)arg3 buyNowBagLogger:(id)arg4;
- (void)_presentCheckoutNUXDialogIfNeeded;
- (void)_presentNativeCheckoutForProductItem:(id)arg1 fromViewController:(id)arg2 submodule:(id)arg3;
- (void)_presentExternalCheckoutForProductItem:(id)arg1 submodule:(id)arg2;
- (void)_handleProductGroupLoadFailureWithError:(id)arg1;
- (void)_handleProductGroupLoadSuccess:(id)arg1;
- (void)_handlePrimaryButtonTapForSelectedProductItem:(id)arg1 destinaion:(long long)arg2 sectionIdentifier:(id)arg3 submodule:(id)arg4;
- (void)_handlePrimaryButtonTapForDestination:(long long)arg1 sectionIdentifier:(id)arg2 submodule:(id)arg3;
- (_Bool)_shouldHandlePrimaryButtonTap;
- (void)_setUpMinishopNavBar;
- (void)_exposeRestockReminderExperimentIfNeeded;
- (void)_configureRestockRemindersIfNeededWithProductItem:(id)arg1;
- (void)_updateCollectionViewContentInsets;
- (void)_invalidateNetworkCache;
- (void)_presentProductDebugInfo;
- (void)_updateProductLaunchTimer:(id)arg1;
- (void)_presentVisualVariantSelectionFlow;
- (void)_openMoreButtonActionSheet;
- (_Bool)_moreButtonEnabled;
- (id)_moreButtonActions;
- (void)_presentDropsPaymentInterstitialIfNeededForProductItem:(id)arg1 saveStatus:(_Bool)arg2;
- (id)_saveProductLoggerForGenericProductItem:(id)arg1 pdpProductId:(id)arg2 submodule:(id)arg3 displayedMediaId:(id)arg4;
- (void)_updateGenericProductItem:(id)arg1 withSaveStatus:(_Bool)arg2 submodule:(id)arg3 displayedMediaId:(id)arg4;
- (void)_handleTapToUpdateGenericProductItem:(id)arg1 withSaveStatus:(_Bool)arg2 submodule:(id)arg3 displayedMediaId:(id)arg4;
- (void)_showFetchFailureAlertBar;
- (void)_logPDPAbandonIfNeeded;
- (void)_didTapNotInterested;
- (void)_enterReportingFlow;
- (void)_updateStatusBarAnimated:(_Bool)arg1;
- (void)_scrollToHeroCarouselFeaturedProductItem;
- (void)_handleHeroCarouselLoaded:(id)arg1 forProductItem:(id)arg2 loadType:(long long)arg3 loadTime:(double)arg4;
- (void)_feedResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_feedFetchStateUpdated:(id)arg1;
- (void)_presentStickyCtaForProductItem:(id)arg1 isCtaActive:(_Bool)arg2;
- (void)_processLoadedDataModelForViewpointActions:(id)arg1;
- (void)_updateSelectedProductItem:(id)arg1 animated:(_Bool)arg2;
- (id)_prepareDataModelForSwitchToSelectedProductItem:(id)arg1 previousDataModel:(id)arg2;
- (void)_cacheLoadedDataModel:(id)arg1 requestConfiguration:(id)arg2;
- (void)_applyLoadedDataModel:(id)arg1 loadType:(long long)arg2 action:(long long)arg3;
- (void)_updateDataModel:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performInitialFetchForProductGroupWithProductItem:(id)arg1;
- (void)_handleIGFundedIncentiveBannerDismiss;
- (void)_loadFeedWithAction:(long long)arg1;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_setupHeaderController;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 productItem:(id)arg2 media:(id)arg3 adMetadata:(id)arg4 presentationContext:(id)arg5 delegate:(id)arg6 sessionTracker:(id)arg7 performanceLogger:(id)arg8 priorModule:(id)arg9 priorSubmodule:(id)arg10 loggingExtras:(id)arg11 consumptionLoggingInfo:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


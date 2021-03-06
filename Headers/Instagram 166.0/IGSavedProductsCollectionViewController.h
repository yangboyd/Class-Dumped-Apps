//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGInfoViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPurchaseExperienceBridgeModuleDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPurchaseExperienceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGSaveCollectionTabSupporting-Protocol.h>
#import <InstagramAppCoreFramework/IGSaveStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGSharedShoppingHistorySettingsListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingBloksDataSourceProviderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingDeletedProductCardSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingGenericProductWithContextCardSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingSessionTracking-Protocol.h>
#import <InstagramAppCoreFramework/IGTabControlSegment-Protocol.h>
#import <InstagramAppCoreFramework/IGTransitionZoomFromCapable-Protocol.h>

@class BKBloksHostingView, IGFeedStarterKit, IGInfoView, IGSaveHomeLogger, IGSavedProductsCollectionDataModel, IGSessionTracker, IGShoppingBloksDataSourceProvider, IGShoppingNavigationAnalyticsContext, IGShoppingWishlistProductCarouselViewModel, IGStatefulNetworker, IGUserSession, NSString;

@interface IGSavedProductsCollectionViewController : IGViewController <IGFeedScrollViewListener, IGInfoViewDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGPurchaseExperienceBridgeModuleDelegate, IGPurchaseExperienceListener, IGSaveStatusListener, IGSharedShoppingHistorySettingsListener, IGShoppingBloksDataSourceProviderDelegate, IGShoppingDeletedProductCardSectionControllerDelegate, IGShoppingPDPViewControllerDelegate, IGShoppingGenericProductWithContextCardSectionControllerDelegate, IGShoppingSessionTracking, IGTransitionZoomFromCapable, IGSaveCollectionTabSupporting, IGTabControlSegment>
{
    IGUserSession *_userSession;
    IGStatefulNetworker *_networker;
    IGSavedProductsCollectionDataModel *_dataModel;
    IGFeedStarterKit *_feed;
    IGInfoView *_infoView;
    IGSaveHomeLogger *_logger;
    _Bool _hasLoadedData;
    IGStatefulNetworker *_followedBrandsCarouselNetworker;
    IGShoppingWishlistProductCarouselViewModel *_followedBrandsCarouselViewModel;
    IGStatefulNetworker *_savedMediaCarouselNetworker;
    IGShoppingWishlistProductCarouselViewModel *_savedMediaCarouselViewModel;
    IGStatefulNetworker *_likedMediaCarouselNetworker;
    IGShoppingWishlistProductCarouselViewModel *_likedMediaCarouselViewModel;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    IGShoppingBloksDataSourceProvider *_sshDataSignifierSourceProvider;
    BKBloksHostingView *_sshDataSignifierBloksView;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)bloksDataSourceProvider:(id)arg1 didReceiveErrorFetchingBloksViewModel:(id)arg2;
- (void)bloksDataSourceProvider:(id)arg1 didUpdateBloksView:(id)arg2;
- (void)sharedShoppingHistorySettingsDidUpdate:(id)arg1;
- (void)setSelectionState:(_Bool)arg1;
- (_Bool)isEmpty;
- (id)fallbackIcon;
- (id)_emptyFeedModel;
- (_Bool)_isLastSavedProductId:(id)arg1;
- (void)_carouselNetworkResponseLoaded:(id)arg1;
- (void)_networkFetchStateUpdated:(id)arg1;
- (void)_collectionNetworkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (_Bool)shoppingPDPViewController:(id)arg1 shouldShowUnsaveDialogForGenericProductItem:(id)arg2;
- (void)_navigateToShoppingBag;
- (void)_updateProduct:(id)arg1 withUpdatedSaveStatus:(_Bool)arg2 merchantId:(id)arg3 displayedMediaId:(id)arg4;
- (void)_requestFeedWithAction:(long long)arg1 isPullToRefresh:(_Bool)arg2;
- (void)_pullToRefreshTriggered:(id)arg1;
- (void)_handleInitialLoad;
- (void)deletedProductCardSectionController:(id)arg1 didSelectDeletedProductItem:(id)arg2;
- (void)deletedProductCardSectionController:(id)arg1 didUnsaveDeletedProductItem:(id)arg2;
- (void)genericProductWithContextCardSectionController:(id)arg1 didTapDismissForGenericProductItem:(id)arg2;
- (_Bool)genericProductWithContextCardSectionController:(id)arg1 containsLastSavedGenericProductItem:(id)arg2;
- (void)genericProductWithContextCardSectionController:(id)arg1 willNavigateToPDPForGenericViewModel:(id)arg2;
- (void)genericProductWithContextCardSectionController:(id)arg1 didUpdateGenericProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(id)arg4;
- (void)purchaseExperienceBridgeModule:(id)arg1 didDismissAndShouldAddToBag:(_Bool)arg2;
- (void)purchaseExperienceBridgeModuleDidRequestCheckoutInformation:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)purchaseExperienceBridgeModuleDidSharePurchaseToStory:(id)arg1 rootViewController:(id)arg2;
- (void)purchaseExperienceBridgeModuleCheckoutWillDismiss:(id)arg1;
- (void)purchaseExperienceBridgeModule:(id)arg1 didSuccessfullyCompletePurchase:(id)arg2 merchantPk:(id)arg3 purchasedProductIds:(id)arg4 appliedIncentiveIds:(id)arg5;
- (void)infoViewWasTapped:(id)arg1;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 collectionId:(id)arg2 priorModule:(id)arg3 priorSubmodule:(id)arg4 shoppingSessionTracker:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


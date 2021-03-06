//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGContextualFeedViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectShareSheetControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDiscoveryMediaSectionControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationContextualFeedServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationHeaderSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationInfoPageHeaderSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationListKitDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationMainFeedDataControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationNavigationItemsDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGReelOwnerNavigationBarControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/MFMailComposeViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/MFMessageComposeViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IG4BLogger, IGCollectionViewVisibility, IGFeedFocusCoordinator, IGFeedPreviewHandler, IGListAdapter, IGLocation, IGLocationDetailNavigationItemsController, IGLocationListKitDataSource, IGLocationMainFeedDataController, IGLocationMainFeedLogger, IGLocationNavigationPerfComponents, IGPlaybackCoordinator, IGRefreshControl, IGStickySectionsWaterfallCollectionViewLayout, IGUserSession, NSString, UICollectionView;
@protocol IGDirectShareSheetControlling;

@interface IGLocationMainFeedViewController : IGViewController <IGContextualFeedViewControllerDelegate, IGListAdapterDelegate, IGLocationListKitDataSourceDelegate, IGLocationNavigationItemsDelegate, IGLocationMainFeedDataControllerDelegate, IGLocationHeaderSectionControllerDelegate, IGDiscoveryMediaSectionControllerSelectionDelegate, IGReelOwnerNavigationBarControllerDelegate, IGDirectShareSheetControllerDelegate, IGLocationInfoPageHeaderSectionControllerDelegate, IGLocationContextualFeedServiceDelegate, UIScrollViewDelegate, MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGLocation *_location;
    IGListAdapter *_listAdapter;
    IGStickySectionsWaterfallCollectionViewLayout *_feedLayout;
    IGPlaybackCoordinator *_playbackCoordinator;
    UICollectionView *_collectionView;
    IGLocationListKitDataSource *_dataSource;
    IGLocationDetailNavigationItemsController *_locationDetailNavigationItemsController;
    IGLocationMainFeedDataController *_dataController;
    IGLocationMainFeedDataController *_storyDataController;
    long long _locationFeedType;
    IGFeedFocusCoordinator *_focusCoordinator;
    IGRefreshControl *_refreshControl;
    NSString *_locationName;
    IG4BLogger *_logger;
    IGFeedPreviewHandler *_previewHandler;
    IGLocationNavigationPerfComponents *_navPerfComponents;
    IGLocationMainFeedLogger *_mainFeedLogger;
    IGCollectionViewVisibility *_collectionViewVisibility;
    NSString *_previousAnalyticsModule;
    id <IGDirectShareSheetControlling> _reshareController;
}

@property(readonly, nonatomic) id <IGDirectShareSheetControlling> reshareController; // @synthesize reshareController=_reshareController;
@property(retain, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)analyticsExtras;
- (void)_iterateVisibleItemsWithMinimumVisibilityWithIterationBlock:(CDUnknownBlockType)arg1;
- (void)_logImpressions;
- (void)_logImpressionsIfNecessary;
- (void)locationContextualFeedDidFetchWithError:(id)arg1;
- (void)locationContextualFeedDidFetchWithDataStore:(id)arg1;
- (void)locationInfoPageHeaderSectionController:(id)arg1 didSelectViewInformationButtonWithLocation:(id)arg2;
- (void)locationInfoPageHeaderSectionController:(id)arg1 didSelectStory:(id)arg2;
- (void)contextualFeedViewControllerWillDismiss:(id)arg1;
- (void)contextualFeedViewControllerWillShowPill:(id)arg1;
- (_Bool)didShowPillInCurrentSession:(id)arg1;
- (_Bool)shouldLogScreenshots;
- (id)getViewerUser;
- (id)getTargetUser;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)didTapMapViewWithLocationID:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_presentLocationShareView;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPost:(id)arg6;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2;
- (_Bool)reelOnwerNavigationBarControllerShouldShowMutingOptions:(id)arg1;
- (void)reelOwnerNavigationBarControllerDidTapFollowButton:(id)arg1;
- (void)reelOwnerNavigationBarControllerDidAdjustNavigationBarHeight:(id)arg1;
- (void)locationMainFeedSingleDataController:(id)arg1 feedType:(long long)arg2 didFailWithError:(id)arg3;
- (void)locationMainFeedDataController:(id)arg1 didGetLocation:(id)arg2;
- (void)locationMainFeedDataController:(id)arg1 didFetchDataModelOfType:(long long)arg2 inDataStore:(id)arg3 isLoadMore:(_Bool)arg4;
- (long long)_currentFetchState;
- (id)_currentDataStore;
- (void)_configureNavBar;
- (void)_setupPreview;
- (id)_lastNavigationModule;
- (void)_scrollToItem:(id)arg1 animated:(_Bool)arg2;
- (void)_syncWithContexualFeed;
- (void)_handleRefreshControlTriggered;
- (void)_setupRefreshControl;
- (void)_fetchMoreIfAppropriate;
- (void)_fetchLocationData;
- (void)_fetchInfoPage;
- (void)_fetchInitialDataForStory;
- (void)_fetchInitialData;
- (void)_setupCollectionView;
- (void)mediaSectionController:(id)arg1 didSelectItem:(id)arg2;
- (void)locationListKitDataSourceDidUpdateObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)locationListKitDataSource:(id)arg1 didSelectFeedType:(long long)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)locationDetailViewControllerDidTapSave;
- (void)locationDetailViewControllerDidTapShare;
- (void)locationDetailViewControllerDidTapMore;
- (id)title;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 location:(id)arg2 previousAnalyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


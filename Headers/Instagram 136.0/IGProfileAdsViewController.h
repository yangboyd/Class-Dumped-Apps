//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedScrollViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGProfileAdsOverlayViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGProfileTabViewController-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGBrowserSession, IGBrowserViewController, IGFeedItem, IGFeedNetworkSource, IGFeedScrollViewAnnouncer, IGListAdapter, IGProfileAdsOverlayView, IGUserSession, NSIndexPath, NSString, UICollectionView;
@protocol IGDirectResponseLogging, IGFeedConfigurationType, IGFeedItemConfigurationType, IGFeedSectionControllerComponentsType, IGProfileAdsViewControllerDelegate;

@interface IGProfileAdsViewController : IGViewController <IGFeedScrollViewListener, IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGFeedScrollViewDelegate, UICollectionViewDelegate, IGProfileAdsOverlayViewDelegate, IGProfileTabViewController>
{
    unsigned long long _browserLayoutState;
    IGFeedScrollViewAnnouncer *_collectionViewAnnouncer;
    IGUserSession *_userSession;
    IGListAdapter *_adapter;
    IGFeedNetworkSource *_feedNetworkSource;
    id <IGFeedConfigurationType> _feedConfiguration;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    IGFeedItem *_feedItem;
    IGBrowserSession *_browserSession;
    UICollectionView *_collectionView;
    IGProfileAdsOverlayView *_overlayView;
    unsigned long long _scrollDirection;
    double _lastContentOffsetY;
    NSIndexPath *_mediaCellIndexPath;
    NSIndexPath *_browserCellIndexPath;
    id <IGProfileAdsViewControllerDelegate> _delegate;
    IGBrowserViewController *_browserViewController;
    double _initialDistance;
    double _lastContentInsetTop;
    _Bool _shouldResetInitialDistance;
    id <IGDirectResponseLogging> _logger;
    _Bool _useFloatingOverlay;
    _Bool _isAnimatingBrowserLayoutChange;
    struct {
        unsigned long long countForBrowserFullscreenViaSwipe;
        unsigned long long countForBrowserFullscreenViaTap;
        unsigned long long countForBrowserCloseViaSwipe;
        unsigned long long countForBrowserCloseViaCloseButton;
    } _loggingAnalytics;
    unsigned long long _navigationBarState;
}

@property(nonatomic) unsigned long long navigationBarState; // @synthesize navigationBarState=_navigationBarState;
- (void).cxx_destruct;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)didTapOnOverlayView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (id)dictionaryRepresentationForLoggingAnalytics;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (unsigned long long)_findNextStateBrowserLayoutStateWithshouldScrollIntoBrowser:(_Bool)arg1 shouldCollapseBrowser:(_Bool)arg2;
- (void)_setupCollectionView;
- (void)_setupBrowserViewController;
- (void)_openBrowser;
- (void)_dismissBrwoser;
- (void)_setupOverlayView;
- (unsigned long long)_browserLayoutStateOnScrollingDown:(_Bool)arg1;
- (unsigned long long)_browserLayoutStateOnScrollingUp:(_Bool)arg1;
- (double)_calculatedInvisibleHeightForMediaCellFromContainerRect;
- (void)_updateOverlayViewAlphaOnScrolling;
- (void)_updateLoggingForBrowserLayoutState:(unsigned long long)arg1 withAction:(unsigned long long)arg2;
- (void)setBrowserLayoutState:(unsigned long long)arg1 withAction:(unsigned long long)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)willResignSelectedPageInDynamicPageViewController;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (void)prepareForReuse;
- (void)didBecomeSelectedPageInDynamicPageViewController;
- (void)updateContentInsets;
- (void)setRefreshControlBackgroundColor:(id)arg1;
- (void)parentWillDisappearWithIsBeingRemovedFromStack:(_Bool)arg1;
- (_Bool)disableNavigationEvent;
- (id)analyticsModule;
- (_Bool)shouldConsiderSafeAreaForPreferredContentBottomInset;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (id)initWithFeedItem:(id)arg1 logger:(id)arg2 delegate:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


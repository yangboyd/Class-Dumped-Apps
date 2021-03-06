//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingResourcesDestinationBrandPivotsSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingResourcesDestinationDataControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingResourcesDestinationHeaderSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGFeedScrollViewAnnouncer, IGGuidesShoppingResourcesDestinationNetworkResponse, IGListAdapter, IGSessionTracker, IGShoppingProductPivotsViewModel, IGShoppingResourcesDestinationDataController, IGUserSession, NSString, UICollectionView;

@interface IGShoppingResourcesDestinationViewController : IGViewController <IGShoppingResourcesDestinationDataControllerDelegate, IGShoppingResourcesDestinationHeaderSectionControllerDelegate, UICollectionViewDelegate, IGListAdapterDataSource, IGFeedScrollViewListener, IGShoppingResourcesDestinationBrandPivotsSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingResourcesDestinationDataController *_dataController;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGGuidesShoppingResourcesDestinationNetworkResponse *_guidesResponse;
    IGShoppingProductPivotsViewModel *_brandsResponse;
}

- (void).cxx_destruct;
- (void)shoppingResourcesDestinationBrandPivotsSectionController:(id)arg1 didTapActionButtonWithButtonTitle:(id)arg2;
- (void)shoppingResourcesDestinationHeaderSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)shoppingResourcesDestinationDataController:(id)arg1 didLoadGuidesResponse:(id)arg2 didLoadBrandsResponse:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 shoppingSessionTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


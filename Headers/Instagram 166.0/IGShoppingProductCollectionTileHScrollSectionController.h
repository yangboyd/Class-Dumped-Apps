//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingProductCollectionTileCellDelegate-Protocol.h>

@class IGListAdapter, IGSessionTracker, IGShoppingProductCollectionTileHScrollLogger, IGShoppingProductCollectionTileHScrollViewModel, IGUserSession, NSString;
@protocol IGShoppingProductCollectionTileHScrollSectionControllerDelegate;

@interface IGShoppingProductCollectionTileHScrollSectionController : IGListSectionController <IGListAdapterDataSource, IGShoppingProductCollectionTileCellDelegate>
{
    IGUserSession *_userSession;
    IGShoppingProductCollectionTileHScrollLogger *_logger;
    IGListAdapter *_listAdapter;
    struct IGGridLayoutConfiguration _gridLayoutConfig;
    IGShoppingProductCollectionTileHScrollViewModel *_viewModel;
    NSString *_analyticsModule;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGShoppingProductCollectionTileHScrollSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingProductCollectionTileHScrollSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_joinedCollectionIds;
- (_Bool)_hasSingleTile;
- (long long)_indexOfTileViewModel:(id)arg1;
- (void)shoppingProductCollectionTileCell:(id)arg1 didTapCellWithViewModel:(id)arg2;
- (void)showreelNativeViewDidTapRetryButton:(id)arg1;
- (void)shoppingProductCollectionTileCell:(id)arg1 didTapProfilePictureWithUser:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 analyticsModule:(id)arg3 shoppingSessionTracker:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


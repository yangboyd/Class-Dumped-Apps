//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNCollectionViewController.h"

#import "DYNForkDirectMessageViewModelDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DYNForkDirectMessageViewModel, GSCNavigationOptions, NSString, UIView;
@protocol DYNColorSchemeService, DYNExperimentsService, DYNSharedLayerService, DYNStreamDMFactoryService, DYNUserAndGroupListViewControllerDelegate, GIPAccountID, GSCNavigationService;

@interface DYNUserAndGroupListViewController : DYNCollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, DYNForkDirectMessageViewModelDelegate>
{
    DYNForkDirectMessageViewModel *_viewModel;
    UIView *_noActiveSearchResultsView;
    id <GIPAccountID> _accountID;
    id <GSCNavigationService> _gscNavigationService;
    id <DYNColorSchemeService> _colorSchemeService;
    id <DYNExperimentsService> _experimentsService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNStreamDMFactoryService> _factoryService;
    GSCNavigationOptions *_navigationOptions;
    id <DYNUserAndGroupListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNUserAndGroupListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openUnnamedRoom:(id)arg1;
- (void)bringHeaderViewToFront;
- (void)setUpHeaderView;
- (void)createHeaderView;
- (void)forkDirectMessageViewModelDidUpdateModelContents:(id)arg1 containsGuest:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateSelectedUsers:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAccountID:(id)arg1 withSelectedUsers:(id)arg2 isSpaceGuestAccessEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


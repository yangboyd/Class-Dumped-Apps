//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGPromoteViewController.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteRadioButtonListSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGBoostPostLogger, IGLabelItemViewModel, IGListAdapter, IGPromoteDataStore, IGUserSession, NSMutableArray, NSString, UICollectionView;

@interface IGPromoteDestinationWelcomeMessageViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteRadioButtonListSectionControllerDelegate>
{
    IGUserSession *_session;
    IGPromoteDataStore *_dataStore;
    IGBoostPostLogger *_logger;
    UICollectionView *_contentView;
    IGListAdapter *_adapter;
    IGLabelItemViewModel *_titleLabelViewModel;
    NSMutableArray *_radioButtonViewModels;
    long long _selectedMessageType;
    IGPromoteDataStore *_localDataStore;
}

- (void).cxx_destruct;
- (void)_onDoneBarButtonTapped;
- (void)_onCancelBarButtonTapped;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapEditButtonWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapDeleteButtonWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapSubtitleWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapCellWithViewModel:(id)arg2;
- (void)_updateSelectedCTAWithType:(long long)arg1;
- (void)_updateViewModels;
- (void)_reloadView;
- (void)_setUpContentView;
- (void)_setUpNavigationBar;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 dataStore:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


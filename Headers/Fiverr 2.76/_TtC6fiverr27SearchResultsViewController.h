//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseViewController.h"

@class NSDictionary, NSString, UICollectionView;

@interface _TtC6fiverr27SearchResultsViewController : FVRBaseViewController
{
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: searchQuery
    // Error parsing type: , name: isFromAutocomplete
    // Error parsing type: , name: mixpanelExtra
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: advancedSearchButton
    // Error parsing type: , name: advancedSearchController
    // Error parsing type: , name: $__lazy_storage_$_gigDescriptionDummyCell
    // Error parsing type: , name: _noResultsView
    // Error parsing type: , name: isPlayingNowViewController
    // Error parsing type: , name: usersSearchVC
    // Error parsing type: , name: $__lazy_storage_$_impressionManager
    // Error parsing type: , name: analyticsImpressionHelper
    // Error parsing type: , name: canSendShowEventAgain
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)clickFilter;
- (void)handleStreamPlayerPlaybackStateDidChangeNotificationWithNotification:(id)arg1;
- (void)handleStreamPlayerTrackDidChangeNotificationWithNotification:(id)arg1;
- (void)handleStreamPlayerTrackTimeDidChangeNotificationWithNotification:(id)arg1;
- (void)loginOrRegisterSucceed:(id)arg1;
- (void)analyticsManagerReportShowEvent;
- (id)analyticsManagerScreenName;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1 subcategory:(id)arg2;
- (id)initWithCategoryItem:(id)arg1 subCategoryItem:(id)arg2 filterType:(long long)arg3 filters:(id)arg4 encodedFilters:(id)arg5 nestedSubCategoryId:(id)arg6 proOnly:(_Bool)arg7;
- (id)initWithSearchQuery:(id)arg1 filterType:(long long)arg2;
- (id)initWithSearchQuery:(id)arg1 filterType:(long long)arg2 filters:(id)arg3 encodedFilters:(id)arg4 categoryItem:(id)arg5 subCategoryItem:(id)arg6 nestedSubCategoryId:(id)arg7 proOnly:(_Bool)arg8;
@property(nonatomic, copy) NSDictionary *mixpanelExtra;
@property(nonatomic) _Bool isFromAutocomplete; // @synthesize isFromAutocomplete;
@property(nonatomic, copy) NSString *searchQuery;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8AppStore29StoreCollectionViewController.h"

#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "_TtP11AppStoreKit29TrendingSearchesPresenterView_-Protocol.h"

@interface _TtC8AppStore20SearchViewController : _TtC8AppStore29StoreCollectionViewController <_TtP11AppStoreKit29TrendingSearchesPresenterView_, UISearchControllerDelegate, UISearchResultsUpdating>
{
    // Error parsing type: , name: objectGraph
    // Error parsing type: , name: storeDataProvider
    // Error parsing type: , name: artworkLoader
    // Error parsing type: , name: advertisingDataProvider
    // Error parsing type: , name: actionRunner
    // Error parsing type: , name: searchController
    // Error parsing type: , name: searchResultsContainerViewController
    // Error parsing type: , name: dimmingView
    // Error parsing type: , name: tapGestureRecognizer
    // Error parsing type: , name: facetNavigationController
    // Error parsing type: , name: trendingSearchesPresenter
    // Error parsing type: , name: flowLayout
    // Error parsing type: , name: trendingSearchesCollectionViewDataSource
    // Error parsing type: , name: trendingSearchesCollectionViewDelegate
    // Error parsing type: , name: isTrendingEnabled
    // Error parsing type: , name: allowsResultFiltering
    // Error parsing type: , name: pendingSearchAction
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)showWithUpdateError:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)reloadData;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)presentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)dimmingViewTappedWithGestureRecognizer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end


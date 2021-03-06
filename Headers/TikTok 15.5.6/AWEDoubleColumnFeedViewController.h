//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemeDetailTableViewControllerDelegate-Protocol.h"
#import "AWEPreviewable-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEListDataController, AWEUILoadingView, NSMutableDictionary, NSString, UICollectionView;
@protocol AWEDoubleColumnFeedDataController, AWEUILoadingProvider, UIViewControllerPreviewing;

@interface AWEDoubleColumnFeedViewController : UIViewController <AWEPreviewable, UICollectionViewDelegate, UICollectionViewDataSource, AWEZoomTransitionOuterContextProvider, AWEAwemeDetailTableViewControllerDelegate>
{
    _Bool _useSameDataSourceInInnerFeed;
    _Bool _shouldFocusFirstItem;
    _Bool _showSkeletonLoading;
    _Bool _loading;
    _Bool _isRequesting;
    long long _minViewVideoIndexInInnerFeed;
    long long _maxViewVideoIndexInInnerFeed;
    id <AWEUILoadingProvider> _loadingProvider;
    CDUnknownBlockType _feedInitialCompletion;
    CDUnknownBlockType _cellClassAtIndexPath;
    CDUnknownBlockType _configCell;
    CDUnknownBlockType _configFeedDetail;
    CDUnknownBlockType _willDisplayItem;
    CDUnknownBlockType _didSelectItem;
    CDUnknownBlockType _previewItem;
    CDUnknownBlockType _configEmptyPage;
    CDUnknownBlockType _scrollViewWillBeginDragging;
    CDUnknownBlockType _scrollViewDidEndDragging;
    CDUnknownBlockType _willBeginRefresh;
    UICollectionView *_collectionView;
    AWEListDataController<AWEDoubleColumnFeedDataController> *_dataController;
    AWEUILoadingView *_loadingView;
    id <UIViewControllerPreviewing> _forceTouchToken;
    long long _lastSelectedSection;
    NSMutableDictionary *_registerCellInfo;
}

@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSMutableDictionary *registerCellInfo; // @synthesize registerCellInfo=_registerCellInfo;
@property(nonatomic) long long lastSelectedSection; // @synthesize lastSelectedSection=_lastSelectedSection;
@property(retain, nonatomic) id <UIViewControllerPreviewing> forceTouchToken; // @synthesize forceTouchToken=_forceTouchToken;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEListDataController<AWEDoubleColumnFeedDataController> *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType willBeginRefresh; // @synthesize willBeginRefresh=_willBeginRefresh;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidEndDragging; // @synthesize scrollViewDidEndDragging=_scrollViewDidEndDragging;
@property(copy, nonatomic) CDUnknownBlockType scrollViewWillBeginDragging; // @synthesize scrollViewWillBeginDragging=_scrollViewWillBeginDragging;
@property(copy, nonatomic) CDUnknownBlockType configEmptyPage; // @synthesize configEmptyPage=_configEmptyPage;
@property(nonatomic) _Bool showSkeletonLoading; // @synthesize showSkeletonLoading=_showSkeletonLoading;
@property(nonatomic) _Bool shouldFocusFirstItem; // @synthesize shouldFocusFirstItem=_shouldFocusFirstItem;
@property(nonatomic) _Bool useSameDataSourceInInnerFeed; // @synthesize useSameDataSourceInInnerFeed=_useSameDataSourceInInnerFeed;
@property(copy, nonatomic) CDUnknownBlockType previewItem; // @synthesize previewItem=_previewItem;
@property(copy, nonatomic) CDUnknownBlockType didSelectItem; // @synthesize didSelectItem=_didSelectItem;
@property(copy, nonatomic) CDUnknownBlockType willDisplayItem; // @synthesize willDisplayItem=_willDisplayItem;
@property(copy, nonatomic) CDUnknownBlockType configFeedDetail; // @synthesize configFeedDetail=_configFeedDetail;
@property(copy, nonatomic) CDUnknownBlockType configCell; // @synthesize configCell=_configCell;
@property(copy, nonatomic) CDUnknownBlockType cellClassAtIndexPath; // @synthesize cellClassAtIndexPath=_cellClassAtIndexPath;
@property(copy, nonatomic) CDUnknownBlockType feedInitialCompletion; // @synthesize feedInitialCompletion=_feedInitialCompletion;
@property(nonatomic) __weak id <AWEUILoadingProvider> loadingProvider; // @synthesize loadingProvider=_loadingProvider;
@property(nonatomic) long long maxViewVideoIndexInInnerFeed; // @synthesize maxViewVideoIndexInInnerFeed=_maxViewVideoIndexInInnerFeed;
@property(nonatomic) long long minViewVideoIndexInInnerFeed; // @synthesize minViewVideoIndexInInnerFeed=_minViewVideoIndexInInnerFeed;
- (void).cxx_destruct;
- (void)refreshData;
- (void)refreshCollectionView;
- (void)handleBroadcastNotification:(id)arg1;
- (id)collectionViewLayout;
- (void)didCommitViewController:(id)arg1;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (struct CGRect)previewingSourceRectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)localizationsLanguageChanged;
- (void)detailTableViewController:(id)arg1 scrollDidEndAtIndexPath:(id)arg2 model:(id)arg3;
- (id)detailControllerWithDiscoverModel:(id)arg1 indexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollToTopOrRefresh;
- (void)loadMore;
- (void)resetFooter;
- (void)refreshDataWithLoadingView:(_Bool)arg1;
- (void)refreshDataWithLoadingView:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)modelAtIndexPath:(id)arg1;
- (id)models;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


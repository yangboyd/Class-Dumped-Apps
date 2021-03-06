//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESearchBaseViewController.h"

#import "AWEAVPlayerWrapperDelegate-Protocol.h"
#import "AWEAwemeDetailTableViewControllerDelegate-Protocol.h"
#import "AWEModernFullscreenTransitionOuterContextProvider-Protocol.h"
#import "AWEPreviewable-Protocol.h"
#import "AWESearchDynamicTableViewCellDelegate-Protocol.h"
#import "AWESearchMiddleProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGListSingleSectionControllerDelegate-Protocol.h"
#import "TikTokSearchDynamicSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEAVPlayerWrapper, AWEGeneralSearchDataController, AWEMusicModel, AWESearchAladdinUserMusicListView, AWESearchAllManager, AWESearchFeedAutoPlayManager, AWESearchUser, IGListAdapter, IGListAdapterUpdater, IGListCollectionView, NSMutableArray, NSMutableDictionary, NSObject, NSString, UIView;
@protocol AWEDynamicCoverStrategyProtocol, UIViewControllerPreviewing;

@interface AWEDoubleColumnGeneralSearchViewController : AWESearchBaseViewController <UICollectionViewDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGListSingleSectionControllerDelegate, AWEPreviewable, AWEZoomTransitionOuterContextProvider, AWEUserMessage, AWESearchMiddleProtocol, AWEAVPlayerWrapperDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEModernFullscreenTransitionOuterContextProvider, AWESearchDynamicTableViewCellDelegate, TikTokSearchDynamicSectionControllerDelegate>
{
    AWESearchAllManager *_followManager;
    _Bool _isPullRefresh;
    _Bool _clickItem;
    NSMutableArray *_dataSource;
    IGListAdapter *_listAdapter;
    IGListCollectionView *_collectionView;
    AWESearchUser *_searchUser1;
    AWEGeneralSearchDataController *_dataController;
    IGListAdapterUpdater *_listAdapterUpdater;
    NSMutableDictionary *_dataControllerDataSourceIndexToShowIndex;
    NSMutableDictionary *_showIndexToDataControllerDataSourceIndex;
    id <UIViewControllerPreviewing> _forceTouchToken;
    UIView *_headerView;
    long long _entranceIndex;
    AWEAVPlayerWrapper *_audioPlayer;
    AWEMusicModel *_selectedMusicModel;
    unsigned long long _selectedMusicStatus;
    AWESearchAladdinUserMusicListView *_musicListView;
    long long _loadMoreTriggerCount;
    NSObject<AWEDynamicCoverStrategyProtocol> *_dynamicCoverStrategyManager;
    long long _videoCellCount;
    AWESearchFeedAutoPlayManager *_autoPlayManager;
    long long _transitionToIndex;
    long long _transitionIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long transitionIndex; // @synthesize transitionIndex=_transitionIndex;
@property(nonatomic) long long transitionToIndex; // @synthesize transitionToIndex=_transitionToIndex;
@property(retain, nonatomic) AWESearchFeedAutoPlayManager *autoPlayManager; // @synthesize autoPlayManager=_autoPlayManager;
@property(nonatomic) _Bool clickItem; // @synthesize clickItem=_clickItem;
@property(nonatomic) long long videoCellCount; // @synthesize videoCellCount=_videoCellCount;
@property(retain, nonatomic) NSObject<AWEDynamicCoverStrategyProtocol> *dynamicCoverStrategyManager; // @synthesize dynamicCoverStrategyManager=_dynamicCoverStrategyManager;
@property(nonatomic) long long loadMoreTriggerCount; // @synthesize loadMoreTriggerCount=_loadMoreTriggerCount;
@property(nonatomic) __weak AWESearchAladdinUserMusicListView *musicListView; // @synthesize musicListView=_musicListView;
@property(nonatomic) unsigned long long selectedMusicStatus; // @synthesize selectedMusicStatus=_selectedMusicStatus;
@property(retain, nonatomic) AWEMusicModel *selectedMusicModel; // @synthesize selectedMusicModel=_selectedMusicModel;
@property(retain, nonatomic) AWEAVPlayerWrapper *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) long long entranceIndex; // @synthesize entranceIndex=_entranceIndex;
@property(nonatomic) _Bool isPullRefresh; // @synthesize isPullRefresh=_isPullRefresh;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <UIViewControllerPreviewing> forceTouchToken; // @synthesize forceTouchToken=_forceTouchToken;
@property(retain, nonatomic) NSMutableDictionary *showIndexToDataControllerDataSourceIndex; // @synthesize showIndexToDataControllerDataSourceIndex=_showIndexToDataControllerDataSourceIndex;
@property(retain, nonatomic) NSMutableDictionary *dataControllerDataSourceIndexToShowIndex; // @synthesize dataControllerDataSourceIndexToShowIndex=_dataControllerDataSourceIndexToShowIndex;
@property(retain, nonatomic) IGListAdapterUpdater *listAdapterUpdater; // @synthesize listAdapterUpdater=_listAdapterUpdater;
@property(retain, nonatomic) AWEGeneralSearchDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) AWESearchUser *searchUser1; // @synthesize searchUser1=_searchUser1;
@property(retain, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void)addProcessIdToRouterParams:(id)arg1;
- (void)addProcessIdToTrackParams:(id)arg1;
- (void)didScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didScrollViewDidEndDecelerating:(id)arg1;
- (void)didScrollViewWillBeginDragging:(id)arg1;
- (void)configHeaderView:(id)arg1;
- (void)handleSearchKeywordDidChangedNotification:(id)arg1;
- (_Bool)cellCompleteVisibleWithIndex:(long long)arg1 animation:(_Bool *)arg2;
- (void)clickAwemeModels:(id)arg1 atIndex:(long long)arg2 delegate:(id)arg3 withModel:(id)arg4;
- (void)suggestWordDidTapped:(id)arg1;
- (void)suggestWordDidTapped:(id)arg1 extraLogParams:(id)arg2;
- (void)hotSearchWordDidTapped:(id)arg1 displayWord:(id)arg2;
- (void)historyWordDidTapped:(id)arg1;
- (id)awesst_enterFrom;
- (id)sectionBindedData;
- (void)trackFreqControlShow:(unsigned long long)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (void)setAweui_viewControllerState:(unsigned long long)arg1;
- (id)enterFrom;
- (id)referString;
- (id)tabConfig;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (struct CGRect)previewingSourceRectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)AWESearchDynamicCardCollectionViewCell:(id)arg1 didUpdateContentSize:(struct CGSize)arg2;
- (void)trackClickEventWithChallengeModel:(id)arg1 clickFrom:(id)arg2 section:(long long)arg3;
- (void)trackClickEventWithUserModel:(id)arg1 clickFrom:(id)arg2 section:(long long)arg3;
- (void)trackClickEventWithMusicModel:(id)arg1 index:(long long)arg2 withLogExtra:(id)arg3;
- (void)openChallengeDetailPageWithModel:(id)arg1 clickFrom:(id)arg2 section:(long long)arg3;
- (void)openUserProfilePageWithModel:(id)arg1 clickFrom:(id)arg2 section:(long long)arg3 fromScene:(long long)arg4;
- (void)singleTapEnterDetail:(long long)arg1;
- (_Bool)isSingleTapEnterDetail;
- (void)videoPlayerStartPlay;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg1;
- (void)modernTransitionUpdateOffset:(long long)arg1 isScrolled:(_Bool)arg2;
- (id)modernTransitionContext;
- (void)didSelectDynamicSectionController:(id)arg1 withObject:(id)arg2;
- (void)didSelectWithObjct:(id)arg1 section:(long long)arg2;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (void)p_handleSelectSectionController:(id)arg1 withObject:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)contextSupportSortAndFilter;
- (id)contextSearchType;
- (id)contextSearchKeyWord;
- (id)contextSearchId;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)filterElementsForArray:(id)arg1;
- (void)insertDataSourceInOddFromViewModel:(id)arg1;
- (id)videoFrameWithModel:(id)arg1;
- (long long)recalculateFirstVideoIndexWithList:(id)arg1;
- (void)addDivideLine;
- (void)appendDataSourceFromList:(id)arg1;
- (void)transformDataSource;
- (void)checkHarmfulCategory;
- (_Bool)checkHitLimit;
- (void)changeSearchBarText:(id)arg1;
- (void)reset;
- (void)becomeActive;
- (void)saveSearchWord:(id)arg1;
- (void)loadMore;
- (void)fetchDataWithKeyWord:(id)arg1 enterFrom:(id)arg2 extraLogParams:(id)arg3 isSearchByUserClick:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)configureTableHeaderView:(_Bool)arg1;
- (void)playerWrapper:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (id)musicCellForMusicModel:(id)arg1;
- (void)updateCellStatus:(unsigned long long)arg1 ofMusic:(id)arg2;
- (void)stopMusic;
- (void)playMusicWithModel:(id)arg1;
- (void)didSelectMusicWithModel:(id)arg1 sectionIndex:(long long)arg2;
- (void)configurePlayer;
- (void)resetSectionVideoPlayCellController;
- (void)fetchData;
- (void)refreshAfterLoginIfNeeded;
- (void)configureLoad;
- (void)configureUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) AWESearchAllManager *followManager; // @dynamic followManager;
- (void)followButtonTapped:(id)arg1 indexPath:(id)arg2;
- (void)unfollowUser:(id)arg1 indexPath:(id)arg2;
- (void)followUser:(id)arg1 indexPath:(id)arg2;
- (void)updateFollowStatusWithStatus:(long long)arg1 withUserId:(id)arg2 atIndexPath:(id)arg3;
- (void)updateFollowStatusWithStatus:(long long)arg1 withUserInfo:(id)arg2 atIndexPath:(id)arg3;
- (void)updateFollowStatusWithStatus:(long long)arg1 user:(id)arg2;
- (void)updateFollowStatusWithStatus:(long long)arg1 userID:(id)arg2;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)addProcessIdToRouterParams:(id)arg1;
- (void)addProcessIdToTrackParams:(id)arg1;
- (void)didScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didScrollViewDidEndDecelerating:(id)arg1;
- (void)didScrollViewWillBeginDragging:(id)arg1;
- (void)configHeaderView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


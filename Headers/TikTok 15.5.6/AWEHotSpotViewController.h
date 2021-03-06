//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemeHotSearchControllerDelegate-Protocol.h"
#import "AWEHotSpotBarrageViewControllerDelegate-Protocol.h"
#import "AWEHotSpotListControllerDelegate-Protocol.h"
#import "AWEHotSpotVideoControllerDelegate-Protocol.h"
#import "AWEModernFullscreenTransitionOuterContextProvider-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWECommentListViewController, AWEHotSpotBackgroundView, AWEHotSpotHeaderView, AWEHotSpotListCollectionViewController, AWEHotSpotVideoCollectionViewController, AWEHotSpotViewModel, NSString, UIView;

@interface AWEHotSpotViewController : UIViewController <BTDRouterViewControllerProtocol, AWEHotSpotListControllerDelegate, AWEHotSpotVideoControllerDelegate, AWEModernFullscreenTransitionOuterContextProvider, AWEAwemeHotSearchControllerDelegate, AWEHotSpotBarrageViewControllerDelegate>
{
    unsigned long long enterSecondPageType;
    UIView *_containerView;
    double _enterTime;
    AWEHotSpotViewModel *_viewModel;
    AWEHotSpotHeaderView *_headerView;
    AWEHotSpotBackgroundView *_backgroundView;
    AWEHotSpotListCollectionViewController *_listCollectionViewController;
    AWEHotSpotVideoCollectionViewController *_videoCollectionViewController;
    AWECommentListViewController *_commentVC;
    NSString *_backToSchema;
}

+ (void)__awe__codeRunnerRun_66;
@property(copy, nonatomic) NSString *backToSchema; // @synthesize backToSchema=_backToSchema;
@property(retain, nonatomic) AWECommentListViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(retain, nonatomic) AWEHotSpotVideoCollectionViewController *videoCollectionViewController; // @synthesize videoCollectionViewController=_videoCollectionViewController;
@property(retain, nonatomic) AWEHotSpotListCollectionViewController *listCollectionViewController; // @synthesize listCollectionViewController=_listCollectionViewController;
@property(retain, nonatomic) AWEHotSpotBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) AWEHotSpotHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) AWEHotSpotViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long enterSecondPageType; // @synthesize enterSecondPageType;
- (void).cxx_destruct;
- (void)trackEventStayTime;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)configureObservers;
- (id)modernTransitionContext;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg1;
- (void)modernTransitionUpdateOffset:(long long)arg1 isScrolled:(_Bool)arg2;
- (void)enterDetailHotTableViewControllerWithIndex:(long long)arg1 dataSource:(id)arg2;
- (void)scrollToVideo:(id)arg1;
- (void)scrollToNewSpotKeyword:(id)arg1;
- (void)loadMoreVideosForKeyword:(id)arg1;
- (void)loadPreviousVideosForKeyword:(id)arg1;
- (void)refreshVideoForModel:(id)arg1;
- (void)refreshAllHotSpot;
- (long long)firstVideoIndex;
- (void)changePageState:(_Bool)arg1 index:(long long)arg2;
- (id)allHotSpotsArray;
- (void)detailControllerScrollToNewVideo:(id)arg1;
- (void)detailControllerScrollToNewSpotKeyword:(id)arg1 currentKeyword:(id)arg2;
- (void)hotSpotListDidTapped:(id)arg1 indexPath:(id)arg2;
- (void)showExpandDetailView;
- (void)didSelectComment:(id)arg1 dataArray:(id)arg2;
- (void)fetchData;
- (void)setupBinding;
- (void)setupUI;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEVideoFeedViewController.h"

#import "AWESearchMiddleProtocol-Protocol.h"

@class AWEGeneralSearchDataController, AWESearchMiddleViewController, AWEUILoadingView, NSString, UISearchBar;

@interface AWENearbySearchResultViewController : AWEVideoFeedViewController <AWESearchMiddleProtocol>
{
    UISearchBar *_searchBar;
    AWESearchMiddleViewController *_searchMiddleViewController;
    AWEGeneralSearchDataController *_searchDataController;
    AWEUILoadingView *_loadingView;
    NSString *_keyWord;
}

@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEGeneralSearchDataController *searchDataController; // @synthesize searchDataController=_searchDataController;
@property(retain, nonatomic) AWESearchMiddleViewController *searchMiddleViewController; // @synthesize searchMiddleViewController=_searchMiddleViewController;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (id)dataController;
- (id)sectionBindedData;
- (void)historyWordDidTapped:(id)arg1;
- (struct UIEdgeInsets)listViewSectionInsets;
- (double)listViewInteritemSpacing;
- (double)listViewColumnSpacing;
- (double)listViewCellWidth;
- (id)transferModelType:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (_Bool)isShowingMiddleView;
- (void)showPlaceholderViewOrSugViewWithText:(id)arg1;
- (void)p_fetchData;
- (void)searchWithKeyword:(id)arg1 tabType:(unsigned long long)arg2 enterMethod:(id)arg3;
- (void)hidePlaceholderOrSugViewAnimationWithCompletion;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)p_nearbySearchUserJump;
- (void)p_configUI;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


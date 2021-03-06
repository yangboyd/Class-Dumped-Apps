//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWERouterViewControllerProtocol-Protocol.h"
#import "AWESlidingViewControllerDelegate-Protocol.h"
#import "HTSVideoAudioSupplier-Protocol.h"

@class AWEASSMusicNavView, AWECategoryMusicListManager, AWESlidingTabbarView, AWETabSlidingViewController, AWEUILoadingView, NSIndexPath, NSMutableArray, NSString;

@interface AWEASSNewCategoryMusicListViewController : UIViewController <AWERouterViewControllerProtocol, AWESlidingViewControllerDelegate, HTSVideoAudioSupplier>
{
    _Bool _isCommerce;
    _Bool _shouldHideCellMoreButton;
    _Bool _shouldShowRank;
    CDUnknownBlockType _completion;
    NSMutableArray *_titlesArray;
    NSMutableArray *_listVCArray;
    NSMutableArray *_idStrs;
    long long _index;
    NSIndexPath *_selectedindexPath;
    AWESlidingTabbarView *_tabView;
    AWETabSlidingViewController *_slidingViewController;
    AWECategoryMusicListManager *_musicManager;
    AWEUILoadingView *_loadingView;
    AWEASSMusicNavView *_navView;
    NSString *_categoryName;
    NSString *_cid;
    NSString *_enterMethod;
    NSString *_previousPage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowRank; // @synthesize shouldShowRank=_shouldShowRank;
@property(nonatomic) _Bool shouldHideCellMoreButton; // @synthesize shouldHideCellMoreButton=_shouldHideCellMoreButton;
@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) _Bool isCommerce; // @synthesize isCommerce=_isCommerce;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) AWEASSMusicNavView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWECategoryMusicListManager *musicManager; // @synthesize musicManager=_musicManager;
@property(retain, nonatomic) AWETabSlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
@property(retain, nonatomic) AWESlidingTabbarView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) NSIndexPath *selectedindexPath; // @synthesize selectedindexPath=_selectedindexPath;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray *idStrs; // @synthesize idStrs=_idStrs;
@property(retain, nonatomic) NSMutableArray *listVCArray; // @synthesize listVCArray=_listVCArray;
@property(retain, nonatomic) NSMutableArray *titlesArray; // @synthesize titlesArray=_titlesArray;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)reload;
- (_Bool)isIndexValid:(long long)arg1;
- (void)slidingViewController:(id)arg1 didSelectIndex:(long long)arg2 transitionType:(long long)arg3;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(id)arg1;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)backBtnClicked:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)p_setupUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)listVCAtIndex:(long long)arg1;
- (void)initListVCArrayWithCommerce:(_Bool)arg1 withFirstTabMusicList:(id)arg2 hasMore:(id)arg3 cursor:(id)arg4;
- (void)loadTabData;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


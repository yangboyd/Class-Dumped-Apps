//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSVideoAudioSupplier-Protocol.h"

@class AWEASSMusicListViewController, AWECategoryMusicListManager, AWEUILoadingView, NSString, UIButton;

@interface AWEASSTabMusicListViewController : UIViewController <HTSVideoAudioSupplier>
{
    _Bool _shouldShowUploadMusicButton;
    _Bool _shouldHideCellMoreButton;
    _Bool _shouldShowRank;
    _Bool _hasMore;
    _Bool _isCommerce;
    CDUnknownBlockType _completion;
    NSString *_cid;
    NSString *_categoryName;
    NSString *_enterMethod;
    NSString *_previousPage;
    long long _index;
    long long _cursor;
    AWEASSMusicListViewController *_listVC;
    AWEUILoadingView *_loadingView;
    AWECategoryMusicListManager *_musicManager;
    UIButton *_reloadButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(nonatomic) _Bool isCommerce; // @synthesize isCommerce=_isCommerce;
@property(retain, nonatomic) AWECategoryMusicListManager *musicManager; // @synthesize musicManager=_musicManager;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEASSMusicListViewController *listVC; // @synthesize listVC=_listVC;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool shouldShowRank; // @synthesize shouldShowRank=_shouldShowRank;
@property(nonatomic) _Bool shouldHideCellMoreButton; // @synthesize shouldHideCellMoreButton=_shouldHideCellMoreButton;
@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(nonatomic) _Bool shouldShowUploadMusicButton; // @synthesize shouldShowUploadMusicButton=_shouldShowUploadMusicButton;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)reload;
- (id)aweui_emptyPageBelowView;
- (void)setDataList:(id)arg1;
- (void)pause;
- (double)footerInset;
- (void)hideLoadingView;
- (void)showLoadingView;
- (_Bool)shouldHideNoMoreText;
- (void)transformAndSetListData;
- (void)p_endRefreshing;
- (void)p_loadMoreData;
- (void)p_refreshData;
- (void)p_setupUI;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCategoryId:(id)arg1 isCommerce:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IESLiveRankListTopViewReactions-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class HTSEventContext, HTSLiveRankListStore, IESLiveRankListModel, IESLiveRankListTopView, NSArray, NSString, UIScrollView, UIView;
@protocol HTSLiveRankListActions, IESLiveMTInternalRouter;

@interface IESLiveRankListViewController : UIViewController <IESLiveRankListTopViewReactions, UIScrollViewDelegate>
{
    _Bool _showBack;
    _Bool _showHelp;
    _Bool _showLastHour;
    _Bool _isFirstAppear;
    _Bool _isNewStyleEnabled;
    HTSEventContext *_context;
    HTSLiveRankListStore *_store;
    unsigned long long _defaultType;
    NSArray *_types;
    IESLiveRankListModel *_listModel;
    double _topHCornerRadius;
    IESLiveRankListTopView *_topView;
    UIScrollView *_scrollView;
    UIView *_scrollContainerView;
    NSArray *_listViews;
    long long _currentIndex;
    id <IESLiveMTInternalRouter> _internalRouter;
    id <HTSLiveRankListActions> _actionCreator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNewStyleEnabled; // @synthesize isNewStyleEnabled=_isNewStyleEnabled;
@property(retain, nonatomic) id <HTSLiveRankListActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(retain, nonatomic) id <IESLiveMTInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSArray *listViews; // @synthesize listViews=_listViews;
@property(retain, nonatomic) UIView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) IESLiveRankListTopView *topView; // @synthesize topView=_topView;
@property(nonatomic) double topHCornerRadius; // @synthesize topHCornerRadius=_topHCornerRadius;
@property(nonatomic) _Bool showLastHour; // @synthesize showLastHour=_showLastHour;
@property(nonatomic) _Bool showHelp; // @synthesize showHelp=_showHelp;
@property(nonatomic) _Bool showBack; // @synthesize showBack=_showBack;
@property(retain, nonatomic) IESLiveRankListModel *listModel; // @synthesize listModel=_listModel;
@property(copy, nonatomic) NSArray *types; // @synthesize types=_types;
@property(nonatomic) unsigned long long defaultType; // @synthesize defaultType=_defaultType;
@property(retain, nonatomic) HTSLiveRankListStore *store; // @synthesize store=_store;
@property(retain, nonatomic) HTSEventContext *context; // @synthesize context=_context;
- (void)scrollViewDidScroll:(id)arg1;
- (void)helpButtonAction:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)didSelectIndex:(long long)arg1;
- (void)scrollToIndex:(long long)arg1;
- (void)updateListModel:(id)arg1 forType:(unsigned long long)arg2;
- (void)setupContainerView;
- (void)setupTopView;
- (void)setupViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


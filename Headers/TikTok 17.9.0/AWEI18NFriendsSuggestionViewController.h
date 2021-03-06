//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEButton, AWEI18NUserRecommendDataController, NSString, UILabel, UITableView, UIView;

@interface AWEI18NFriendsSuggestionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _configReady;
    _Bool _isShowingPanel;
    CDUnknownBlockType _completion;
    UITableView *_tableView;
    UIView *_headerView;
    UILabel *_descriptionLabel;
    UILabel *_hintLabel;
    double _titleLabelShownEndOffset;
    AWEI18NUserRecommendDataController *_dataController;
    long long _originCellCount;
    double _descriptionFirstLineTopMargin;
    AWEButton *_confirmButton;
    UIView *_confirmPanelView;
    long long _followCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) _Bool isShowingPanel; // @synthesize isShowingPanel=_isShowingPanel;
@property(retain, nonatomic) UIView *confirmPanelView; // @synthesize confirmPanelView=_confirmPanelView;
@property(retain, nonatomic) AWEButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) double descriptionFirstLineTopMargin; // @synthesize descriptionFirstLineTopMargin=_descriptionFirstLineTopMargin;
@property(nonatomic) long long originCellCount; // @synthesize originCellCount=_originCellCount;
@property(retain, nonatomic) AWEI18NUserRecommendDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) _Bool configReady; // @synthesize configReady=_configReady;
@property(nonatomic) double titleLabelShownEndOffset; // @synthesize titleLabelShownEndOffset=_titleLabelShownEndOffset;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)trackEventFollowRecommendWithActionType:(id)arg1 user:(id)arg2 followType:(id)arg3;
- (void)setHeaderTilteAlpha:(double)arg1;
- (void)p_showConfirmPanel;
- (void)finishAction;
- (void)skipAction;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


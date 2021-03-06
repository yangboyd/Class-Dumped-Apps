//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEFilmTVEpisodeDataController, AWEGeneralFilmTVSourceModel, AWEGeneralSearchModel, NSArray, NSString, UIButton, UILabel, UITableView;

@interface AWESearchFIlmTVEpisodeSheet : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _tapBackgroundToDismiss;
    CDUnknownBlockType _buttonClickedBlock;
    AWEGeneralSearchModel *_searchModel;
    AWEGeneralFilmTVSourceModel *_sourceModel;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    UIView *_divideLine;
    UIView *_actionSheet;
    UITableView *_tableView;
    NSArray *_modelArray;
    UIView *_headerView;
    UILabel *_headTitleLabel;
    UILabel *_headSourceLabel;
    UIView *_backgroundView;
    AWEFilmTVEpisodeDataController *_dataController;
}

@property(retain, nonatomic) AWEFilmTVEpisodeDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *headSourceLabel; // @synthesize headSourceLabel=_headSourceLabel;
@property(retain, nonatomic) UILabel *headTitleLabel; // @synthesize headTitleLabel=_headTitleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEGeneralFilmTVSourceModel *sourceModel; // @synthesize sourceModel=_sourceModel;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(nonatomic) _Bool tapBackgroundToDismiss; // @synthesize tapBackgroundToDismiss=_tapBackgroundToDismiss;
@property(copy, nonatomic) CDUnknownBlockType buttonClickedBlock; // @synthesize buttonClickedBlock=_buttonClickedBlock;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dismiss;
- (void)show;
- (id)buildSeriesArray:(id)arg1;
- (void)updateTableView;
- (void)loadMoreDataIfNeed;
- (void)fetchData;
- (void)configModel:(id)arg1 withSourceModel:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


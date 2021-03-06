//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, ProgramGuideServiceManager, UIActivityIndicatorView, UIImageView, UILabel, UITableView;
@protocol PGShowsListControllerDelegate;

@interface PGShowsListController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <PGShowsListControllerDelegate> _delegate;
    NSString *_passedInShowSourceCode;
    NSString *_currentChannelSalesDiv;
    NSDate *_currentDate;
    int *_currentCountry;
    UITableView *_tableView;
    UIImageView *_imgTopBarBackground;
    UILabel *_titleLabel;
    UILabel *_lblMessage;
    UIActivityIndicatorView *_busyIndicatorView;
    ProgramGuideServiceManager *_programGuideServiceManager;
    NSMutableArray *_showsList;
    NSString *_allDayEventText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *allDayEventText; // @synthesize allDayEventText=_allDayEventText;
@property(retain, nonatomic) NSMutableArray *showsList; // @synthesize showsList=_showsList;
@property(retain) ProgramGuideServiceManager *programGuideServiceManager; // @synthesize programGuideServiceManager=_programGuideServiceManager;
@property(retain, nonatomic) UIActivityIndicatorView *busyIndicatorView; // @synthesize busyIndicatorView=_busyIndicatorView;
@property(retain, nonatomic) UILabel *lblMessage; // @synthesize lblMessage=_lblMessage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgTopBarBackground; // @synthesize imgTopBarBackground=_imgTopBarBackground;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int *currentCountry; // @synthesize currentCountry=_currentCountry;
@property(retain) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain) NSString *currentChannelSalesDiv; // @synthesize currentChannelSalesDiv=_currentChannelSalesDiv;
@property(retain) NSString *passedInShowSourceCode; // @synthesize passedInShowSourceCode=_passedInShowSourceCode;
@property(nonatomic) __weak id <PGShowsListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isItTodaysProgramGuide;
- (void)setLabel:(id)arg1;
- (void)updateTheme;
- (void)hideBusyView;
- (void)showBusyView;
- (void)programGuideServiceManager:(id)arg1 loadedWithError:(id)arg2;
- (void)programGuide:(id)arg1 loadedWithData:(id)arg2;
- (void)reloadData;
- (void)scrollToShow:(id)arg1;
- (void)scrollToIndexPath:(id)arg1;
- (id)getIndexPathToScrollByCurrentTime;
- (id)getIndexPathToScrollBySourceCode:(id)arg1;
- (id)getIndexPathToScrollByCurrentShow;
- (id)getIndexPathToScrollByBlock:(CDUnknownBlockType)arg1;
- (void)loadShowDataWithDate:(id)arg1;
- (void)clearShowData;
- (void)fetchProgramDetailsGuideForDate:(id)arg1;
- (void)fetchProgramDetailsGuideForDateImp:(id)arg1;
- (double)delayLoadingOfContentInSeconds;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


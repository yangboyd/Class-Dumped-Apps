//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseViewController.h"

@class UITableView;

@interface _TtC6fiverr35FVRCollectionListViewViewController : FVRBaseViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: $__lazy_storage_$_refreshControl
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: fetchinfCollectionsInProgress
    // Error parsing type: , name: currentSortType
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshFired:(id)arg1;
- (void)sortButtonPressed;
- (id)analyticsManagerScreenName;
- (void)viewDidLoad;
@property(nonatomic, retain) UITableView *tableView; // @synthesize tableView;

@end


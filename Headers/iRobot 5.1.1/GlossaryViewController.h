//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface GlossaryViewController : BaseAssetViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_overview;
    NSArray *_glossaryItems;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *glossaryItems; // @synthesize glossaryItems=_glossaryItems;
@property(retain, nonatomic) NSString *overview; // @synthesize overview=_overview;
- (void)configureAccessibility;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutTableView;
- (void)setupTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithGlossaryItems:(id)arg1;
- (id)initWithOverview:(id)arg1 glossaryItems:(id)arg2;
- (id)initWithTitle:(id)arg1 overview:(id)arg2 glossaryItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


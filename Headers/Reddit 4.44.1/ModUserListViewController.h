//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchableTableViewController.h"

#import "ModUserTableCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ModUserListNetworkSource, NSArray, NSString, Subreddit, UIViewController;

@interface ModUserListViewController : SearchableTableViewController <UITableViewDelegate, UITableViewDataSource, ModUserTableCellDelegate>
{
    _Bool _showOverflowButtonInCells;
    Subreddit *_subreddit;
    NSString *_currentSearchString;
    NSArray *_searchResults;
    UIViewController *_fromVC;
}

@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) _Bool showOverflowButtonInCells; // @synthesize showOverflowButtonInCells=_showOverflowButtonInCells;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(copy, nonatomic) NSString *currentSearchString; // @synthesize currentSearchString=_currentSearchString;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
- (void).cxx_destruct;
- (id)userAtIndex:(long long)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)modUserTableCell:(id)arg1 didTapOverflowButton:(id)arg2 forUser:(id)arg3;
- (void)userSelected:(id)arg1;
@property(readonly, nonatomic) ModUserListNetworkSource *modUserListingNetworkSource;
- (void)viewDidLoad;
- (id)initWithSubreddit:(id)arg1 presenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


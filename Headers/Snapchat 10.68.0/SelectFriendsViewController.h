//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "FriendsTableIndexDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString, SCFriendsTableIndex, SCSearchBar, UIImage, UILabel, UITableView, UIView;

@interface SelectFriendsViewController : SCGenericSettingsViewController <SCSearchBarDelegate, UITableViewDelegate, UITableViewDataSource, FriendsTableIndexDelegate, UITextFieldDelegate, SCPageNameLogging>
{
    _Bool _searchBarNeedsTopBottomBorders;
    _Bool _searching;
    UIView *_containerView;
    SCSearchBar *_searchBar;
    UIImage *_searchBarXButtonImage;
    UIView *_tableHeader;
    UILabel *_tableHeaderLabel;
    SCFriendsTableIndex *_tableIndex;
    UITableView *_tableView;
    NSArray *_outgoingSnapchatters;
    NSArray *_sectionedSnapchatterKeys;
    NSArray *_sectionedSnapchatters;
    NSMutableSet *_selectedSnapchatters;
    NSArray *_filteredSnapchatters;
}

@property(retain, nonatomic) NSArray *filteredSnapchatters; // @synthesize filteredSnapchatters=_filteredSnapchatters;
@property(retain, nonatomic) NSMutableSet *selectedSnapchatters; // @synthesize selectedSnapchatters=_selectedSnapchatters;
@property(readonly, nonatomic) NSArray *sectionedSnapchatters; // @synthesize sectionedSnapchatters=_sectionedSnapchatters;
@property(readonly, nonatomic) NSArray *sectionedSnapchatterKeys; // @synthesize sectionedSnapchatterKeys=_sectionedSnapchatterKeys;
@property(readonly, nonatomic) NSArray *outgoingSnapchatters; // @synthesize outgoingSnapchatters=_outgoingSnapchatters;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCFriendsTableIndex *tableIndex; // @synthesize tableIndex=_tableIndex;
@property(retain, nonatomic) UILabel *tableHeaderLabel; // @synthesize tableHeaderLabel=_tableHeaderLabel;
@property(retain, nonatomic) UIView *tableHeader; // @synthesize tableHeader=_tableHeader;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(retain, nonatomic) UIImage *searchBarXButtonImage; // @synthesize searchBarXButtonImage=_searchBarXButtonImage;
@property(nonatomic) _Bool searchBarNeedsTopBottomBorders; // @synthesize searchBarNeedsTopBottomBorders=_searchBarNeedsTopBottomBorders;
@property(retain, nonatomic) SCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)scrollToIndex:(BOOL)arg1;
- (void)filterSearch:(id)arg1;
- (void)filterResults:(id)arg1;
- (void)searchBarKeyboardWillHide:(id)arg1;
- (void)searchBarDidBeginSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 didSearch:(id)arg2;
- (void)searchBarDidEndEditing:(id)arg1;
- (void)searchBarDidBeginEditing:(id)arg1;
- (unsigned long long)cellCircleType;
- (void)didSelectSnapchatter:(id)arg1;
- (void)reloadFilteredFriends;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)snapchatterAtIndexPath:(id)arg1;
- (void)didSelectCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned long long)numberOfSectionsInFullTable;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pageViewName;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


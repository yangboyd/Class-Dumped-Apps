//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "SCFriendProfileCellViewDelegate-Protocol.h"
#import "SCIndexedTableViewDataSource-Protocol.h"
#import "SCIndexedTableViewDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSearchFriendsSubViewControllerDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SendTextControllerDelegate-Protocol.h"
#import "Subview-Protocol.h"

@class AddFriendsDelegateObject, EGORefreshTableHeaderView, Friend, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, SCIndexedTableView, SCSearchFriendsSubViewController, SCUserSession, UILabel, UIView;
@protocol ContactsVCUserActionDelegate;

@interface ContactsViewController : UIViewController <SCSnapchattersDataRequestListener, EGORefreshTableHeaderDelegate, SCFriendProfileCellViewDelegate, SCIndexedTableViewDataSource, SCIndexedTableViewDelegate, SCSearchFriendsSubViewControllerDelegate, SendTextControllerDelegate, Subview, SCPageNameLogging>
{
    UILabel *_subTextLabel;
    UIView *_subTextLabelSeparator;
    SCUserSession *_userSession;
    NSSet *_snapchatterSet;
    NSSet *_nonSnapchatterSet;
    NSSet *_suggestionSet;
    NSSet *_officialAccountsSuggestionSet;
    NSSet *_publishersSuggestionSet;
    NSMutableDictionary *_showMoreRowsMap;
    _Bool _forceHideSubtextLabel;
    _Bool _disablePullToRefresh;
    _Bool _hasInteractedWithTable;
    _Bool _reloading;
    int _context;
    AddFriendsDelegateObject *_addFriendsDelegate;
    id <ContactsVCUserActionDelegate> _superViewDelegate;
    NSMutableOrderedSet *_friendsSeenIds;
    NSMutableArray *_selectedFriends;
    unsigned long long _tableViewType;
    NSArray *_snapchattersFriendsList;
    NSArray *_nonSnapchattersFriendsList;
    NSArray *_outOfContactsSuggestionList;
    NSArray *_officialAccountsSuggestionList;
    NSArray *_publishersSuggestionList;
    Friend *_friendBeingInvited;
    NSMutableSet *_temporarilyAddedFriends;
    SCIndexedTableView *_unAddedContactsTableView;
    EGORefreshTableHeaderView *_refreshHeaderView;
    SCSearchFriendsSubViewController *_searchFriendsSVC;
    struct UIEdgeInsets _contentInset;
}

+ (id)searchContext;
+ (id)contactsContext;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(retain, nonatomic) SCSearchFriendsSubViewController *searchFriendsSVC; // @synthesize searchFriendsSVC=_searchFriendsSVC;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) SCIndexedTableView *unAddedContactsTableView; // @synthesize unAddedContactsTableView=_unAddedContactsTableView;
@property(retain, nonatomic) NSMutableSet *temporarilyAddedFriends; // @synthesize temporarilyAddedFriends=_temporarilyAddedFriends;
@property(nonatomic) __weak Friend *friendBeingInvited; // @synthesize friendBeingInvited=_friendBeingInvited;
@property(nonatomic) _Bool hasInteractedWithTable; // @synthesize hasInteractedWithTable=_hasInteractedWithTable;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool disablePullToRefresh; // @synthesize disablePullToRefresh=_disablePullToRefresh;
@property(nonatomic) _Bool forceHideSubtextLabel; // @synthesize forceHideSubtextLabel=_forceHideSubtextLabel;
@property(retain, nonatomic) NSArray *publishersSuggestionList; // @synthesize publishersSuggestionList=_publishersSuggestionList;
@property(retain, nonatomic) NSArray *officialAccountsSuggestionList; // @synthesize officialAccountsSuggestionList=_officialAccountsSuggestionList;
@property(retain, nonatomic) NSArray *outOfContactsSuggestionList; // @synthesize outOfContactsSuggestionList=_outOfContactsSuggestionList;
@property(retain, nonatomic) NSArray *nonSnapchattersFriendsList; // @synthesize nonSnapchattersFriendsList=_nonSnapchattersFriendsList;
@property(retain, nonatomic) NSArray *snapchattersFriendsList; // @synthesize snapchattersFriendsList=_snapchattersFriendsList;
@property(nonatomic) unsigned long long tableViewType; // @synthesize tableViewType=_tableViewType;
@property(retain, nonatomic) NSMutableArray *selectedFriends; // @synthesize selectedFriends=_selectedFriends;
@property(retain, nonatomic) NSMutableOrderedSet *friendsSeenIds; // @synthesize friendsSeenIds=_friendsSeenIds;
@property(nonatomic) __weak id <ContactsVCUserActionDelegate> superViewDelegate; // @synthesize superViewDelegate=_superViewDelegate;
@property(nonatomic) __weak AddFriendsDelegateObject *addFriendsDelegate; // @synthesize addFriendsDelegate=_addFriendsDelegate;
@property(nonatomic) int context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (struct UIEdgeInsets)getContentInset;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didFindFriends:(_Bool)arg1;
- (void)sendTextController:(id)arg1 completedWithStatus:(int)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForViewModel:(id)arg2 atIndexPath:(id)arg3;
- (void)configTableViewWithSnapchattersList:(id)arg1 nonSnapchattersList:(id)arg2 outOfContactsSuggestions:(id)arg3 officialAccountsSuggestions:(id)arg4 publishersSuggestions:(id)arg5 withTemporarilyAddedFriends:(_Bool)arg6;
- (_Bool)isFriendSelectedToAdd:(id)arg1;
- (void)selectMultiFriends:(id)arg1;
- (void)toggleFriendToAdd:(id)arg1;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
- (void)tableView:(id)arg1 didSelectFooterInSection:(long long)arg2 withSectionKey:(id)arg3;
- (id)tableView:(id)arg1 textForFooterInSection:(long long)arg2 withSectionKey:(id)arg3;
- (long long)tableView:(id)arg1 maxNumberOfRowsInSection:(long long)arg2 withSectionKey:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_showMoreRowsInSection:(long long)arg1 withSectionKey:(id)arg2;
- (_Bool)_shouldShowAllRowsInSection:(long long)arg1 withSectionKey:(id)arg2;
- (id)getSearchResultsBySection:(id)arg1 withSearchText:(id)arg2;
- (void)resetFriendFilter:(unsigned long long)arg1;
- (void)sendInvitesToFriend:(id)arg1 profileCellView:(id)arg2;
- (id)_formatSubLabelTextForPhoneNumber:(id)arg1;
- (id)_newFriendProfileCellConfigurationWithFriend:(id)arg1;
- (id)getMyFriendCellForFriend:(id)arg1 onTableView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForModelView:(id)arg1 onTableView:(id)arg2 forRowAtindexPath:(id)arg3;
- (id)pageName;
- (void)handleChangeToFindFriendsResults:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFindFriendsObservers;
- (void)addFindFriendsObservers;
- (void)setTableBounce:(_Bool)arg1;
- (void)didDismissSearch;
- (void)didBeginEditingSearchBox;
- (id)setupSectionToUnindexedFriendMapWithTemporarilyAddedFriends:(_Bool)arg1;
- (void)refreshSearchBarHidden;
- (void)reloadDataWithTemporarilyAddedFriends:(_Bool)arg1;
- (void)reloadData;
- (void)subviewWillAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)hideSubTextLabelAndSeparator;
- (id)createSubTextView:(id)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


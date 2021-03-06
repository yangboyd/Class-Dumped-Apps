//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersItemsTableViewController.h>

#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>

@class NSArray, NSError, NSString, TFSTwitterScribeContext, UIBarButtonItem;
@protocol T1ComposeReplyUsersTableViewControllerDelegate;

@interface T1ComposeReplyUsersTableViewController : T1UsersItemsTableViewController <TFNModalSheetViewControllerDelegate, TFNModalSheetViewControllerLayoutDelegate>
{
    TFSTwitterScribeContext *_scribeContext;
    _Bool _editable;
    _Bool _loading;
    _Bool _bulkUpdateInProgress;
    id <T1ComposeReplyUsersTableViewControllerDelegate> _replyUsersDelegate;
    NSArray *_userIDs;
    NSArray *_users;
    NSError *_loadingError;
    UIBarButtonItem *_doneBarButtonItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(nonatomic) _Bool bulkUpdateInProgress; // @synthesize bulkUpdateInProgress=_bulkUpdateInProgress;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) NSArray *userIDs; // @synthesize userIDs=_userIDs;
@property(nonatomic) __weak id <T1ComposeReplyUsersTableViewControllerDelegate> replyUsersDelegate; // @synthesize replyUsersDelegate=_replyUsersDelegate;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
- (void)_t1_didTapDone:(id)arg1;
- (id)_t1_otherPeopleInConversationItemWithToggle:(_Bool)arg1;
- (id)_t1_gapItem;
- (unsigned long long)_t1_excludableUsersCount;
- (unsigned long long)_t1_excludedUsersCount;
- (void)_t1_unselectAllButtonPressed:(id)arg1;
- (void)_t1_selectAllButtonPressed:(id)arg1;
- (void)_t1_toggleAllButtonPressed:(unsigned long long)arg1;
- (void)_t1_processLoadingError:(id)arg1;
- (void)_t1_processLoadedUsers:(id)arg1;
- (void)_t1_loadUsers;
- (void)_t1_logImpression;
- (id)scribe;
- (id)scribeContext;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewControllerWillDismiss:(id)arg1 fromGesture:(_Bool)arg2;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (_Bool)userRowAdapter:(id)arg1 isCheckmarkInteractionEnabledForUserReference:(id)arg2;
- (_Bool)userRowAdapter:(id)arg1 isCheckedForUserReference:(id)arg2;
- (void)_t1_updateSelectionForUser:(id)arg1 checked:(_Bool)arg2;
- (void)userRowAdapter:(id)arg1 didChangeChecked:(_Bool)arg2 forUserReference:(id)arg3;
- (void)setUserFollowControlType:(unsigned long long)arg1;
- (void)errorItemTapped:(id)arg1;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (id)previewConfigurationForItem:(id)arg1 location:(struct CGPoint)arg2 inCell:(id)arg3 atIndexPath:(id)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)usersSection;
- (void)update:(_Bool)arg1;
- (_Bool)isLoadingTop;
- (id)initWithAccount:(id)arg1 userIDs:(id)arg2 scribeContext:(id)arg3;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


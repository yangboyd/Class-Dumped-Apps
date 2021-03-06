//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

@class NSSet;
@protocol IGCommentManagementBulkActionsViewControllerDelegate;

@interface IGCommentManagementBulkActionsViewController : IGGroupedTableViewController
{
    NSSet *_selectedUserList;
    id <IGCommentManagementBulkActionsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCommentManagementBulkActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)prefersStatusBarHidden;
- (void)_presentAlertWithText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 selectedUserList:(id)arg2;

@end


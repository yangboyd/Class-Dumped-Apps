//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8LastPass43LPSharing_InviteUsersToFolderViewController.h"

#import "CLTokenInputViewDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@interface _TtC8LastPass43LPSharing_InviteUsersToFolderViewController (LastPass) <UITableViewDataSource, UITableViewDelegate, CLTokenInputViewDelegate, UIPopoverPresentationControllerDelegate>
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tokenInputView:(id)arg1 didRemoveToken:(id)arg2;
- (void)tokenInputView:(id)arg1 didAddToken:(id)arg2;
- (id)tokenInputView:(id)arg1 tokenForText:(id)arg2;
- (void)tokenInputView:(id)arg1 didChangeText:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
@end


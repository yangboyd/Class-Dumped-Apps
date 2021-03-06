//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAPhoneConfirmationControllerDelegate-Protocol.h"
#import "WARestorable-Protocol.h"

@class NSString, UISwitch, WABadgedTableViewCell, WATableRow;

@interface WAChatSettingsViewController : WAStaticTableViewController <WAPhoneConfirmationControllerDelegate, WARestorable>
{
    UISwitch *_saveReceivedMediaSwitch;
    UISwitch *_unarchiveNewMessagesSwitch;
    WATableRow *_blockedRow;
    WABadgedTableViewCell *_chatBackupCell;
    WATableRow *_archiveOrUnarchiveAllChatsRow;
    _Bool _isArchiveAllButtonShown;
    WATableRow *_clearAllChatsRow;
    WATableRow *_deleteAllChatsRow;
}

- (void).cxx_destruct;
- (void)phoneConfirmationControllerDidCancel:(id)arg1;
- (void)phoneConfirmationControllerDidFinish:(id)arg1;
- (void)switchSaveReceivedAction:(id)arg1;
- (void)archiveOrUnarchiveAllChatsAction;
- (void)deleteAllChats;
- (void)clearChatHistoryAction;
- (void)mediaRestoreStatusUpdated:(id)arg1;
- (void)backupErrorBadgeUpdated:(id)arg1;
- (void)updateChatBackupBadge;
- (void)updateChatActionsSection;
- (void)setUpTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


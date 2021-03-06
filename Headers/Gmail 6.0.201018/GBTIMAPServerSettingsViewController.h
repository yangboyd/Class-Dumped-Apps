//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTBaseAuthTableViewController.h"

#import "GBTAddAccountHeaderViewDelegate-Protocol.h"
#import "GBTIMAPSettingsTLSConnectionTypeDelegate-Protocol.h"
#import "GBTIMAPTextViewCellDelegate-Protocol.h"

@class BigtopAddAccountErrorVisualElement, GBTAddAccountHeaderView, GBTMailServerSettings, GBTVisualElement, NSMutableArray, NSString;
@protocol GBTIMAPServerSettingsViewControllerDelegate;

@interface GBTIMAPServerSettingsViewController : GBTBaseAuthTableViewController <GBTIMAPSettingsTLSConnectionTypeDelegate, GBTIMAPTextViewCellDelegate, GBTAddAccountHeaderViewDelegate>
{
    NSMutableArray *_cells;
    id <GBTIMAPServerSettingsViewControllerDelegate> _delegate;
    _Bool _editedPortDirectly;
    NSString *_emailAddress;
    BigtopAddAccountErrorVisualElement *_errorVisualElement;
    GBTAddAccountHeaderView *_headerView;
    GBTVisualElement *_parentVisualElement;
    GBTMailServerSettings *_serverSettings;
    _Bool _isForSMTP;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isForSMTP; // @synthesize isForSMTP=_isForSMTP;
- (id)titleForAppBar:(id)arg1;
- (void)enableNextButtonIfAllFieldsFilled;
- (void)initializeCells;
- (id)textValueForCellRow:(long long)arg1;
- (void)nextButtonTapped;
- (void)backButtonTapped;
- (void)clearError;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cellShouldMoveToNext:(id)arg1;
- (void)cellDidUpdateText:(id)arg1;
- (void)imapSettingsTLSConnectionTypeCell:(id)arg1 didSelectConnectionType:(long long)arg2;
- (id)headerView;
- (void)addAccountHeaderViewDidOpenHelp:(unsigned long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)showError:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 configureForSMTP:(_Bool)arg2 defaultSettings:(id)arg3 parentVisualElement:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


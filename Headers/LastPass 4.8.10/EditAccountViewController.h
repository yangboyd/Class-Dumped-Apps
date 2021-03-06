//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LPEditViewController.h"

#import "ChoosingTableViewCellDelegate-Protocol.h"
#import "LastPassModelObserver-Protocol.h"
#import "UITableViewDragDelegate-Protocol.h"
#import "_TtP8LastPass43GeneratePasswordTableViewControllerDelegate_-Protocol.h"

@class AccountTableViewModel, BusyView, LPAccount, LPLabelStackHeaderView, LPSelectFolderTableViewCellController, NSMutableDictionary, NSString, PasswordReprompt, TableViewModelCell, TextFieldTableViewCell, UIViewController;
@protocol EditAccountViewControllerDelegete;

@interface EditAccountViewController : LPEditViewController <LastPassModelObserver, ChoosingTableViewCellDelegate, _TtP8LastPass43GeneratePasswordTableViewControllerDelegate_, UITableViewDragDelegate>
{
    NSMutableDictionary *cells;
    int oldFavoriteValue;
    _Bool _treatAsModal;
    _Bool _deleteAsModal;
    _Bool _showGeneratePassword;
    _Bool _changePassword;
    _Bool _autoSelectNameCellContent;
    _Bool _didAppear;
    _Bool _isAddNew;
    LPAccount *_account;
    UIViewController *_returnToOnSave;
    UIViewController *_returnToOnCancel;
    UIViewController *_returnToOnDelete;
    id <EditAccountViewControllerDelegete> _delegate;
    NSString *_eventSource;
    AccountTableViewModel *_tableViewModel;
    BusyView *_busyView;
    PasswordReprompt *_passwordReprompt;
    TableViewModelCell *_currentCell;
    TextFieldTableViewCell *_nameCell;
    LPLabelStackHeaderView *_optionsHelpHeaderView;
    LPSelectFolderTableViewCellController *_selectFolderController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LPSelectFolderTableViewCellController *selectFolderController; // @synthesize selectFolderController=_selectFolderController;
@property(retain, nonatomic) LPLabelStackHeaderView *optionsHelpHeaderView; // @synthesize optionsHelpHeaderView=_optionsHelpHeaderView;
@property(nonatomic) _Bool isAddNew; // @synthesize isAddNew=_isAddNew;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(retain, nonatomic) TextFieldTableViewCell *nameCell; // @synthesize nameCell=_nameCell;
@property(retain, nonatomic) TableViewModelCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) PasswordReprompt *passwordReprompt; // @synthesize passwordReprompt=_passwordReprompt;
@property(retain, nonatomic) BusyView *busyView; // @synthesize busyView=_busyView;
@property(retain, nonatomic) AccountTableViewModel *tableViewModel; // @synthesize tableViewModel=_tableViewModel;
@property(retain, nonatomic) NSString *eventSource; // @synthesize eventSource=_eventSource;
@property(nonatomic) id <EditAccountViewControllerDelegete> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool autoSelectNameCellContent; // @synthesize autoSelectNameCellContent=_autoSelectNameCellContent;
@property(nonatomic) _Bool changePassword; // @synthesize changePassword=_changePassword;
@property(nonatomic) _Bool showGeneratePassword; // @synthesize showGeneratePassword=_showGeneratePassword;
@property(nonatomic) _Bool deleteAsModal; // @synthesize deleteAsModal=_deleteAsModal;
@property(nonatomic) _Bool treatAsModal; // @synthesize treatAsModal=_treatAsModal;
@property(nonatomic) UIViewController *returnToOnDelete; // @synthesize returnToOnDelete=_returnToOnDelete;
@property(nonatomic) UIViewController *returnToOnCancel; // @synthesize returnToOnCancel=_returnToOnCancel;
@property(nonatomic) UIViewController *returnToOnSave; // @synthesize returnToOnSave=_returnToOnSave;
@property(retain, nonatomic) LPAccount *account; // @synthesize account=_account;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)generatePasswordShouldDismiss:(id)arg1;
- (void)generatePassword:(id)arg1 didGeneratePassword:(id)arg2;
- (void)presentGeneratePasswordController;
- (void)fireChangedPassword;
- (void)fireDeleted;
- (void)fireSaved;
- (void)fireCanceled;
- (void)delete_Clicked:(id)arg1;
- (void)deleteAccountNoPrompt;
- (void)deleteAccountFailed:(id)arg1;
- (void)deleteAccountSuccessful;
- (void)save_Clicked:(id)arg1;
- (void)dismiss;
- (void)trackDeleteFailureWithReason:(id)arg1;
- (void)trackDeleteSuccess;
- (void)trackSaveFailureWithReason:(id)arg1;
- (void)trackSaveSuccess;
- (void)trackViewAppeared;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)saveAccountFinishedWithSuccess:(_Bool)arg1;
- (void)saveAccountFailed:(id)arg1;
- (void)saveAccountSuccessful;
- (void)cancel_Clicked:(id)arg1;
- (void)cancel;
- (void)stopBusy;
- (void)startBusy;
- (void)cellChooseClicked:(id)arg1 title:(id)arg2 rows:(id)arg3 index:(long long)arg4;
- (void)passwordRepromptCleanup:(id)arg1;
- (void)copyPasswordPromptFailed:(id)arg1;
- (void)copyPasswordPromptSuccess:(id)arg1;
- (void)cellCopyClicked:(id)arg1;
- (void)showPasswordPromptFailed:(id)arg1;
- (void)showPasswordPromptSuccess:(id)arg1;
- (void)cellShowClicked:(id)arg1;
- (void)cellLostFocus:(id)arg1;
- (void)flush;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)showMoreFields;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


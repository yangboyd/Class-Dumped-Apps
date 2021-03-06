//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNViewController.h"

#import "DYNUserListViewControllerDelegate-Protocol.h"
#import "DYNUserPickerChipContainerViewDelegate-Protocol.h"
#import "DYNUserPickerTokenContainerViewDelegate-Protocol.h"

@class DYNUserListViewController, DYNUserPickerChipContainerView, DYNUserPickerTokenContainerView, NSArray, NSLayoutConstraint, NSString, UIView;
@protocol DYNAutocompleteManager, DYNExperimentsService, DYNSharedLayerService, GIPAccountID;

@interface DYNUserPickerViewController : DYNViewController <DYNUserListViewControllerDelegate, DYNUserPickerChipContainerViewDelegate, DYNUserPickerTokenContainerViewDelegate>
{
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNExperimentsService> _experimentService;
    unsigned int _userPickerMemberType;
    NSArray *_excludedMembers;
    NSArray *_excludedMemberIDs;
    NSString *_currentQuery;
    NSArray *_suggestedPeople;
    NSArray *_suggestedBots;
    id <DYNAutocompleteManager> _autocompleteManager;
    _Bool _excludeRosters;
    _Bool _isSpaceGuestAccessEnabled;
    UIView *_guestAccessErrorView;
    NSLayoutConstraint *_guestAccessErrorHeightConstraintDisplayed;
    NSLayoutConstraint *_guestAccessErrorHeightConstraintHidden;
    _Bool _shouldPreventMemberSelection;
    id <GIPAccountID> _accountID;
    DYNUserPickerChipContainerView *_chipContainerView;
    DYNUserPickerTokenContainerView *_tokenContainerView;
    DYNUserListViewController *_suggestionViewController;
    double _keyboardHeight;
    NSArray *_initialMembers;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldPreventMemberSelection; // @synthesize shouldPreventMemberSelection=_shouldPreventMemberSelection;
@property(readonly, nonatomic) NSArray *initialMembers; // @synthesize initialMembers=_initialMembers;
@property(readonly, nonatomic) _Bool isSpaceGuestAccessEnabled; // @synthesize isSpaceGuestAccessEnabled=_isSpaceGuestAccessEnabled;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) DYNUserListViewController *suggestionViewController; // @synthesize suggestionViewController=_suggestionViewController;
@property(retain, nonatomic) DYNUserPickerTokenContainerView *tokenContainerView; // @synthesize tokenContainerView=_tokenContainerView;
@property(retain, nonatomic) DYNUserPickerChipContainerView *chipContainerView; // @synthesize chipContainerView=_chipContainerView;
@property(retain, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
- (id)containerView;
- (id)containerField;
- (void)populateContainerViewWithInitialMembers;
- (id)containerMembers;
- (void)setUpSuggestionView;
- (void)setUpGuestAccessErrorView;
- (void)setUpContainerView;
- (void)querySuggestedBotsWithQuery:(id)arg1;
- (void)onSuggestedPeopleCallbackWithUsers:(id)arg1 hasMoreCallbacks:(_Bool)arg2;
- (CDUnknownBlockType)suggestedPeopleCallback;
- (void)querySuggestedPeopleAndBotsWithQuery:(id)arg1;
- (void)refreshSuggestionView;
- (void)showAutocompleteEmptyState;
- (_Bool)shouldDisplayBotsInRooms;
- (_Bool)shouldDisplayBotsInDMs;
- (_Bool)shouldDisplayBots;
- (_Bool)shouldDisplayOnlyBots;
- (_Bool)shouldDisplayPeople;
- (void)addMemberToContainer:(id)arg1;
- (void)searchForText:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)observeKeyboard;
- (void)updateIsGuestUserDisplayed:(_Bool)arg1;
- (void)didTapMember:(id)arg1;
- (void)tokenContainerViewDidTapReturn:(id)arg1;
- (_Bool)tokenFieldShouldReturn;
- (void)tokenContainerView:(id)arg1 didChangeSearchText:(id)arg2;
- (void)tokenContainerView:(id)arg1 didRemoveMember:(id)arg2;
- (void)tokenContainerView:(id)arg1 didAddMember:(id)arg2;
- (void)chipContainerViewDidTapReturn:(id)arg1;
- (_Bool)chipFieldShouldReturn;
- (void)chipContainerView:(id)arg1 didChangeSearchText:(id)arg2;
- (void)chipContainerView:(id)arg1 didRemoveMember:(id)arg2;
- (void)chipContainerView:(id)arg1 didAddMember:(id)arg2;
- (void)reportCloseWithDidProceed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccountID:(id)arg1 userPickerMemberType:(unsigned int)arg2 autocompleteType:(int)arg3 excludedMembers:(id)arg4 excludedMemberIDs:(id)arg5 excludeRosters:(_Bool)arg6 initialMembers:(id)arg7 isSpaceGuestAccessEnabled:(_Bool)arg8 description:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


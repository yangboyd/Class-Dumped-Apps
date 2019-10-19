//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AccountsRUIActionSheetViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class AccountManager, BaseButton, BaseImageView, BaseLabel, BaseTableView, BaseView, ChatAvatarImageView, KeyValueObservation, NSMutableArray, NSString, UIPercentDrivenInteractiveTransition, UIStackView, UserKarmaAndAgeView;

@interface UserDrawerViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, AccountsRUIActionSheetViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    AccountManager *_accountManager;
    BaseView *_background;
    BaseView *_drawerPanel;
    BaseButton *_closeButton;
    BaseButton *_nightButton;
    UIStackView *_stackView;
    ChatAvatarImageView *_iconImageView;
    UIStackView *_usernameStackView;
    BaseLabel *_usernameLabel;
    BaseImageView *_premiumBadgeImageView;
    BaseImageView *_usernameDropdown;
    UserKarmaAndAgeView *_userStatsView;
    BaseLabel *_userLogStateLabel;
    BaseTableView *_actionsTableView;
    BaseTableView *_settingsTableView;
    NSMutableArray *_availableUserActions;
    KeyValueObservation *_accountObservation;
    NSString *_correlationId;
}

+ (double)panelWidth;
@property(readonly, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
@property(retain, nonatomic) KeyValueObservation *accountObservation; // @synthesize accountObservation=_accountObservation;
@property(retain, nonatomic) NSMutableArray *availableUserActions; // @synthesize availableUserActions=_availableUserActions;
@property(retain, nonatomic) BaseTableView *settingsTableView; // @synthesize settingsTableView=_settingsTableView;
@property(retain, nonatomic) BaseTableView *actionsTableView; // @synthesize actionsTableView=_actionsTableView;
@property(retain, nonatomic) BaseLabel *userLogStateLabel; // @synthesize userLogStateLabel=_userLogStateLabel;
@property(retain, nonatomic) UserKarmaAndAgeView *userStatsView; // @synthesize userStatsView=_userStatsView;
@property(retain, nonatomic) BaseImageView *usernameDropdown; // @synthesize usernameDropdown=_usernameDropdown;
@property(retain, nonatomic) BaseImageView *premiumBadgeImageView; // @synthesize premiumBadgeImageView=_premiumBadgeImageView;
@property(retain, nonatomic) BaseLabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UIStackView *usernameStackView; // @synthesize usernameStackView=_usernameStackView;
@property(retain, nonatomic) ChatAvatarImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) BaseButton *nightButton; // @synthesize nightButton=_nightButton;
@property(retain, nonatomic) BaseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) BaseView *drawerPanel; // @synthesize drawerPanel=_drawerPanel;
@property(retain, nonatomic) BaseView *background; // @synthesize background=_background;
@property(readonly, nonatomic) AccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)analyticsPageType;
- (id)analyticsScreenViewName;
- (void)presentShareViewControllerFromViewController:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (id)badgeWithCount:(unsigned long long)arg1;
- (void)actionSheetViewControllerDidSelectAddAccount:(id)arg1;
- (void)actionSheetViewController:(id)arg1 didSelectSwitchToAccount:(id)arg2;
- (void)actionSheetViewController:(id)arg1 didSelectLogoutFromAccount:(id)arg2;
- (void)actionSheetViewControllerDidSelectAnonymous:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)pressedSignUpOrLogInButton:(id)arg1;
- (void)pressedAvatar:(id)arg1;
- (void)didTapNightButton:(id)arg1;
- (void)pressedCloseButton:(id)arg1;
- (void)userAccountUpdated:(id)arg1;
- (id)currentNavigationController;
- (void)fetchDraftCount;
- (void)populateUI;
- (void)defineAvailableUserActions;
- (_Bool)hasNoLoggedInAccounts;
- (void)observeCurrentAccount;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAccountManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


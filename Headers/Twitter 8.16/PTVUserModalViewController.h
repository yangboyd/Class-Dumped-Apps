//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVViewController.h>

#import <PeriscopeSDK/PTVActionSheetDelegate-Protocol.h>
#import <PeriscopeSDK/PTVHistoryUserModalTableViewControllerDelegate-Protocol.h>
#import <PeriscopeSDK/PTVInteractiveModal-Protocol.h>
#import <PeriscopeSDK/PTVNavigationBarDelegate-Protocol.h>
#import <PeriscopeSDK/PTVUserModal-Protocol.h>
#import <PeriscopeSDK/PTVUserModalViewDelegate-Protocol.h>

@class NSObject, NSString, PTVFollowersUserModalTableViewController, PTVFollowingUserModalTableViewController, PTVHistoryUserModalTableViewController, PTVInteractiveModalDismissTransition, PTVMergeParticipantUser, PTVPaymanService;
@protocol PTVLoggedInUserProtocol, PTVModalPresentationManagerDelegate, PTVUserModalFollowshipChangeDelegate, PTVUserModalViewControllerDelegate;

@interface PTVUserModalViewController : PTVViewController <PTVUserModalViewDelegate, PTVHistoryUserModalTableViewControllerDelegate, PTVNavigationBarDelegate, PTVInteractiveModal, PTVUserModal, PTVActionSheetDelegate>
{
    PTVUserModalViewController *_weakSelf;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    NSString *_user_id;
    int _liveCount;
    _Bool _hasShownWatchLivePrompt;
    _Bool _didAddHistory;
    _Bool _didAddFollowers;
    _Bool _didAddFollowing;
    _Bool _interactiveViewDidAppear;
    long long _allTimeStars;
    PTVPaymanService *_paymanService;
    _Bool _displayAddAsGuestButton;
    _Bool _initiallyShowFollowers;
    _Bool _presentedFromSuggestedFeed;
    _Bool _isPresentingWhileBroadcasting;
    _Bool _triggerTooltip;
    NSString *_followSource;
    NSString *_broadcastCellClickThroughSource;
    id <PTVUserModalViewControllerDelegate> _delegate;
    id <PTVUserModalFollowshipChangeDelegate> _followshipChangeDelegate;
    id <PTVModalPresentationManagerDelegate> _modalPresentationDelegate;
    PTVMergeParticipantUser *_user;
    NSString *_broadcastID;
    NSString *_hostViewName;
    PTVInteractiveModalDismissTransition *_dismissTransition;
    PTVHistoryUserModalTableViewController *_historyTableViewController;
    PTVFollowersUserModalTableViewController *_followersTableViewController;
    PTVFollowingUserModalTableViewController *_followingTableViewController;
}

+ (id)UserModalViewController:(id)arg1 LoggedInUser:(id)arg2 Delegate:(id)arg3 ModalDelegate:(id)arg4;
+ (id)UserModalViewController:(id)arg1 LoggedInUser:(id)arg2 Delegate:(id)arg3 ModalDelegate:(id)arg4 Creator:(CDUnknownBlockType)arg5;
@property(nonatomic) _Bool triggerTooltip; // @synthesize triggerTooltip=_triggerTooltip;
@property(readonly, nonatomic) PTVFollowingUserModalTableViewController *followingTableViewController; // @synthesize followingTableViewController=_followingTableViewController;
@property(readonly, nonatomic) PTVFollowersUserModalTableViewController *followersTableViewController; // @synthesize followersTableViewController=_followersTableViewController;
@property(readonly, nonatomic) PTVHistoryUserModalTableViewController *historyTableViewController; // @synthesize historyTableViewController=_historyTableViewController;
@property(readonly, nonatomic) PTVInteractiveModalDismissTransition *dismissTransition; // @synthesize dismissTransition=_dismissTransition;
@property(copy, nonatomic) NSString *hostViewName; // @synthesize hostViewName=_hostViewName;
@property(nonatomic) _Bool isPresentingWhileBroadcasting; // @synthesize isPresentingWhileBroadcasting=_isPresentingWhileBroadcasting;
@property(nonatomic) _Bool presentedFromSuggestedFeed; // @synthesize presentedFromSuggestedFeed=_presentedFromSuggestedFeed;
@property(nonatomic) _Bool initiallyShowFollowers; // @synthesize initiallyShowFollowers=_initiallyShowFollowers;
@property(nonatomic) _Bool displayAddAsGuestButton; // @synthesize displayAddAsGuestButton=_displayAddAsGuestButton;
@property(retain, nonatomic) NSString *broadcastID; // @synthesize broadcastID=_broadcastID;
@property(retain, nonatomic) PTVMergeParticipantUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <PTVModalPresentationManagerDelegate> modalPresentationDelegate; // @synthesize modalPresentationDelegate=_modalPresentationDelegate;
@property(nonatomic) __weak id <PTVUserModalFollowshipChangeDelegate> followshipChangeDelegate; // @synthesize followshipChangeDelegate=_followshipChangeDelegate;
@property(nonatomic) __weak id <PTVUserModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *broadcastCellClickThroughSource; // @synthesize broadcastCellClickThroughSource=_broadcastCellClickThroughSource;
@property(retain, nonatomic) NSString *followSource; // @synthesize followSource=_followSource;
- (void).cxx_destruct;
- (_Bool)accessibilityPerformEscape;
- (void)showWatchLiveIfNeeded;
- (void)showVipTooltipIfNeeded;
- (void)presentUserSettingsActionSheetFromFollow:(_Bool)arg1;
- (void)didSelectDismiss;
- (_Bool)doesUserModalHaveExpandedRecentBroadcastDetails;
- (_Bool)doesUserModalHaveExpandedDetails;
- (_Bool)isUserModalReadOnly;
- (_Bool)isLoggedIn;
- (id)userModalView;
- (void)updateModalViewStateForTwitterUserProperties;
- (void)updateIsProfileURLDetectionEnabled;
- (id)initWithDelegate:(id)arg1 remoteID:(id)arg2 followersController:(id)arg3 followingController:(id)arg4 historyController:(id)arg5 loggedInUser:(id)arg6 modalDelegate:(id)arg7;
- (void)leadingNavButtonPressed;
- (void)trailingNavButtonPressed;
- (void)backPressed;
- (_Bool)isBlocked;
- (void)didFetchLiveBroadcasts:(int)arg1 withHistoryBroadcast:(int)arg2;
- (void)dismissButtonPressedOnActionSheet:(id)arg1;
- (id)interactiveModalDismissTransition;
- (struct CGSize)interactiveModalSizeThatFitsContainerSize:(struct CGSize)arg1;
- (void)interactiveModalDidSelectDismiss;
- (_Bool)interactiveModalShouldDismiss;
- (unsigned long long)interactiveModalAnimationStyle;
- (void)settingsButtonPressed;
- (void)watchLivePressed;
- (void)displayNameButtonPressed;
- (void)muteButtonPressed;
- (void)addAsGuestButtonPressed;
- (void)followButtonPressed;
- (void)nFollowingPressed;
- (void)nFollowersPressed;
- (void)nHistoryPressed;
- (void)userModalViewDidSelectDismiss:(id)arg1;
- (void)error:(id)arg1 context:(id)arg2;
- (_Bool)hasData:(id)arg1;
- (void)setData:(id)arg1;
- (_Bool)shouldLoad;
- (void)updateAllTimeStarsDisplay:(long long)arg1;
- (void)setAllTimeStars:(long long)arg1;
- (void)load:(long long)arg1;
- (void)resumeAnimation;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)unobserve;
- (void)observe;
- (_Bool)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


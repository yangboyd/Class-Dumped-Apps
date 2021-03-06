//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLiveHeaderHostSheetViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveInviteControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveSectionedInviteControllerDelegate-Protocol.h>

@class IGLiveBroadcastConfig, IGLiveBroadcastController, IGLiveBroadcastLogger, IGLiveHeaderHostSheetViewController, IGLiveRequestToJoinCommentsUpdater, IGLiveRequestToJoinPuller, IGLiveRequestToJoinService, IGUserSession, NSMutableDictionary, NSString, UIViewController;
@protocol IGLiveBroadcastLiveWithManagerDelegate;

@interface IGLiveBroadcastLiveWithManager : NSObject <IGLiveHeaderHostSheetViewControllerDelegate, IGLiveSectionedInviteControllerDelegate, IGLiveInviteControllerDelegate>
{
    IGUserSession *_userSession;
    IGLiveBroadcastConfig *_liveBroadcastConfig;
    NSMutableDictionary *_inviteTimeoutTimerMap;
    IGLiveRequestToJoinPuller *_requestToJoinPuller;
    IGLiveRequestToJoinCommentsUpdater *_requestToJoinCommentUpdater;
    IGLiveRequestToJoinService *_requestToJoinService;
    _Bool _requestToJoinEnabled;
    UIViewController *_inviteSheetViewController;
    NSMutableDictionary *_inviteInfoMap;
    IGLiveHeaderHostSheetViewController *_hostSheetViewController;
    IGLiveBroadcastController *_broadcastController;
    unsigned long long _maxNumberOfInvitees;
    UIViewController *_presenter;
    id <IGLiveBroadcastLiveWithManagerDelegate> _delegate;
    IGLiveBroadcastLogger *_logger;
    NSString *_analyticModule;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *analyticModule; // @synthesize analyticModule=_analyticModule;
@property(retain, nonatomic) IGLiveBroadcastLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <IGLiveBroadcastLiveWithManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) unsigned long long maxNumberOfInvitees; // @synthesize maxNumberOfInvitees=_maxNumberOfInvitees;
@property(readonly, nonatomic) _Bool requestToJoinEnabled; // @synthesize requestToJoinEnabled=_requestToJoinEnabled;
@property(readonly, nonatomic) IGLiveBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
- (void)hostSheetViewController:(id)arg1 didTapActionButtonForGuest:(id)arg2 atState:(long long)arg3;
- (void)hostSheetViewControllerDidRequestInvite:(id)arg1;
- (void)liveInviteSheetDidDismissWithSelectedUser:(id)arg1;
- (void)liveInviteSheetDidDismissWithSelectedUsers:(id)arg1;
- (void)setRequestToJoinCommentEnabled:(_Bool)arg1;
- (void)_stopPullingForRequestToJoin;
- (void)_didPullForRequestToJoinWithUsers:(id)arg1 newCount:(long long)arg2 totalCount:(long long)arg3 unseenCount:(long long)arg4;
- (void)_startPullingForRequestToJoin;
- (void)_finishSettingToggleRequestFrom:(_Bool)arg1 to:(_Bool)arg2 success:(_Bool)arg3;
- (void)_setRequestToJoinFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)setRequestToJoinEnabled:(_Bool)arg1;
- (void)startUpdateCommentViewWithUpdater:(id)arg1;
- (void)_displayToastWithText:(id)arg1 style:(long long)arg2;
- (void)displayUnableToJoinToastForUser:(id)arg1;
- (void)displayUserLeftToastForUser:(id)arg1;
- (void)_didRemoveInvitedUser:(id)arg1 success:(_Bool)arg2;
- (void)_didConfirmRemoveInvitedUser:(id)arg1;
- (void)dismissInvitedUser:(id)arg1;
- (void)_didBlockInvitedUser:(id)arg1 success:(_Bool)arg2;
- (void)blockInvitedUser:(id)arg1;
- (void)failInviteForUserIds:(id)arg1;
- (void)declineInviteForUserId:(id)arg1;
- (void)_didCancelInviteForUserId:(id)arg1 success:(_Bool)arg2;
- (void)cancelInviteForUserId:(id)arg1 reason:(long long)arg2;
- (void)detachForUserId:(id)arg1;
- (void)attachForUserId:(id)arg1;
- (void)_timedCancelInviteForUser:(id)arg1;
- (void)_tearDownInviteTimeoutTimerForUser:(id)arg1;
- (void)_setupInviteTimeoutTimerForUser:(id)arg1;
- (void)inviteUsers:(id)arg1;
- (id)_usersFilteredByBlock:(CDUnknownBlockType)arg1;
- (id)usersWithInviteState:(long long)arg1;
- (unsigned long long)numberOfUserWithInviteState:(long long)arg1;
- (long long)inviteStateForUserId:(id)arg1;
- (id)invitedUserForUserId:(id)arg1;
- (_Bool)hasActiveInvitedUsers;
- (id)anyInvitedUser;
@property(readonly, nonatomic) _Bool canInviteMoreUsers;
- (void)_clearHostSheetView;
- (_Bool)isPresentingHostSheet;
- (void)dismissHostSheetViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentHostSheetView;
- (void)_updateUIForGuestStateChangeOfUser:(id)arg1;
- (void)_presentMaxGuestErrorDialogForMaxInviteeCount:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isShowingInviteSheet;
- (void)dismissInviteSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentInviteSheetViewWithMethod:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 broadcastController:(id)arg2 liveBroadcastConfig:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


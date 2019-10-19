//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileBaseViewController.h"

#import "SCAlertGearDelegate-Protocol.h"
#import "SCMiniProfileChatOptionsSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileFriendIdentitySectionControllerDelegate-Protocol.h"
#import "SCMiniProfileFriendOptionsSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileMapSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileRelatedSnapchattersSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileStoryOptionsSectionControllerDelegate-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCReplyDelegate-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"
#import "SCS2RStackDebuggable-Protocol.h"
#import "SCShareFriendViewControllerDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class Friend, NSArray, NSString, SCAlertGear, SCLazy, SCMiniProfileChatOptionsSectionController, SCMiniProfileFriendIdentitySectionController, SCMiniProfileFriendOptionsSectionController, SCMiniProfileMapSectionController, SCMiniProfileSettingsController, SCMiniProfileSnapchatterIdentitySectionController, SCMiniProfileStoryRelatedSnapchattersSectionController, SCOperaPresenter, SCScopedAccess, SCSnapchatter, SCTempSnapchatter, SCUserSession;
@protocol SCMiniProfileViewControllerDelegate;

@interface SCMiniProfileViewController : SCMiniProfileBaseViewController <SCS2RStackDebuggable, SCAlertGearDelegate, SCMiniProfileFriendOptionsSectionControllerDelegate, SCMiniProfileFriendIdentitySectionControllerDelegate, SCMiniProfileMapSectionControllerDelegate, SCShareFriendViewControllerDelegate, SCReplyDelegate, SCOperaPresenterDelegate, SCMiniProfileStoryOptionsSectionControllerDelegate, SCReportPageViewControllerDelegate, SCMiniProfileChatOptionsSectionControllerDelegate, SCMiniProfileRelatedSnapchattersSectionControllerDelegate, SCSnapchattersDataRequestListener, SCPageNameLogging>
{
    SCOperaPresenter *_storyPresenter;
    long long _viewingType;
    _Bool _showMoreInsteadOfMiniProfileOptions;
    SCMiniProfileFriendIdentitySectionController *_identitySectionController;
    SCMiniProfileMapSectionController *_mapSectionController;
    SCMiniProfileFriendOptionsSectionController *_friendOptionsSectionController;
    SCMiniProfileChatOptionsSectionController *_chatOptionsSectionController;
    SCMiniProfileStoryRelatedSnapchattersSectionController *_relatedSnapchattersSectionController;
    SCSnapchatter *_snapchatter;
    SCTempSnapchatter *_tempSnapchatter;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_userInfoProvider;
    SCLazy *_friendScoreProvider;
    SCLazy *_tempSnapchatterDataCoordinator;
    SCMiniProfileSnapchatterIdentitySectionController *_snapchatterSectionController;
    SCMiniProfileSettingsController *_settingsController;
    SCScopedAccess *_friendsFeedDataAccess;
    SCScopedAccess *_conversationManagerAccess;
    SCScopedAccess *_scopedArroyoConversationIdsManager;
    SCLazy *_storiesSummaryInfoProvider;
    SCLazy *_storiesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    double _openTime;
    _Bool _shouldScrollAfterEdit;
    _Bool _preventRecursiveOptions;
    _Bool _hidesMapSection;
    _Bool _notificationStatusForDisplayedFriend;
    Friend *_displayedFriend;
    NSArray *_storyOptions;
    id <SCMiniProfileViewControllerDelegate> _delegate;
    long long _addSource;
    long long _pageType;
    long long _viewLocation;
    long long _friendIndex;
    SCUserSession *_userSession;
    NSArray *_contexts;
    SCAlertGear *_alertGear;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCAlertGear *alertGear; // @synthesize alertGear=_alertGear;
@property(nonatomic) _Bool notificationStatusForDisplayedFriend; // @synthesize notificationStatusForDisplayedFriend=_notificationStatusForDisplayedFriend;
@property(copy, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool hidesMapSection; // @synthesize hidesMapSection=_hidesMapSection;
@property(nonatomic) _Bool preventRecursiveOptions; // @synthesize preventRecursiveOptions=_preventRecursiveOptions;
@property(nonatomic) _Bool shouldScrollAfterEdit; // @synthesize shouldScrollAfterEdit=_shouldScrollAfterEdit;
@property(nonatomic) long long friendIndex; // @synthesize friendIndex=_friendIndex;
@property(nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long addSource; // @synthesize addSource=_addSource;
@property(nonatomic) __weak id <SCMiniProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *storyOptions; // @synthesize storyOptions=_storyOptions;
@property(readonly, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(retain, nonatomic) Friend *displayedFriend; // @synthesize displayedFriend=_displayedFriend;
- (void).cxx_destruct;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)_setSnapchatter:(id)arg1 andReset:(_Bool)arg2;
- (void)_fetchSnapchatterWithUserId:(id)arg1 andReset:(_Bool)arg2;
- (void)_dismissViewController;
- (id)_allSectionsExceptRelatedSnapchatters;
- (void)_reloadSections:(id)arg1;
- (void)_reloadAllSections;
- (void)_handleHideSuggestedSnapchatter;
- (void)_handleIgnoreIncomingSnapchatter;
- (id)snapchatterOrFriendDisplayName;
- (id)snapchatterOrFriendUsername;
- (id)snapchatterOrFriendUserId;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (_Bool)replyingToStoryWithChat;
- (void)didFollowThrough;
- (void)replyWithParameter:(id)arg1;
- (void)storyOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (unsigned long long)policyForNotification:(id)arg1;
- (void)mapSectionController:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)mapSectionController:(id)arg1 wantsToVisitUserId:(id)arg2;
- (void)chatOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (void)friendIdentitySectionControllerDidSelectMore:(id)arg1;
- (void)_playFriendStoriesWithSummaryInfo:(id)arg1 baseView:(id)arg2 viewLocation:(long long)arg3;
- (void)friendIdentitySectionController:(id)arg1 didTapPlayFriendStoriesSummary:(id)arg2 withBaseView:(id)arg3;
- (void)friendIdentitySectionController:(id)arg1 didTapAddFriend:(id)arg2;
- (void)relatedSnapchattersSectionController:(id)arg1 didLongPressOnFriend:(id)arg2 originalFriend:(id)arg3;
- (void)relatedSnapchattersSectionController:(id)arg1 didTapPlayFriendStoriesSummary:(id)arg2 originalFriend:(id)arg3 withBaseView:(id)arg4;
- (void)relatedSnapchattersSectionController:(id)arg1 didTapAddFriend:(id)arg2 originalFriend:(id)arg3;
- (void)_handleOptionSelected:(long long)arg1;
- (void)friendOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (_Bool)notificationStatusForSnapchatter:(id)arg1;
- (void)alertGear:(id)arg1 didNotificationStatusChangeForFriend:(id)arg2;
- (_Bool)alertGear:(id)arg1 notificationStatusForFriend:(id)arg2;
- (void)didUpdateMuteState;
- (void)customOperationForReport:(id)arg1;
- (void)customOperationForUnBlock:(id)arg1;
- (void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2;
- (void)customOperationForDeleteorIgnore:(id)arg1;
- (void)alertGear:(id)arg1 didSetDisplay:(id)arg2 friend:(id)arg3 shouldScroll:(_Bool)arg4;
- (void)_updateNotificationStatusForDisplayFriend;
- (void)_navigateToChatWithDeeplinkURL:(id)arg1;
- (void)didPressSendAccountButtonForFriend:(id)arg1;
- (void)didPressSendAccountButton;
- (void)didPressIgnoreRecommendedButtonForFriend:(id)arg1;
- (void)didPressIgnoreRecommendedButton;
- (void)didPressIgnoreButton;
- (void)didPressSettingsGearButtonForFriend:(id)arg1;
- (void)didPressSettingsGearButton;
- (void)didPressVideoButton;
- (void)didPressCallButton;
- (void)didPressSnapButton;
- (void)didPressChatButton;
- (void)didPressAddFriendButton:(id)arg1 friend:(id)arg2 relatedFriend:(id)arg3 actionType:(long long)arg4 onProgress:(CDUnknownBlockType)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailure:(CDUnknownBlockType)arg7;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateStoryOptions:(id)arg1;
- (id)_tempSnapchatterSectionControllers;
- (void)setTempSnapchatter:(id)arg1 tempSnapchatterDataCoordinator:(id)arg2 snapchattersDataProvider:(id)arg3 snapchattersDataMutator:(id)arg4 snapchattersDataTracker:(id)arg5 userInfoProvider:(id)arg6 friendScoreProvider:(id)arg7 pageType:(long long)arg8 addSource:(long long)arg9 viewLocation:(long long)arg10;
- (id)_snapchatterSectionControllers;
- (id)_snapchatterSectionController;
- (void)_setUpStoriesCoordinators;
- (void)setSnapchatter:(id)arg1 snapchattersDataProvider:(id)arg2 snapchattersDataMutator:(id)arg3 snapchattersDataTracker:(id)arg4 userInfoProvider:(id)arg5 viewedIncomingFriendsTracker:(id)arg6 friendScoreProvider:(id)arg7 pageType:(long long)arg8 addSource:(long long)arg9 viewLocation:(long long)arg10;
- (void)setFriend:(id)arg1 pageType:(long long)arg2 addSource:(long long)arg3 viewLocation:(long long)arg4 overrideShowMore:(_Bool)arg5 storyOptions:(id)arg6;
- (void)updateRelatedSnapchatters:(id)arg1 withOriginalFriend:(id)arg2;
- (void)addRelatedSnapchatters:(id)arg1 withOriginalFriend:(id)arg2;
- (void)setFriend:(id)arg1 pageType:(long long)arg2 addSource:(long long)arg3 viewLocation:(long long)arg4;
- (id)pageViewName;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 contexts:(id)arg3;
- (id)additionalS2RDebugOutput;
- (void)_logMiniProfileSettings;
- (void)_logMiniProfileSnap;
- (void)_logMiniProfileChat;
- (void)_logMiniProfileAddFriend;
- (void)_logMiniProfileExitWithOpenTime:(double)arg1;
- (void)_logMiniProfileView;
- (id)friendAdditionRequestContext;
- (id)getPageName;
- (id)contextString;
- (id)pageTypeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


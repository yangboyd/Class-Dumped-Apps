//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileBaseViewController.h"

#import "SCAddToGroupViewControllerDelegate-Protocol.h"
#import "SCCustomStoriesUpdateListener-Protocol.h"
#import "SCEditGroupAlertDelegate-Protocol.h"
#import "SCGroupMiniProfileOptionsSectionControllerDelegate-Protocol.h"
#import "SCGroupMiniProfileParticipantsSectionControllerDelegate-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCMiniProfileChatOptionsSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileGroupStoryIdentitySectionControllerDelegate-Protocol.h"
#import "SCMiniProfileGroupStoryOptionsSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileGroupStorySectionControllerDelegate-Protocol.h"
#import "SCMiniProfileMapSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCReplyDelegate-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"

@class NSArray, NSString, SCAddToGroupViewController, SCEditGroupAlertController, SCGroupMiniProfileGroupStorySectionController, SCGroupMiniProfileParticipantsSectionController, SCLazy, SCMiniProfileChatOptionsSectionController, SCNewGroupViewController, SCOperaPresenter, SCSnapchatterMiniProfileActionHandler, SCStoriesCustomStoryMetadata, SCUserSession;
@protocol SCChatGroup, SCGroupMiniProfileViewControllerDelegate, SCNewGroupViewControllerDelegate;

@interface SCGroupMiniProfileViewController : SCMiniProfileBaseViewController <SCGroupMiniProfileOptionsSectionControllerDelegate, SCGroupMiniProfileParticipantsSectionControllerDelegate, SCGroupsDataRequestListener, SCEditGroupAlertDelegate, SCAddToGroupViewControllerDelegate, SCMiniProfileViewControllerDelegate, SCReplyDelegate, SCOperaPresenterDelegate, SCMiniProfileGroupStorySectionControllerDelegate, SCMiniProfileChatOptionsSectionControllerDelegate, SCMiniProfileMapSectionControllerDelegate, SCMiniProfileGroupStoryOptionsSectionControllerDelegate, SCMiniProfileGroupStoryIdentitySectionControllerDelegate, SCStoriesModelUpdateListener, SCCustomStoriesUpdateListener, SCPageNameLogging>
{
    SCEditGroupAlertController *_editGroupAlertVC;
    SCAddToGroupViewController *_addToGroupVC;
    SCNewGroupViewController *_newGroupVC;
    id <SCNewGroupViewControllerDelegate> _newGroupViewControllerDelegate;
    SCOperaPresenter *_storyPresenter;
    long long _viewingType;
    SCGroupMiniProfileGroupStorySectionController *_groupStorySectionController;
    SCGroupMiniProfileParticipantsSectionController *_participantsSectionController;
    SCMiniProfileChatOptionsSectionController *_chatOptionsSectionController;
    _Bool _willDisplayMap;
    _Bool _collapseGroupMemberList;
    double _openTime;
    SCSnapchatterMiniProfileActionHandler *_snapchatterMiniProfileActionHandler;
    _Bool _customStoriesSyncedWithServer;
    SCLazy *_storiesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    SCLazy *_storiesSummaryInfoProvider;
    _Bool _preventRecursiveOptions;
    id <SCChatGroup> _displayedGroup;
    SCStoriesCustomStoryMetadata *_displayedCustomStory;
    id <SCGroupMiniProfileViewControllerDelegate> _delegate;
    SCUserSession *_userSession;
    NSArray *_contexts;
}

@property(copy, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool preventRecursiveOptions; // @synthesize preventRecursiveOptions=_preventRecursiveOptions;
@property(nonatomic) __weak id <SCGroupMiniProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCStoriesCustomStoryMetadata *displayedCustomStory; // @synthesize displayedCustomStory=_displayedCustomStory;
@property(retain, nonatomic) id <SCChatGroup> displayedGroup; // @synthesize displayedGroup=_displayedGroup;
- (void).cxx_destruct;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (void)groupStoryIdentitySectionController:(id)arg1 didTapThumbnailView:(id)arg2;
- (void)_openMapWithDestination:(id)arg1;
- (void)mapSectionController:(id)arg1 wantsToVisitGroup:(id)arg2;
- (void)mapSectionController:(id)arg1 wantsToVisitUserId:(id)arg2;
- (void)mapSectionController:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)groupStorySectionController:(id)arg1 didSelectOption:(long long)arg2;
- (_Bool)groupStorySectionControllerShouldShowViewMembersButtonIfNeeded:(id)arg1;
- (void)_didTapPlaySummaryInfo:(id)arg1 withBaseView:(id)arg2;
- (void)groupStorySectionController:(id)arg1 didTapPlaySummaryInfo:(id)arg2 withBaseView:(id)arg3;
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
- (unsigned long long)policyForNotification:(id)arg1;
- (_Bool)replyingToStoryWithChat;
- (void)didFollowThrough;
- (void)replyWithParameter:(id)arg1;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)chatOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (void)groupStoryOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (long long)_miniProfileActionForOption:(long long)arg1;
- (void)_handleOptionSelected:(long long)arg1;
- (void)groupOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (_Bool)participantsSectionControllerShouldFullyExpandMemberList:(id)arg1;
- (_Bool)participantsSectionControllerShouldFullyCollapseMemberList:(id)arg1;
- (void)participantsSectionController:(id)arg1 didTapPlayFriendStories:(id)arg2 withBaseView:(id)arg3;
- (void)participantsSectionController:(id)arg1 didLongPressFriend:(id)arg2;
- (void)participantsSectionController:(id)arg1 didTapFriend:(id)arg2;
- (void)navigateToChatViewWithGroupId:(id)arg1;
- (void)navigateToChatViewWithFriend:(id)arg1 deepLinkURL:(id)arg2 viewController:(id)arg3;
- (void)didPressMischiefConfirmationButton:(id)arg1 viewController:(id)arg2 groupName:(id)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didUpdateMuteState;
- (void)handleEditNotificationOptionForGroupId:(id)arg1 notificationStatus:(_Bool)arg2;
- (void)handleAddParticipantsOptionForGroup:(id)arg1;
- (void)didUpdateCustomStoriesWithPublicationIds:(id)arg1;
- (void)_didChangeInfoForGroupWithId:(id)arg1;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (_Bool)setPublicationId:(id)arg1;
- (void)setGroup:(id)arg1;
- (id)pageViewName;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 contexts:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


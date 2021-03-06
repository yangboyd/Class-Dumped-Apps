//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveInviteFullScreenSearchViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveInviteSearchServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveInviteSheetRequesterViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveInviteSheetViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveNetworkPollerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShareSheetHeaderViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryViewerSectionControllerViewerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGListAdapter, IGLiveBroadcastLogger, IGLiveInviteFullScreenSearchViewController, IGLiveInviteSheetDataSource, IGLiveInviteSheetRequesterViewController, IGLiveInviteSheetView, IGLiveNetworkPoller, IGLiveRequestToJoinPuller, IGSimpleCrossfadeTransitionController, IGUserSession, NSArray, NSMutableArray, NSString;
@protocol IGLiveSectionedInviteControllerDelegate;

@interface IGLiveSectionedInviteSheetViewController : UIViewController <IGLiveInviteFullScreenSearchViewControllerDelegate, IGLiveInviteSearchServiceDelegate, IGLiveInviteSheetRequesterViewControllerDelegate, IGLiveInviteSheetViewDelegate, IGLiveNetworkPollerDelegate, IGShareSheetHeaderViewDelegate, IGStoryViewerSectionControllerViewerDelegate, UIScrollViewDelegate, IGGestureHandler, IGPartialModalSheetListener>
{
    IGUserSession *_userSession;
    IGLiveBroadcastLogger *_logger;
    IGLiveInviteSheetDataSource *_dataSource;
    IGLiveInviteSheetView *_inviteSheetView;
    IGListAdapter *_listAdapter;
    IGLiveNetworkPoller *_inviteSearchPoller;
    IGLiveRequestToJoinPuller *_requestToJoinPuller;
    NSString *_broadcastId;
    IGLiveInviteFullScreenSearchViewController *_fullScreenSearchViewController;
    IGLiveInviteSheetRequesterViewController *_requesterViewController;
    IGSimpleCrossfadeTransitionController *_fullScreenSearchCrossfadeTransitionController;
    NSArray *_requestedUsers;
    NSArray *_invitableUsers;
    NSArray *_previousSelectedUsers;
    NSMutableArray *_selectedUsers;
    _Bool _didLoadRequest;
    _Bool _shouldUseRoomsBrandingString;
    unsigned long long _maxNumberOfInvitees;
    id <IGLiveSectionedInviteControllerDelegate> _delegate;
    NSArray *_unselectableUsers;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(copy, nonatomic) NSArray *selectedUsers; // @synthesize selectedUsers=_selectedUsers;
@property(copy, nonatomic) NSArray *unselectableUsers; // @synthesize unselectableUsers=_unselectableUsers;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(nonatomic) __weak id <IGLiveSectionedInviteControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxNumberOfInvitees; // @synthesize maxNumberOfInvitees=_maxNumberOfInvitees;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_logImpressionOnCompletion;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)poller:(id)arg1 didFinishRequestWithContext:(id)arg2 parsedResponse:(id)arg3 error:(id)arg4;
- (void)poller:(id)arg1 willBeginRequestWithContext:(id)arg2;
- (void)liveInviteSearchService:(id)arg1 didLoadWithUsers:(id)arg2 appending:(_Bool)arg3 error:(id)arg4;
- (void)storyViewerSectionController:(id)arg1 presentStoryForReel:(id)arg2 media:(id)arg3 fromView:(id)arg4 profilePictureView:(id)arg5;
- (void)storyViewerSectionController:(id)arg1 didHideViewerSource:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapMoreButtonInViewerCell:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapProductThumbnailInViewerCell:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapCheckmarkButtonInViewerCell:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapViewerSource:(id)arg2;
- (void)_handleTapWithViewerSource:(id)arg1;
- (void)liveInviteSheetViewDidTapSearchBar:(id)arg1;
- (void)liveInviteSheetViewDidTapBottomButton:(id)arg1;
- (void)liveInviteFullScreenSearchViewControllerDidDismiss:(id)arg1;
- (void)liveInviteFullScreenSearchViewController:(id)arg1 didTapUser:(id)arg2;
- (void)liveInviteSheetRequesterViewControllerDidDismiss:(id)arg1;
- (void)liveInviteSheetRequesterViewController:(id)arg1 didTapUser:(id)arg2;
- (void)shareSheetHeaderViewDidTapRightButton:(id)arg1;
- (void)shareSheetHeaderViewDidTapBackButton:(id)arg1;
- (void)shareSheetHeaderViewDidTapSearchButton:(id)arg1;
- (void)shareSheetHeaderViewDidTapClearButton:(id)arg1;
- (void)shareSheetHeaderView:(id)arg1 didChangeQueryString:(id)arg2;
- (void)_addInvitableUsers:(id)arg1;
- (void)_setInvitableUsers:(id)arg1;
- (void)_setRequestedUsers:(id)arg1;
- (void)_toggleSelectionWithUser:(id)arg1;
- (void)_updateSelectedUsersAnimated:(_Bool)arg1;
- (void)_showAllRequests;
- (void)_didLoadRequestedUsers:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 broadcastId:(id)arg2 shouldUseRoomsBrandingString:(_Bool)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


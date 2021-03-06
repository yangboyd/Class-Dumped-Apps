//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGCameraLegacyEffectTrayDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectShareSheetControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGKeyboardObserverFrameChangeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveBroadcastActionSheetControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveBroadcastCaptureManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveBroadcastControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveBroadcastControllerRecordingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveBroadcastResourceViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveBroadcastViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveCameraTrayViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveCompactGalleryDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveFeedbackControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveInteractivityServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveInviteControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveQuestionSheetViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveWithBroadcastActionSheetControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveWithPrivacyConfirmationViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaSharePlayerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryViewerSectionControllerViewerDelegate-Protocol.h>

@class FBTimer, IGCameraLegacyEffectTray, IGCameraViewController, IGKeyboardObserver, IGLiveBroadcastActionSheetController, IGLiveBroadcastConfig, IGLiveBroadcastDebugView, IGLiveBroadcastEventController, IGLiveBroadcastInviteLoggingContext, IGLiveBroadcastLogger, IGLiveBroadcastProductionManager, IGLiveBroadcastResourceViewController, IGLiveBroadcastToolbox, IGLiveBroadcastView, IGLiveCameraTrayViewController, IGLiveCommentViewUpdater, IGLiveCompactGalleryViewController, IGLiveDarkOverlayView, IGLiveDarkOverlayViewModel, IGLiveDebugInfoVideoProcessor, IGLiveFeedbackController, IGLiveInteractivityService, IGLiveInviteSheetViewController, IGLiveQuestionSheetViewController, IGLiveRequestToJoinCommentsUpdater, IGLiveRequestToJoinPuller, IGLiveRequestToJoinService, IGLiveRightsManagerService, IGLiveViewerListViewController, IGLiveWaveService, IGLiveWithBroadcastActionSheetController, IGLiveWithBroadcastView, IGMediaSharePlayer, IGUser, IGUserSession, IGViewController, NSString, UIView;
@protocol IGAlertHUDHandling, IGDirectShareSheetControlling, IGLiveBroadcastActiveViewControllerDelegate;

@interface IGLiveBroadcastActiveViewController : UIViewController <IGCameraLegacyEffectTrayDataSource, IGDirectShareSheetControllerDelegate, IGKeyboardObserverFrameChangeDelegate, IGLiveBroadcastActionSheetControllerDelegate, IGLiveBroadcastCaptureManagerDelegate, IGLiveBroadcastControllerDelegate, IGLiveBroadcastControllerRecordingDelegate, IGLiveBroadcastResourceViewControllerDelegate, IGLiveBroadcastViewDelegate, IGLiveCameraTrayViewControllerDelegate, IGLiveCompactGalleryDelegate, IGLiveFeedbackControllerDelegate, IGLiveInteractivityServiceDelegate, IGLiveInviteControllerDelegate, IGLiveQuestionSheetViewControllerDelegate, IGLiveWithBroadcastActionSheetControllerDelegate, IGLiveWithPrivacyConfirmationViewControllerDelegate, IGMediaSharePlayerDelegate, IGStoryViewerSectionControllerViewerDelegate>
{
    IGLiveDarkOverlayView *_darkOverlayView;
    _Bool _isPolicyViolatingStream;
    _Bool _isCheckpointedForPolicyViolation;
    IGLiveRightsManagerService *_rightsManagerService;
    _Bool _isFirstLayoutPass;
    IGViewController *_sourceViewController;
    NSString *_module;
    IGLiveCompactGalleryViewController *_compactGalleryViewController;
    struct CGPoint _compactGalleryPreviousScrollPosition;
    _Bool _isCompactGalleryAnimating;
    NSString *_selectedAssetIdentifier;
    IGMediaSharePlayer *_mediaSharePlayer;
    IGLiveDarkOverlayViewModel *_mediaSharingNUXViewModel;
    IGLiveQuestionSheetViewController *_liveQuestionSheetViewController;
    id <IGAlertHUDHandling> _alertHandler;
    IGLiveBroadcastProductionManager *_productionManager;
    IGLiveDebugInfoVideoProcessor *_debugVideoProcessor;
    IGLiveFeedbackController *_feedbackController;
    IGKeyboardObserver *_keyboardObserver;
    IGLiveBroadcastActionSheetController *_actionSheetController;
    IGLiveCommentViewUpdater *_commentViewUpdater;
    IGLiveViewerListViewController *_viewerListViewController;
    IGLiveWithBroadcastActionSheetController *_liveWithActionSheetController;
    IGLiveWithBroadcastView *_liveWithBroadcastView;
    IGLiveBroadcastEventController *_liveBroadcastEventController;
    _Bool _didHaveJoinedGuests;
    long long _viewerCountRefreshThreshold;
    FBTimer *_callStatusDismissTimer;
    IGUser *_liveWithGuest;
    long long _liveWithState;
    IGLiveBroadcastView *_contentView;
    IGLiveBroadcastDebugView *_debugOverlayView;
    IGCameraViewController *_cameraViewController;
    IGUserSession *_userSession;
    IGLiveBroadcastLogger *_logger;
    _Bool _isVisible;
    _Bool _isRealtimeQuestionSubmissionEnabled;
    IGLiveInviteSheetViewController *_inviteSheetViewController;
    id <IGDirectShareSheetControlling> _viewerInviteController;
    IGLiveBroadcastInviteLoggingContext *_viewerInviteLoggingContext;
    IGLiveBroadcastResourceViewController *_liveResourceViewController;
    IGLiveBroadcastConfig *_liveBroadcastConfig;
    _Bool _isShowingAREffectTray;
    _Bool _isAnimatingAREffectTray;
    IGLiveRequestToJoinPuller *_requestToJoinPuller;
    IGLiveRequestToJoinCommentsUpdater *_requestToJoinCommentsUpdater;
    IGLiveRequestToJoinService *_requestToJoinService;
    _Bool _requestToJoinEnabled;
    IGLiveWaveService *_waveService;
    IGLiveInteractivityService *_questionAnswerService;
    long long _totalSubmittedQuestionCount;
    long long _lastSeenSubmittedQuestionCount;
    IGLiveCameraTrayViewController *_cameraTrayController;
    IGCameraLegacyEffectTray *_arEffectTrayView;
    id <IGLiveBroadcastActiveViewControllerDelegate> _delegate;
    IGLiveBroadcastToolbox *_toolbox;
}

@property(readonly, nonatomic) IGLiveBroadcastToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(nonatomic) __weak id <IGLiveBroadcastActiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_unreadSubmittedQuestionCount;
- (void)interactivityServiceQuestionSubmissionStatusDidChange:(_Bool)arg1 submittedQuestionCount:(long long)arg2;
- (void)interactivityService:(id)arg1 didReceiveQuestionEvent:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 presentStoryForReel:(id)arg2 feedItem:(id)arg3 fromView:(id)arg4 profilePictureView:(id)arg5;
- (void)storyViewerSectionController:(id)arg1 didHideViewerSource:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapCheckmarkButtonInViewerCell:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapMoreButtonInViewerCell:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapViewerSource:(id)arg2;
- (void)dismissResourceViewController;
- (void)rejectButtonTappedInPrivacyConfirmationViewController:(id)arg1;
- (void)acceptButtonTappedInPrivacyConfirmationViewController:(id)arg1;
- (void)liveWithActionSheetController:(id)arg1 didTapInviteUser:(id)arg2;
- (void)compactGallery:(id)arg1 didPickAsset:(id)arg2 thumbnail:(id)arg3 indexPath:(id)arg4;
- (void)compactGalleryDidDeselect:(id)arg1;
- (void)compactGalleryDidAllowPhotoAccess:(id)arg1;
- (void)mediaSharePlayer:(id)arg1 didFetchAsset:(id)arg2;
- (void)_dismissMediaSharingNUXMarkAsSeen:(_Bool)arg1;
- (void)_showMediaSharingNUXIfNeeded;
- (void)_showMediaSharingTooltip;
- (struct CGRect)_compactGalleryFrameInRect:(struct CGRect)arg1;
- (void)_dismissCompactGalleryIfOpen;
- (void)_presentCompactGallery;
- (double)_bottomSafeAreaOffset;
- (void)actionSheetController:(id)arg1 didTapInviteLiveWithUser:(id)arg2;
- (void)actionSheetControllerDidDisplayActionSheet:(id)arg1;
- (void)actionSheetController:(id)arg1 didTapReportComment:(id)arg2 asSpam:(_Bool)arg3;
- (void)actionSheetController:(id)arg1 didReportComment:(id)arg2;
- (void)actionSheetController:(id)arg1 didHideFromUser:(id)arg2;
- (void)actionSheetController:(id)arg1 didTapUnpinComment:(id)arg2;
- (void)actionSheetController:(id)arg1 didTapPinComment:(id)arg2;
- (void)_toggleRequestToJoinState:(_Bool)arg1 newState:(_Bool)arg2;
- (void)actionSheetControllerDidTapShare:(id)arg1;
- (void)actionSheetControllerDidTapDisableRequestToJoin:(id)arg1;
- (void)actionSheetControllerDidTapEnableRequestToJoin:(id)arg1;
- (void)actionSheetControllerDidTapUnmuteComment:(id)arg1;
- (void)actionSheetControllerDidTapMuteComment:(id)arg1;
- (void)feedbackControllerDidFetchCommentMuteStatus:(_Bool)arg1;
- (void)feedbackController:(id)arg1 didFetchPinnedComment:(id)arg2;
- (void)feedbackControllerDidFailToUnmuteComments:(id)arg1;
- (void)feedbackControllerDidFailToMuteComments:(id)arg1;
- (void)feedbackController:(id)arg1 didFailToUnpinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didFailToPinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didHaveBroadcastUpdate:(id)arg2;
- (void)feedbackController:(id)arg1 hasLikerProfileImageReadyToDisplay:(id)arg2 likeCount:(long long)arg3 fromSelf:(_Bool)arg4 overDuration:(double)arg5;
- (void)feedbackController:(id)arg1 hasNumLikesReadyToDisplay:(long long)arg2 fromSelf:(_Bool)arg3 overDuration:(double)arg4 likeAnimationType:(unsigned long long)arg5;
- (void)feedbackController:(id)arg1 didReplaceCommentWithPk:(id)arg2 withComment:(id)arg3;
- (void)feedbackController:(id)arg1 didRemoveComment:(id)arg2;
- (void)feedbackController:(id)arg1 hasCommentsReadyToDisplay:(id)arg2 shouldLogImpression:(_Bool)arg3;
- (void)broadcastViewDidRequestToHideTrays:(id)arg1;
- (void)broadcastViewDidTapAREffectButton:(id)arg1;
- (void)broadcastViewDidTapLiveResourceTooltip:(id)arg1;
- (void)broadcastViewDidTapLiveResourceButton:(id)arg1;
- (void)broadcastViewDidTapDismissGuestButton:(id)arg1;
- (void)broadcastView:(id)arg1 didPan:(id)arg2;
- (void)doubleTappedInBroadcastView:(id)arg1;
- (void)broadcastViewDidTapCancelCallButton:(id)arg1;
- (void)broadcastViewDidExpandViewerList:(id)arg1;
- (void)galleryButtonTappedInBroadcastView:(id)arg1;
- (void)soundButtonTappedInBroadcastView:(id)arg1;
- (void)liveWithInviteButtonTappedInBroadcastView:(id)arg1;
- (void)liveQuestionRemovedInBroadcastView:(id)arg1;
- (void)liveQuestionOverlayTappedInBroadcastView:(id)arg1;
- (void)liveQuestionButtonTappedInBroadcastView:(id)arg1;
- (void)viewerInviteButtonTappedInBroadcastView:(id)arg1;
- (void)switchCameraButtonTappedInBroadcastView:(id)arg1;
- (void)closeButtonTappedInBroadcastView:(id)arg1;
- (void)moreButtonTappedInBroadcastView:(id)arg1;
- (void)broadcastView:(id)arg1 didChangeZoomScaleWithDelta:(double)arg2;
- (void)broadcastView:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3 shouldExpandViewerList:(_Bool)arg4 cell:(id)arg5;
- (void)broadcastView:(id)arg1 didReceiveUnpinTapOnComment:(id)arg2;
- (void)broadcastView:(id)arg1 didEnterCommentText:(id)arg2 commentLoggingExtras:(id)arg3;
- (_Bool)broadcastViewCanShowKeyboard:(id)arg1;
- (void)broadcastViewDidUnpinCurrentComment:(id)arg1;
- (_Bool)broadcastViewCanToggleCommentsHeight:(id)arg1;
- (_Bool)broadcastViewCanPanMedia:(id)arg1 panGesture:(id)arg2;
- (void)broadcastView:(id)arg1 didTapWithGestureRecognizer:(id)arg2;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_hideDarkOverlay;
- (void)_stopPullingForRequestToJoin;
- (void)_startPullingForRequestToJoin;
- (void)_arEffectTrayViewDidHideView:(id)arg1;
- (void)_hideViewerInviteControllerIfOpen;
- (void)_hideLiveWithInviteSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_hideAREffectTrayIfOpen;
- (void)_showAREffectTray;
- (void)_toggleAREffectTray;
- (void)_presentLiveWithInviteSheetView;
- (void)_presentViewerInviteControllerFromEntryPoint:(long long)arg1;
- (void)_presentLiveQuestionSheet;
- (void)_presentInviteSheet:(id)arg1;
- (void)_presentViewerList;
- (void)_hideAllOpenModals;
- (void)reloadCameraEffectTrayData;
- (void)setDoubleTapGestureEnabled:(_Bool)arg1;
- (void)hideAREffectInstructions;
- (void)showAREffectInstructions:(id)arg1 forDuration:(double)arg2;
- (void)showAREffectInstructions:(id)arg1;
- (void)arEffectTrayViewDidDisappear;
- (void)arEffectTrayViewDidAppearWithHeight:(double)arg1;
- (void)liveBroadcastController:(id)arg1 didEndSession:(id)arg2 diskRecordingResults:(id)arg3;
- (void)liveBroadcastControllerVideoCaptureStalled:(id)arg1;
- (void)liveBroadcastControllerAudioCaptureStalled:(id)arg1;
- (void)liveBroadcastControllerDidDismissFromCall:(id)arg1 reason:(long long)arg2;
- (void)liveBroadcastController:(id)arg1 didFailInvitationForUser:(id)arg2;
- (void)liveBroadcastControllerDidGetDeclinedInvitation:(id)arg1;
- (void)_cancelPendingInvitationForReason:(long long)arg1;
- (void)liveBroadcastControllerDidReceiveInvitation:(id)arg1;
- (void)liveBroadcastController:(id)arg1 didUpdateStatusToConnectingForUserId:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didRemoveVideoId:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didAddVideoInView:(id)arg2 videoId:(id)arg3;
- (void)liveBroadcastController:(id)arg1 broadcastForSession:(id)arg2 didFailWithError:(id)arg3;
- (void)liveBroadcastController:(id)arg1 didFailStartBroadcastForSession:(id)arg2 error:(id)arg3;
- (void)liveBroadcastController:(id)arg1 didChangeBitrate:(double)arg2;
- (void)liveBroadcastControllerDidReconnect:(id)arg1;
- (void)liveBroadcastControllerDidLoseConnection:(id)arg1;
- (void)liveBroadcastControllerDidResume:(id)arg1 videoId:(id)arg2;
- (void)liveBroadcastControllerDidStall:(id)arg1 videoId:(id)arg2;
- (void)liveBroadcastControllerDidSwapBackToRtmp:(id)arg1;
- (void)liveBroadcastController:(id)arg1 didFailCreateSessionWithError:(id)arg2 shouldUseMessageFromError:(_Bool)arg3;
- (void)liveBroadcastController:(id)arg1 didUpdateBroadcastWithStats:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didStartBroadcastForSession:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didConnectToServerForSession:(id)arg2 withSpeedTestSuccess:(_Bool)arg3;
- (void)captureManagerIsReadyToProcessNewAREffect:(id)arg1;
- (void)captureManagerDidEndInterruption:(id)arg1;
- (void)captureManagerWasInterrupted:(id)arg1;
- (void)captureManagerDidStartRunning:(id)arg1;
- (void)captureManagerDidChangeCamera:(id)arg1 toPosition:(long long)arg2;
- (void)captureManagerWillChangeCamera:(id)arg1;
- (void)captureManager:(id)arg1 activatingAudioSessionDidError:(id)arg2;
- (void)captureManager:(id)arg1 didCaptureVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManager:(id)arg1 didCaptureAudioBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_handleBackOrCloseButtonTap;
- (void)_showUnableToJoinMessageForUser:(id)arg1;
- (void)_showDeclinedJoinMessageForUser:(id)arg1;
- (void)_hideBroadcastFromUser:(id)arg1;
- (void)_handleBroadcastEvent:(long long)arg1;
- (void)_showCallStatusBarWithUser:(id)arg1;
- (void)_inviteUser:(id)arg1;
- (void)_showOverlayForNetworkIssue;
- (void)_displayBroadcastPauseOverlayForReason:(long long)arg1;
- (void)_resumeBroadcastIfPossible;
- (void)_pauseBroadcastWithReason:(long long)arg1;
- (void)_endBroadcastSessionWithReason:(long long)arg1 error:(id)arg2;
- (void)_endFailedBroadcastSessionWithErrorMessage:(id)arg1 error:(id)arg2;
- (void)_endSuccessfulBroadcastSessionWithReason:(long long)arg1 isPolicyViolation:(_Bool)arg2 policyViolationReason:(id)arg3;
- (void)_displayNoViewersSystemCommentIfNeeded;
- (void)_displayStartupSystemComment;
- (id)_broadcastCaptureManager;
- (id)_broadcastController;
- (void)_adjustViewHeightsForKeyboardHeight:(double)arg1;
- (_Bool)_isLiveResourceShowing;
- (void)_presentLiveResourceViewController;
- (void)_configureLiveResourceViewControllerWithType:(id)arg1 resourceData:(id)arg2;
- (_Bool)_isLiveReshareSheetShowing;
- (_Bool)_isViewerListShowing;
- (_Bool)_isLiveWithInviteSheetShowing;
- (void)_handleSoftPolicyViolationReason:(id)arg1;
- (void)_setRealtimeQuestionSubmissionEnabled:(_Bool)arg1;
- (void)_publishQuestion:(id)arg1;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPost:(id)arg6;
- (void)liveCameraTrayViewController:(id)arg1 didSelectEffect:(id)arg2;
- (id)effectsForLiveCameraTrayViewController:(id)arg1;
- (_Bool)arEffectTrayViewShouldDisplayDiscoveryEntryPoint:(id)arg1;
- (long long)arEffectTrayViewLoggingSurface:(id)arg1;
- (_Bool)shouldAllowRealtimeQuestionFeatureInLiveQuestionSheetViewController:(id)arg1;
- (_Bool)shouldAllowRealtimeQuestionSubmissionInLiveQuestionSheetViewController:(id)arg1;
- (void)liveQuestionSheetViewController:(id)arg1 realtimeQuestionSubmissionEnabledDidChange:(_Bool)arg2;
- (void)liveQuestionSheetViewControllerDidSelectQuestion:(id)arg1;
- (void)liveInviteSheetDidDismissWithSelectedUser:(id)arg1;
- (void)_onAppWillTerminate:(id)arg1;
- (void)_onAppDidBecomeActive:(id)arg1;
- (void)_onAppWillResignActive:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) UIView *trayView;
@property(readonly, nonatomic) UIView *cameraGesturesContainerView;
- (double)_safeAreaCornerRadius;
- (void)setCameraViewController:(id)arg1;
- (void)setStartingCameraPosition:(long long)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 broadcastToolbox:(id)arg3 liveBroadcastConfig:(id)arg4 arEffectApplicator:(id)arg5 selectedAREffectIndex:(long long)arg6 sourceViewController:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


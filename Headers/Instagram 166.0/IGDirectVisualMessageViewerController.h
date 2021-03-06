//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGCameraEffectBottomSheetViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCameraEffectCollectionContextSheetViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectCameraPresentationManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerButtonDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerSizingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectComposerTextListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMessageSendingListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectVisualMessageViewerThreadsUpsellFooterViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGInvitesStickerInvitedUsersViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGNotificationHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetListener-Protocol.h>
#import <InstagramAppCoreFramework/IGPresentableStoryViewer-Protocol.h>
#import <InstagramAppCoreFramework/IGScreenshotObserverDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSoundStateListenerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryAttributionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCreationViewControllerNavigationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFullscreenGestureDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFullscreenHeaderViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFullscreenRetryDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFullscreenTappableOverlayDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFullscreenUploadFooterViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryPlayerMediaViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSwipeDismissibleContainerControllerDelegate-Protocol.h>

@class IGBlurredImageView, IGDirectUIThread, IGDirectVisualMessage, IGDirectVisualMessagePlayerLoggingInfo, IGDirectVisualMessageViewerComposerViewController, IGDirectVisualMessageViewerPreloader, IGDirectVisualMessageViewerThreadsUpsellFooterView, IGKeyboardInputManager, IGSoundStateListener, IGStoryViewerContainerView, IGSwipeDismissibleContainerController, IGUserSession, NSArray, NSMutableSet, NSString, UIView;
@protocol IGDirectCameraPresentationManagerProtocol, IGDirectComposerProtocol, IGDirectMessageReplying, IGDirectOutgoingUpdateSending, IGDirectVisualMessageViewerDataSource, IGDirectVisualMessageViewerDismissalDelegate, IGSubscriptionToken;

@interface IGDirectVisualMessageViewerController : IGViewController <IGCameraEffectBottomSheetViewControllerDelegate, IGCameraEffectCollectionContextSheetViewControllerDelegate, IGDirectCameraPresentationManagerDelegate, IGDirectComposerButtonDelegate, IGDirectComposerSizingDelegate, IGDirectComposerTextListener, IGDirectMessageSendingListener, IGDirectVisualMessageViewerThreadsUpsellFooterViewDelegate, IGInvitesStickerInvitedUsersViewControllerDelegate, IGPartialModalSheetListener, IGScreenshotObserverDelegate, IGSoundStateListenerDelegate, IGStoryAttributionDelegate, IGStoryCreationViewControllerNavigationDelegate, IGStoryFullscreenGestureDelegate, IGStoryFullscreenHeaderViewDelegate, IGStoryFullscreenRetryDelegate, IGStoryFullscreenTappableOverlayDelegate, IGStoryFullscreenUploadFooterViewDelegate, IGStoryPlayerMediaViewDelegate, IGSwipeDismissibleContainerControllerDelegate, IGPresentableStoryViewer, IGNotificationHandler>
{
    id <IGDirectVisualMessageViewerDataSource> _dataSource;
    NSArray *_eventResponders;
    IGDirectVisualMessageViewerPreloader *_preloader;
    IGUserSession *_userSession;
    IGDirectVisualMessage *_currentVisualMessageFromPlaylistWhenViewerWasLaunched;
    long long _currentVisualMessageIndex;
    IGSoundStateListener *_soundStateListener;
    IGSwipeDismissibleContainerController *_swipeContainerController;
    IGStoryViewerContainerView *_viewerContainerView;
    IGBlurredImageView *_videoPreviewImageView;
    _Bool _isVisible;
    _Bool _isPlaybackPausedForInteraction;
    _Bool _isPlaybackPausedForThreadsUpsell;
    id <IGDirectCameraPresentationManagerProtocol> _cameraPresentationManager;
    id <IGDirectMessageReplying> _messageReplyHandler;
    IGDirectVisualMessageViewerComposerViewController *_composerViewController;
    UIView<IGDirectComposerProtocol> *_inputView;
    IGDirectVisualMessageViewerThreadsUpsellFooterView *_threadsUpsellFooterView;
    IGKeyboardInputManager *_keyboardInputManager;
    NSMutableSet *_alreadyScreenshottedMediaIds;
    id <IGDirectOutgoingUpdateSending> _outgoingUpdateSender;
    _Bool _didDisplayNuxInSegment;
    NSArray *_headerAttributionControllers;
    NSString *_threadId;
    id <IGSubscriptionToken> _threadSubscriptionToken;
    IGDirectUIThread *_thread;
    CDUnknownBlockType _sendAttributionFactory;
    _Bool _shouldShowThreadsUpsell;
    _Bool _shouldShowUploadingMediaInterface;
    id <IGDirectVisualMessageViewerDismissalDelegate> _dismissalDelegate;
    long long _entryPoint;
}

+ (long long)maxNumberOfVisualMessagesSupportedByViewer;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(nonatomic) __weak id <IGDirectVisualMessageViewerDismissalDelegate> dismissalDelegate; // @synthesize dismissalDelegate=_dismissalDelegate;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_showThreadsVisualMessageUpsellWithPanGesture:(id)arg1;
- (void)storyFullscreenThreadsUpsellFooterViewDidTapFooterView:(id)arg1;
- (long long)cameraEffectBottomSheetViewControllerCaptureType:(id)arg1;
- (void)cameraEffectBottomSheetViewControllerDidTapTryIt:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (id)cameraEffectBottomSheetViewControllerAttributionModelForCurrentAREffect:(id)arg1;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didRequestRemovalOfEffectWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)cameraEffectBottomSheetViewControllerShouldPresentCamera:(id)arg1;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didToggleSaveToWishlist:(_Bool)arg2 showToast:(_Bool)arg3;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didTapViewProductItem:(id)arg2;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didToggleNetworkAccess:(_Bool)arg2;
- (void)cameraEffectBottomSheetViewControllerDidLeaveFullscreenMode:(id)arg1;
- (void)cameraEffectBottomSheetViewControllerDidEnterFullscreenMode:(id)arg1;
- (void)cameraEffectCollectionContextSheetViewControllerResumePlayback:(id)arg1;
- (void)cameraEffectCollectionContextSheetViewControllerShowContextSheet:(id)arg1 config:(id)arg2 bottomSheetController:(id)arg3;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)storyAttributionPauseStory;
- (void)storyAttributionDidTapFacebookUpsellAttributionController:(id)arg1;
- (void)storyAttributionDidTapSponsored;
- (void)storyAttributionDidTapInvitesStickerAttributionController:(id)arg1;
- (void)storyAttributionDidTapCreateModeAttributionController:(id)arg1;
- (void)storyAttributionDidTapCameraEffectPreviewAttribution:(id)arg1 effectCreatorUserName:(id)arg2;
- (void)storyAttributionDidTapBrandedContentSponsorsAttribution:(id)arg1 sponsorsUserReference:(id)arg2;
- (void)storyAttributionAdsOptInAttributionDidTapAdsOptInAttribution:(id)arg1;
- (void)storyAttributionDidTapThreadsUpsellAttributionController:(id)arg1;
- (void)storyAttributionDidTapCameraEffectAttribution:(id)arg1;
- (void)storyAttributionDidTapClipsAttribution:(id)arg1;
- (void)storyAttributionDidTapMusicAttribution:(id)arg1;
- (void)soundListenerDidSetStickySoundState:(id)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (unsigned long long)notificationPresentationPermissionsForNotificationSource:(unsigned long long)arg1;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)arg1 needsImmediateLayout:(_Bool)arg2;
- (_Bool)inputViewShouldAvoidModeUpdateOnTextChange:(id)arg1;
- (_Bool)inputViewShouldAutomaticallyClearTextOnSend:(id)arg1;
- (void)inputView:(id)arg1 didTapSelfieStickerButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerSearchButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerButton:(id)arg2;
- (void)inputView:(id)arg1 voiceMessageLongPressGestureRecognizerDidUpdate:(id)arg2;
- (void)inputView:(id)arg1 didLongPressSendButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapReshareButton:(id)arg2;
- (void)inputView:(id)arg1 didTapEmojiReactionEntrypointButton:(id)arg2;
- (void)inputView:(id)arg1 didTapVoiceMessageButton:(id)arg2;
- (void)inputView:(id)arg1 didTapAnimatedMediaButton:(id)arg2;
- (void)inputView:(id)arg1 didTapGalleryButton:(id)arg2;
- (void)inputView:(id)arg1 didTapCameraButton:(id)arg2;
- (void)inputView:(id)arg1 didTapQuickReplyButton:(id)arg2 isHighlighted:(_Bool)arg3 text:(id)arg4;
- (void)inputView:(id)arg1 didTapLikeButton:(id)arg2;
- (void)inputView:(id)arg1 didTapMoreButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSendButtonWithText:(id)arg2 quotedContent:(id)arg3;
- (void)inputView:(id)arg1 didLongPressCameraButtonWithGesture:(id)arg2;
- (void)composerDidEndEditing:(id)arg1;
- (void)composerDidBeginEditing:(id)arg1;
- (void)composerDidTapOnTextArea:(id)arg1;
- (void)composerDidReachMaxTextLength:(id)arg1;
- (void)composer:(id)arg1 didChangeToText:(id)arg2 mode:(id)arg3;
- (void)presentationManagerDidDismiss:(id)arg1 withDirectRecipients:(id)arg2;
- (void)dismissalDestinationViewForRecipients:(id)arg1 groupStoryRecipients:(id)arg2 sourceIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)presentationManagerWillDismiss:(id)arg1 withDirectRecipients:(id)arg2;
- (void)presentationManagerWillSend:(id)arg1 withDirectRecipients:(id)arg2;
- (void)storyViewerDismissableContainerGestureDidEnd:(id)arg1 didDismiss:(_Bool)arg2;
- (void)storyViewerDismissableContainerGestureDidBegin:(id)arg1;
@property(readonly, copy, nonatomic) NSString *viewModelIdentifier;
@property(readonly, nonatomic) UIView *backgroundViewForAnimation;
@property(readonly, nonatomic) UIView *contentViewForSnapshot;
@property(readonly, nonatomic) UIView *contentViewForAnimation;
@property(readonly, nonatomic) UIView *profileImageViewForAnimation;
- (void)_notifyAboutCapturedContent;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)arg1 event:(long long)arg2;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)arg1;
- (_Bool)_shouldDisplayInvitesStickerNux;
- (_Bool)_shouldDisplayPollStickerNux;
- (void)_showTooltipIfNeededWithProgress:(double)arg1;
- (void)storyPlayerMediaView:(id)arg1 didGenerateVideoPlaybackWarningWithError:(id)arg2;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(id)arg1;
- (void)storyPlayerMediaView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)storyPlayerMediaView:(id)arg1 willLoadURL:(id)arg2;
- (void)storyPlayerMediaViewDidFailToPlayback:(id)arg1 error:(id)arg2;
- (void)storyPlayerMediaViewDidFailToLoadImage:(id)arg1 error:(id)arg2 networkRequestSummary:(id)arg3;
- (void)storyPlayerMediaViewDidPlay:(id)arg1;
- (void)storyPlayerMediaViewDidPlayToEnd:(id)arg1;
- (void)storyPlayerMediaView:(id)arg1 didUpdateProgress:(double)arg2 player:(id)arg3 captionController:(id)arg4;
- (void)storyPlayerMediaViewDidLoad:(id)arg1 loadSource:(id)arg2 networkRequestSummary:(id)arg3;
- (void)uploadFooterViewDidTapMoreOptionButton:(id)arg1;
- (_Bool)uploadFooterViewShouldDisplayMoreOptionButton:(id)arg1;
- (void)uploadFooterViewDidTapUploadRetryButton:(id)arg1;
- (void)fullscreenOverlayDidTapRetry:(id)arg1;
- (void)_dismissStoryCreationController:(id)arg1;
- (void)creationViewControllerDidUploadDemoVideo:(id)arg1;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 toGroupStoriesRecipients:(id)arg6 asset:(id)arg7 storyModelArray:(id)arg8 metadataArray:(id)arg9;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)invitesStickerInvitedUsersViewController:(id)arg1 didTapAddMoreInviteesButtonWithModel:(id)arg2;
- (void)fullscreenOverlayDidTapRemoveViewerEmojiReaction:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 progressIndexSelected:(long long)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapDiscussionSticker:(id)arg2 atPointInWindowCoordinates:(struct CGPoint)arg3;
- (void)fullscreenOverlayDidTapBloksSticker:(id)arg1 bloksModel:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapHitMeUpStickerWithModel:(id)arg2;
- (void)_presentGroupPollStickerVoterHalfSheetWithModel:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didTapGroupPollStickerView:(id)arg2 atPointInWindowCoordinates:(struct CGPoint)arg3 tapTarget:(id)arg4;
- (void)fullscreenOverlay:(id)arg1 didTapInvitesStickerView:(id)arg2 atPointInWindowCoordinates:(struct CGPoint)arg3 tapTarget:(id)arg4;
- (void)fullscreenOverlay:(id)arg1 didTapPollSticker:(id)arg2 voteIndex:(long long)arg3 tapTarget:(id)arg4;
- (void)fullscreenOverlay:(id)arg1 didTapProductObject:(id)arg2 inDropsReminderButton:(_Bool)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapUpcomingEventObject:(id)arg2 tapPoint:(struct CGPoint)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapFeedPostObject:(id)arg2 tapPoint:(struct CGPoint)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapLocationObject:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapHashtagObject:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapUserObject:(id)arg2 mentionType:(long long)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapURL:(id)arg2 tapModel:(id)arg3;
- (void)fullscreenOverlayDidDisplayShareProfessionalStickerNux:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didEndSlidingSlider:(id)arg2 withVote:(double)arg3 inStickerViewMode:(long long)arg4;
- (void)fullscreenOverlay:(id)arg1 didBeginSlidingSlider:(id)arg2;
- (void)fullscreenOverlayDidDisplayRollCallStickerNux:(id)arg1;
- (void)fullscreenOverlayDidDisplayHitMeUpStickerNux:(id)arg1;
- (void)fullscreenOverlayDidDisplayElectionStickerNux:(id)arg1;
- (void)fullscreenOverlayDidDisplayMusicStickerAudioIndicatorNux:(id)arg1;
- (void)fullscreenOverlayDidDisplaySliderStickerNux:(id)arg1;
- (void)fullscreenOverlayDidDisplayDropsStickerNux:(id)arg1;
- (void)fullscreenOverlayDidDisplayProductStickerNux:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didReachCountdownStickerEndDate:(id)arg2;
- (void)fullscreenOverlayDidDisplayCountdownStickerNux:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didTapRollCallSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapSMBSupportSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapFundraiserSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didRequestSaveForProductItem:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didReachDropStickerLaunchDate:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapCountdownSticker:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapMusicLyricsStickerObject:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapMusicStickerObject:(id)arg2;
- (void)fullscreenOverlayDidDisplayInvitesStickerNux:(id)arg1;
- (void)fullscreenOverlayDidDisplayPollStickerNux:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didTapQuizStickerView:(id)arg2 atPointInWindowCoordinates:(struct CGPoint)arg3 tapTarget:(id)arg4;
- (void)fullscreenOverlay:(id)arg1 didTapQuestionAnswerStickerView:(id)arg2;
- (void)fullscreenOverlayDidTapSoundOnSticker:(id)arg1;
- (void)fullscreenOverlayDidHideTooltip:(id)arg1;
- (void)fullscreenOverlayDidDisplayHeaderAttributionTooltip:(id)arg1;
- (void)fullscreenOverlayDidDisplayTappableOverlayTooltip:(id)arg1 tapModel:(id)arg2 tapPoint:(struct CGPoint)arg3 isFromSticker:(_Bool)arg4;
- (void)storyAttributionDidTapUnlockedStickerAttributionController:(id)arg1;
- (void)handleActionSheetAttributionClick:(id)arg1;
- (void)headerView:(id)arg1 didTapWithCyclingAttributionViews:(id)arg2;
- (void)headerViewdidLayoutWithlayoutExtra:(id)arg1;
- (void)headerView:(id)arg1 storyAdsOptInTextView:(id)arg2 willTransitionFromType:(unsigned long long)arg3;
- (void)headerView:(id)arg1 didTapUsername:(id)arg2;
- (void)headerViewDidTapMore:(id)arg1;
- (void)headerViewDidTapOwnerImage:(id)arg1;
- (void)headerViewDidTapSecondaryTopLineText:(id)arg1;
- (void)headerViewDidTapTopLineText:(id)arg1;
- (void)headerViewDidTapFavoritesButton:(id)arg1;
- (void)_didTapHeaderViewDismissButton:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didTapCustomClientGeneratedTapObject:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)fullscreenOverlay:(id)arg1 didRotationGesture:(id)arg2;
- (void)fullscreenOverlayDidLayoutSubviews:(id)arg1;
- (void)fullscreenOverlayDidPanUp:(id)arg1 panUpGestureLoggingModel:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didBeginUpwardPanGesture:(id)arg2;
- (void)fullscreenOverlayDidSwipeDown:(id)arg1;
- (void)fullscreenOverlayDidSwipeUp:(id)arg1 swipeUpGesture:(id)arg2;
- (void)fullscreenOverlayDidEndPressing:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didLongPressWithGesture:(id)arg2;
- (void)fullscreenOverlay:(id)arg1 didBeginPressingInRegion:(long long)arg2 withGesture:(id)arg3;
- (void)fullscreenOverlay:(id)arg1 didTapInRegion:(long long)arg2;
- (_Bool)_isComposingMessage;
- (void)_pauseViewerForReply;
- (void)_dismissInputViewManager;
- (void)_replyToCurrentMediaWithEntryPoint:(unsigned long long)arg1 effectID:(id)arg2 configuration:(id)arg3 switcherMode:(long long)arg4;
- (void)_replyToCurrentMediaUsingSourceMedia:(id)arg1 entryPoint:(unsigned long long)arg2 effectID:(id)arg3 switcherMode:(long long)arg4;
- (void)_replyToCurrentMediaWithEntryPoint:(unsigned long long)arg1 startWithText:(_Bool)arg2 effectID:(id)arg3 switcherMode:(long long)arg4;
- (void)_loadCurrentUploadStatusOfPendingMessage:(id)arg1;
- (void)outgoingMessageWithPayload:(id)arg1 didFailToSendWithError:(id)arg2;
- (void)outgoingMessagePayloadSuccessfullySent:(id)arg1;
- (void)_mediaLoadDidSucceed:(_Bool)arg1 atIndex:(long long)arg2;
- (void)_loadMediaViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_configureMediaView;
- (void)_removeMediaView;
- (void)_updateOverlayViewForMediaLoading:(_Bool)arg1;
- (void)_resetOverlayView;
- (void)_updateOverlayProgressView;
- (void)_removeOverlayProgressViewSegmentAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_configureTapModels;
- (void)_configureOverlayView;
- (void)_loadVisualMessage:(id)arg1 atIndex:(long long)arg2;
- (void)_threadDidUpdate:(id)arg1;
- (void)_setupThreadSubscription;
- (void)_setOverlayViewChromeHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_unpausePlaybackForInteractionIfNeeded;
- (void)_pausePlaybackForInteractionIfNeededWithReason:(long long)arg1;
- (void)_pausePlaybackForTooltipDisplay;
- (_Bool)_isPlaybackControlsEnabledAndMediaViewReady;
- (void)_handlePlaybackError:(id)arg1 networkRequestSummary:(id)arg2;
- (void)_handlePlaybackDidBegin;
- (void)_rewindCurrentMediaViewForNavType:(long long)arg1;
- (void)_updateFooterView;
- (void)_setShouldShowThreadsUpsell:(_Bool)arg1;
- (void)_showUploadingMediaInterface:(_Bool)arg1;
- (_Bool)_resumePlaybackIfEligible;
- (void)_endPlaybackForNavType:(long long)arg1;
- (void)_dismissForNavType:(long long)arg1;
- (void)_loopForNavType:(long long)arg1;
- (_Bool)_shouldLoopBackwardsForNavType:(long long)arg1;
- (_Bool)_shouldLoopForNavType:(long long)arg1;
- (void)_wrapAroundFromFirstSegmentToLastSegment;
- (void)_rewindForNavType:(long long)arg1;
- (void)_advanceForNavType:(long long)arg1;
- (void)dismissForNavType:(long long)arg1;
@property(readonly, nonatomic) UIView *currentMediaView;
- (id)_currentVisualMessage;
@property(readonly, nonatomic) IGDirectVisualMessagePlayerLoggingInfo *mediaPlayerLoggingInfo;
- (struct CGRect)_viewerContainerViewFrame;
- (void)_setupInputView;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithThreadId:(id)arg1 dataSource:(id)arg2 entryPoint:(long long)arg3 eventResponders:(id)arg4 preloader:(id)arg5 outgoingUpdateSender:(id)arg6 cameraPresentationManager:(id)arg7 messageReplyHandler:(id)arg8 sendAttributionFactory:(CDUnknownBlockType)arg9 userSession:(id)arg10;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


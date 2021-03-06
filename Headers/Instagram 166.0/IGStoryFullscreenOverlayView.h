//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGCountdownStickerViewConsumptionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDropsProductStickerViewConsumptionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFullScreenContentGatingViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGHeartAnimatable-Protocol.h>
#import <InstagramAppCoreFramework/IGSliderStickerViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryAdEndSceneViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFullscreenProgressViewScrubbingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStorySharingInterstitialViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryViewerTapTargetDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTooltipViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class BKBloksHostingView, BKContext, FBTimer, IGCountdownStickerView, IGDiscussionStickerView, IGFOAPollStickerVoteView, IGFullScreenContentGatingView, IGFundraiserStickerView, IGGradientView, IGGroupPollStickerView, IGHitMeUpStickerView, IGInvitesStickerView, IGMediaOverlayView, IGPanGestureRecognizer, IGPassthroughView, IGPollStickerVoteView, IGProductShareStickerView, IGProductStickerModel, IGQuestionAnswerStickerView, IGQuizStickerView, IGRollCallStickerView, IGRotaryGestureRecognizer, IGSMBSupportStickerView, IGSliderStickerView, IGStoryAdEndSceneView, IGStoryComposerBackgroundView, IGStoryEmojiReactionReactorsView, IGStoryFullscreenFooterContainerView, IGStoryFullscreenHeaderView, IGStoryFullscreenProgressView, IGStoryGradientRingView, IGStoryHeaderAttributionTooltipContentView, IGStoryOverlayTapModel, IGStorySMBSupportStickerModel, IGStorySharingInterstitialView, IGStoryTappableOverlayTooltipContentView, IGStoryViewerCollaborateButton, IGStoryViewerMusicAudioIndicatorView, IGSuggestedHighlightEndCardOverlayView, IGTapButton, IGTooltipView, IGUserSession, NSDate, NSMutableArray, NSString, NSValue, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISwipeGestureRecognizer, UIVisualEffectView;
@protocol IGMediaOverlayDelegate, IGStoryFullscreenAdEndSceneDelegate, IGStoryFullscreenGestureDelegate, IGStoryFullscreenMentionStoryShareDelegate, IGStoryFullscreenRetryDelegate, IGStoryFullscreenSensitivityScreenDelegate, IGStoryFullscreenTappableOverlayDelegate, IGStoryFullscreenVideoPlayDelegate, IGStoryProductStickerProtocol, IGStorySharingInterstitialViewDelegate;

@interface IGStoryFullscreenOverlayView : UIView <UIGestureRecognizerDelegate, IGStoryViewerTapTargetDelegate, IGTooltipViewDelegate, IGCoreTextLinkHandler, IGCountdownStickerViewConsumptionDelegate, IGSliderStickerViewDelegate, IGStoryFullscreenProgressViewScrubbingDelegate, IGStorySharingInterstitialViewDelegate, IGFullScreenContentGatingViewDelegate, IGDropsProductStickerViewConsumptionDelegate, IGHeartAnimatable, IGStoryAdEndSceneViewDelegate>
{
    IGGradientView *_leftTapGradientView;
    _Bool _shouldAnimateLeftTap;
    IGGradientView *_topGradientView;
    IGGradientView *_bottomGradientView;
    IGGradientView *_rightGradientView;
    UILongPressGestureRecognizer *_pressGesture;
    struct CGPoint _pressStartLocationInWindow;
    _Bool _tapPending;
    FBTimer *_tapTimeout;
    UISwipeGestureRecognizer *_swipeDownGesture;
    IGPanGestureRecognizer *_tappableOverlayTooltipTouchGesture;
    _Bool _isDragUpBrowserEnabled;
    struct CGPoint _panUpGestureStartPoint;
    NSMutableArray *_panGestureDirectionSequence;
    _Bool _isFirstPanUpOnCurrentStory;
    _Bool _isTappingAndHold;
    NSDate *_panUpGestureStartTime;
    double _cumulativeVerticalPanDisplacement;
    IGStoryTappableOverlayTooltipContentView *_tappableOverlayTooltipContentView;
    NSMutableArray *_overlayTapTargets;
    struct CGSize _mediaSize;
    struct CGSize _mediaViewSize;
    IGPassthroughView *_tappableOverlayClippingView;
    IGFOAPollStickerVoteView *_igFOAPollStickerVoteView;
    IGPollStickerVoteView *_pollStickerVoteView;
    IGStoryOverlayTapModel *_pollStickerTapModel;
    IGStoryOverlayTapModel *_sliderTapModel;
    IGStoryOverlayTapModel *_questionAnswerTapModel;
    IGStoryOverlayTapModel *_quizTapModel;
    IGStoryOverlayTapModel *_countdownTapModel;
    IGStoryOverlayTapModel *_fundraiserTapModel;
    IGStoryOverlayTapModel *_smbSupportTapModel;
    IGStoryOverlayTapModel *_hitMeUpTapModel;
    IGStoryOverlayTapModel *_invitesTapModel;
    IGStoryOverlayTapModel *_discussionTapModel;
    IGStoryOverlayTapModel *_productStickerTapModel;
    IGStoryOverlayTapModel *_productShareStickerTapModel;
    IGStoryOverlayTapModel *_musicStickerTapModel;
    IGStoryOverlayTapModel *_groupPollStickerTapModel;
    IGStoryOverlayTapModel *_rollCallStickerTapModel;
    IGStoryViewerMusicAudioIndicatorView *_musicStickerAudioIndicatorView;
    IGStoryOverlayTapModel *_bloksSticker;
    BKBloksHostingView *_bloksStickerHostingView;
    IGTooltipView *_nuxTooltip;
    UIVisualEffectView *_blurredMaskView;
    UIView *_emptyView;
    NSString *_module;
    IGStoryHeaderAttributionTooltipContentView *_headerAttributionTooltipContentView;
    _Bool _panGestureDestinationPresented;
    _Bool _shouldConfigureForVerticalScrollFullscreen;
    _Bool _shouldConfigureForVerticalScrollWithPeeks;
    _Bool _hasEmojiReactors;
    FBTimer *_tapGutterTimer;
    UIView *_leftTapGutterDebugView;
    UIView *_rightTapGutterDebugView;
    _Bool _hasTapGutterDelayPassed;
    IGUserSession *_userSession;
    BKContext *_bloksContext;
    UIView<IGStoryProductStickerProtocol> *_productStickerView;
    _Bool _storyHighlight;
    _Bool _nullStateVisible;
    _Bool _skipResizingMediaView;
    _Bool _isSponsored;
    _Bool _isShowingEndScene;
    _Bool _showsTapAndHoldIndicator;
    _Bool _shouldCreateComposerBackgroundView;
    UIView *_moreButton;
    IGStoryViewerCollaborateButton *_collaborationView;
    IGStoryFullscreenProgressView *_progressView;
    IGStoryFullscreenHeaderView *_headerView;
    IGStoryFullscreenFooterContainerView *_footerContainerView;
    IGSuggestedHighlightEndCardOverlayView *_suggestedHighlightEndCardView;
    IGStoryComposerBackgroundView *_composerBackgroundView;
    IGFullScreenContentGatingView *_sensitivityView;
    IGMediaOverlayView *_mediaOverlayView;
    IGMediaOverlayView *_mediaOverlayBanner;
    IGStoryAdEndSceneView *_endSceneView;
    IGStoryGradientRingView *_loadingView;
    IGTapButton *_retryButton;
    id <IGStoryFullscreenGestureDelegate> _gestureDelegate;
    id <IGStoryFullscreenTappableOverlayDelegate> _tappableOverlayDelegate;
    id <IGStoryFullscreenVideoPlayDelegate> _videoPlayDelegate;
    id <IGStoryFullscreenRetryDelegate> _retryDelegate;
    id <IGStoryFullscreenMentionStoryShareDelegate> _mentionShareDelegate;
    id <IGStoryFullscreenSensitivityScreenDelegate> _sensitivityScreenDelegate;
    id <IGMediaOverlayDelegate> _mediaOverlayDelegate;
    id <IGStorySharingInterstitialViewDelegate> _sharingInterstitialViewControllerDelegate;
    id <IGStoryFullscreenAdEndSceneDelegate> _endSceneDelegate;
    UISwipeGestureRecognizer *_swipeUpGesture;
    UIPanGestureRecognizer *_panUpGesture;
    IGRotaryGestureRecognizer *_rotationGesture;
    IGSliderStickerView *_sliderStickerView;
    IGQuizStickerView *_quizStickerView;
    IGTooltipView *_tappableOverlayTooltip;
    IGQuestionAnswerStickerView *_questionAnswerStickerView;
    IGProductShareStickerView *_productShareStickerView;
    IGCountdownStickerView *_countdownStickerView;
    IGFundraiserStickerView *_fundraiserStickerView;
    IGSMBSupportStickerView *_smbSupportStickerView;
    IGHitMeUpStickerView *_hitMeUpStickerView;
    IGInvitesStickerView *_invitesStickerView;
    IGDiscussionStickerView *_discussionStickerView;
    IGGroupPollStickerView *_groupPollStickerView;
    IGRollCallStickerView *_rollCallStickerView;
    NSValue *_electionStickerTooltipPoint;
    IGStoryEmojiReactionReactorsView *_emojiReactionReactorsView;
    UILabel *_tapAndHoldLabel;
    double _headerScaleRatio;
    double _bottomInset;
    double _tapAndHoldSwipeSpeedThreshold;
    IGProductStickerModel *_productStickerModel;
    IGStorySMBSupportStickerModel *_smbSupportStickerModel;
    IGTapButton *_promptButton;
    IGTapButton *_skipButton;
    IGStorySharingInterstitialView *_sharingInterstitialView;
    IGTooltipView *_emojiReactionUnsendButtonTooltip;
    UIView *_highlightButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *highlightButton; // @synthesize highlightButton=_highlightButton;
@property(readonly, nonatomic) IGTooltipView *emojiReactionUnsendButtonTooltip; // @synthesize emojiReactionUnsendButtonTooltip=_emojiReactionUnsendButtonTooltip;
@property(readonly, nonatomic) IGStorySharingInterstitialView *sharingInterstitialView; // @synthesize sharingInterstitialView=_sharingInterstitialView;
@property(retain, nonatomic) IGTapButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) _Bool shouldCreateComposerBackgroundView; // @synthesize shouldCreateComposerBackgroundView=_shouldCreateComposerBackgroundView;
@property(retain, nonatomic) IGTapButton *promptButton; // @synthesize promptButton=_promptButton;
@property(readonly, nonatomic) IGStorySMBSupportStickerModel *smbSupportStickerModel; // @synthesize smbSupportStickerModel=_smbSupportStickerModel;
@property(readonly, nonatomic) IGProductStickerModel *productStickerModel; // @synthesize productStickerModel=_productStickerModel;
@property(nonatomic) double tapAndHoldSwipeSpeedThreshold; // @synthesize tapAndHoldSwipeSpeedThreshold=_tapAndHoldSwipeSpeedThreshold;
@property(nonatomic) _Bool showsTapAndHoldIndicator; // @synthesize showsTapAndHoldIndicator=_showsTapAndHoldIndicator;
@property(nonatomic) _Bool isShowingEndScene; // @synthesize isShowingEndScene=_isShowingEndScene;
@property(nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(nonatomic) _Bool skipResizingMediaView; // @synthesize skipResizingMediaView=_skipResizingMediaView;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(nonatomic) double headerScaleRatio; // @synthesize headerScaleRatio=_headerScaleRatio;
@property(readonly, nonatomic) UILabel *tapAndHoldLabel; // @synthesize tapAndHoldLabel=_tapAndHoldLabel;
@property(readonly, nonatomic) IGStoryEmojiReactionReactorsView *emojiReactionReactorsView; // @synthesize emojiReactionReactorsView=_emojiReactionReactorsView;
@property(readonly, nonatomic) NSValue *electionStickerTooltipPoint; // @synthesize electionStickerTooltipPoint=_electionStickerTooltipPoint;
@property(readonly, nonatomic) IGRollCallStickerView *rollCallStickerView; // @synthesize rollCallStickerView=_rollCallStickerView;
@property(readonly, nonatomic) IGGroupPollStickerView *groupPollStickerView; // @synthesize groupPollStickerView=_groupPollStickerView;
@property(readonly, nonatomic) IGDiscussionStickerView *discussionStickerView; // @synthesize discussionStickerView=_discussionStickerView;
@property(readonly, nonatomic) IGInvitesStickerView *invitesStickerView; // @synthesize invitesStickerView=_invitesStickerView;
@property(readonly, nonatomic) IGHitMeUpStickerView *hitMeUpStickerView; // @synthesize hitMeUpStickerView=_hitMeUpStickerView;
@property(readonly, nonatomic) IGSMBSupportStickerView *smbSupportStickerView; // @synthesize smbSupportStickerView=_smbSupportStickerView;
@property(readonly, nonatomic) IGFundraiserStickerView *fundraiserStickerView; // @synthesize fundraiserStickerView=_fundraiserStickerView;
@property(readonly, nonatomic) IGCountdownStickerView *countdownStickerView; // @synthesize countdownStickerView=_countdownStickerView;
@property(readonly, nonatomic) IGProductShareStickerView *productShareStickerView; // @synthesize productShareStickerView=_productShareStickerView;
@property(readonly, nonatomic) IGQuestionAnswerStickerView *questionAnswerStickerView; // @synthesize questionAnswerStickerView=_questionAnswerStickerView;
@property(readonly, nonatomic) IGTooltipView *tappableOverlayTooltip; // @synthesize tappableOverlayTooltip=_tappableOverlayTooltip;
@property(readonly, nonatomic) IGQuizStickerView *quizStickerView; // @synthesize quizStickerView=_quizStickerView;
@property(readonly, nonatomic) IGSliderStickerView *sliderStickerView; // @synthesize sliderStickerView=_sliderStickerView;
@property(readonly, nonatomic) IGPollStickerVoteView *pollStickerVoteView; // @synthesize pollStickerVoteView=_pollStickerVoteView;
@property(readonly, nonatomic) IGFOAPollStickerVoteView *igFOAPollStickerVoteView; // @synthesize igFOAPollStickerVoteView=_igFOAPollStickerVoteView;
@property(readonly, nonatomic) IGRotaryGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property(readonly, nonatomic) UIPanGestureRecognizer *panUpGesture; // @synthesize panUpGesture=_panUpGesture;
@property(readonly, nonatomic) UISwipeGestureRecognizer *swipeUpGesture; // @synthesize swipeUpGesture=_swipeUpGesture;
@property(nonatomic) __weak id <IGStoryFullscreenAdEndSceneDelegate> endSceneDelegate; // @synthesize endSceneDelegate=_endSceneDelegate;
@property(nonatomic) __weak id <IGStorySharingInterstitialViewDelegate> sharingInterstitialViewControllerDelegate; // @synthesize sharingInterstitialViewControllerDelegate=_sharingInterstitialViewControllerDelegate;
@property(nonatomic) __weak id <IGMediaOverlayDelegate> mediaOverlayDelegate; // @synthesize mediaOverlayDelegate=_mediaOverlayDelegate;
@property(nonatomic) __weak id <IGStoryFullscreenSensitivityScreenDelegate> sensitivityScreenDelegate; // @synthesize sensitivityScreenDelegate=_sensitivityScreenDelegate;
@property(nonatomic) __weak id <IGStoryFullscreenMentionStoryShareDelegate> mentionShareDelegate; // @synthesize mentionShareDelegate=_mentionShareDelegate;
@property(nonatomic) __weak id <IGStoryFullscreenRetryDelegate> retryDelegate; // @synthesize retryDelegate=_retryDelegate;
@property(nonatomic) __weak id <IGStoryFullscreenVideoPlayDelegate> videoPlayDelegate; // @synthesize videoPlayDelegate=_videoPlayDelegate;
@property(nonatomic) __weak id <IGStoryFullscreenTappableOverlayDelegate> tappableOverlayDelegate; // @synthesize tappableOverlayDelegate=_tappableOverlayDelegate;
@property(nonatomic) __weak id <IGStoryFullscreenGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(readonly, nonatomic) IGTapButton *retryButton; // @synthesize retryButton=_retryButton;
@property(readonly, nonatomic) IGStoryGradientRingView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) IGStoryAdEndSceneView *endSceneView; // @synthesize endSceneView=_endSceneView;
@property(readonly, nonatomic) IGMediaOverlayView *mediaOverlayBanner; // @synthesize mediaOverlayBanner=_mediaOverlayBanner;
@property(readonly, nonatomic) IGMediaOverlayView *mediaOverlayView; // @synthesize mediaOverlayView=_mediaOverlayView;
@property(readonly, nonatomic) IGFullScreenContentGatingView *sensitivityView; // @synthesize sensitivityView=_sensitivityView;
@property(readonly, nonatomic) IGStoryComposerBackgroundView *composerBackgroundView; // @synthesize composerBackgroundView=_composerBackgroundView;
@property(readonly, nonatomic) IGSuggestedHighlightEndCardOverlayView *suggestedHighlightEndCardView; // @synthesize suggestedHighlightEndCardView=_suggestedHighlightEndCardView;
@property(readonly, nonatomic) IGStoryFullscreenFooterContainerView *footerContainerView; // @synthesize footerContainerView=_footerContainerView;
@property(readonly, nonatomic) IGStoryFullscreenHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) IGStoryFullscreenProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic, getter=isNullStateVisible) _Bool nullStateVisible; // @synthesize nullStateVisible=_nullStateVisible;
@property(nonatomic, getter=isStoryHighlight) _Bool storyHighlight; // @synthesize storyHighlight=_storyHighlight;
@property(retain, nonatomic) IGStoryViewerCollaborateButton *collaborationView; // @synthesize collaborationView=_collaborationView;
- (_Bool)_shouldUseVerticalProgressBar;
- (_Bool)_shouldScrubTopProgressBar;
- (_Bool)_shouldScrubBottomProgressBar;
- (_Bool)_shouldMoveProgressBarToBottom;
- (_Bool)_shouldUseTrayScrubber;
- (_Bool)isShowingSmartReplies;
- (void)clearComposerText;
- (_Bool)isComposingMessage;
- (void)_presentQuickReactionsViewTooltipIfNecessary;
- (void)_configureTappableOverlay:(id)arg1;
- (void)_hideEmojiReactionUnsendTooltip;
- (void)showEmojiReactionUnsendTooltipWithViewerEmojiReactionButtonIfPossible:(id)arg1;
- (void)showEmojiReactEntrypointTooltipWithNuxType:(long long)arg1 fromComposerNuxCTATap:(_Bool)arg2;
- (_Bool)isShowingEmojiReactorsList;
- (_Bool)isInEmojiReactorBrowsingMode;
- (_Bool)isEmojiReactionsPresentingSkinTonePicker;
- (_Bool)isShowingEmojiReactions;
- (id)contentViewForHeartAnimation;
- (void)fullscreenContentGatingView:(id)arg1 timerProgressed:(double)arg2;
- (void)fullscreenContentGatingViewTimerExpired:(id)arg1;
- (void)fullscreenContentGatingViewDidTapSeeWhy:(id)arg1;
- (void)fullscreenContentGatingViewDidTapContinueActionSheet:(id)arg1;
- (void)fullscreenContentGatingViewDidDismissActionSheet:(id)arg1;
- (void)fullscreenContentGatingViewDidDisplayActionSheet:(id)arg1;
- (_Bool)_shouldOverrideEdgeTapForTapTarget:(id)arg1;
- (void)displayTooltipForTapTarget:(id)arg1 atPoint:(struct CGPoint)arg2 isFromSticker:(_Bool)arg3;
- (void)didTapOverlayTapTarget:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didTapTooltipView:(id)arg1;
- (id)_interactiveStickers;
- (void)setInteractiveStickersHidden:(_Bool)arg1;
- (void)_presentTooltipWithContentView:(id)arg1 pinPoint:(struct CGPoint)arg2 direction:(long long)arg3 anchorPoint:(struct CGPoint)arg4 edgeInsets:(struct UIEdgeInsets)arg5;
- (void)_presentTappableOverlayTooltipWithContentView:(id)arg1 pinPoint:(struct CGPoint)arg2 direction:(long long)arg3 anchorPoint:(struct CGPoint)arg4 edgeInsets:(struct UIEdgeInsets)arg5 isFromSticker:(_Bool)arg6;
- (void)_removeAllTappableOverlays;
- (void)removeTappableOverlayTooltipAnimated:(_Bool)arg1;
- (id)_pressedTapTargetWithPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_isOtherGesturePanGestureFromAscendentView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGRect)_bottomHalfTappableRegion;
- (struct CGRect)_topHalfTappableRegion;
- (struct CGRect)_rightEdgeTappableRegion;
- (struct CGRect)_leftEdgeTappableRegion;
- (double)_edgeTapWidth;
- (long long)_regionForPoint:(struct CGPoint)arg1;
- (long long)_regionForGesture:(id)arg1;
- (void)_resetTapGutterDelayPassed:(_Bool)arg1;
- (void)_fadeOutBackGradientIfNeeded;
- (void)_resetPressGestureState;
- (void)_handlePressGestureEnded:(id)arg1;
- (void)_handleTapTimeout:(id)arg1;
- (void)_handlePressGestureBegan:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePressGesture:(id)arg1;
- (void)_resetPanUpGestureLoggingInfo;
- (void)_handlePanUpGesture:(id)arg1;
- (void)_handleSwipeDownGesture:(id)arg1;
- (void)_handleSwipeUpGesture:(id)arg1;
- (void)_didTouchTappableOverlayTooltip:(id)arg1;
- (void)storyAdEndSceneViewDidTapCTA:(id)arg1;
- (void)progressView:(id)arg1 didScrubToSegment:(long long)arg2;
- (void)handleScrubGesture:(id)arg1;
- (void)dropStickerViewDidRequestSave:(id)arg1 productItem:(id)arg2;
- (void)dropStickerViewDidReachLaunchDate:(id)arg1;
- (void)countdownStickerViewDidReachEndDate:(id)arg1;
- (void)sliderStickerViewDidReceiveTapOnEmoji:(id)arg1;
- (void)sliderStickerView:(id)arg1 didEndSlidingEmojiWithValue:(double)arg2 inStickerViewMode:(long long)arg3;
- (void)sliderStickerViewDidBeginSlidingEmoji:(id)arg1;
- (void)sliderStickerViewDidChangeText:(id)arg1;
@property(nonatomic) _Bool musicStickerAudioIndicatorAnimating;
- (_Bool)isWaitingForUserConfirmSharingInterstitial;
- (void)storyInterstitialViewUserConfirm:(id)arg1;
- (void)displaySharingInterstitialScreenWithDelegate:(id)arg1 viewModel:(id)arg2 analyticsModule:(id)arg3;
- (void)setFullscreenGestureEnabled:(_Bool)arg1;
- (void)setEndSceneViewShown:(_Bool)arg1;
- (void)configureEndSceneWithViewModel:(id)arg1;
- (void)setMediaOverlayShown:(_Bool)arg1;
- (id)_configureMediaOverlayView:(id)arg1 contentGateableMediaItem:(id)arg2 renderType:(unsigned long long)arg3;
- (void)configureBannerWithContentGateableMediaItem:(id)arg1;
- (void)configureOverlayWithContentGateableMediaItem:(id)arg1;
- (void)displaySensitivityViewWithGating:(id)arg1;
- (void)showHitMeUpSent;
- (_Bool)hasProductIntegrityReviewConcerns;
- (void)productStickerDidAppear;
- (_Bool)hasProductSticker;
- (void)setSuggestedHighlightEndCardOverlayShown:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureSuggestedHighlightEndCardOverlayWithTitle:(id)arg1 coverImageModel:(id)arg2 analyticsModule:(id)arg3;
- (void)removeProductStickerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showHitMeUpTooltipWithUsername:(id)arg1;
- (void)showInvitesTooltip;
- (void)showCountdownTooltip;
- (void)showPromotableStoryWithUserStickerTooltip;
- (void)showPromotableStoryWithHashtagStickerTooltip;
- (void)showPromotableStoryWithLocationStickerTooltip;
- (void)showPromotableStoryWithPollStickerTooltip;
- (void)showPromoteTooltip;
- (void)_showPromoteTooltipWithText:(id)arg1 andTag:(id)arg2;
- (_Bool)showShuffleTooltip;
- (void)showShareToFacebookTooltip;
- (_Bool)hasFacebookShareButton;
- (void)_removeNuxTooltipAnimated:(_Bool)arg1 dismissedByUser:(_Bool)arg2;
- (void)_showNuxTooltipWithText:(id)arg1 pinPoint:(struct CGPoint)arg2 direction:(long long)arg3 analyticsTag:(id)arg4;
- (void)showShareProfessionalStickerNuxTooltipForTappableOverlay:(id)arg1;
- (void)showBloksTooltipWithStickerModel:(id)arg1 tappableOverlay:(id)arg2 stickerCount:(unsigned long long)arg3 mediaId:(id)arg4;
- (void)showQuestionAnswerResponsesTooltip;
- (void)showFBOnlyMediaTooltip;
- (_Bool)showHighlightsIntroTooltip;
- (void)showPollStickerNuxIfPossibleWithPollOwnerUsername:(id)arg1 isSponsored:(_Bool)arg2;
- (void)removeInteractiveStickerViewsAndNux;
- (void)showRollCallStickerNuxTooltip;
- (void)showElectionStickerNuxTooltip;
- (void)showMusicStickerAudioIndicatorNux;
- (void)showDropsTooltipWithTitle:(id)arg1;
- (void)showProductStickerNuxTooltipWithTitle:(id)arg1;
- (void)showSliderNuxTooltipWithSliderOwnerUsername:(id)arg1;
- (void)showFavoritesConsumptionTooltipWithTitle:(id)arg1 analyticsTag:(id)arg2;
- (void)showGroupStoryCameraTooltip;
- (void)showMultiAuthorStoryTooltipWithString:(id)arg1 analyticsTag:(id)arg2;
- (void)showGenericLinkAttributionFromHeaderSubtitleAttributionView:(id)arg1 title:(id)arg2 attributionURL:(id)arg3;
- (_Bool)isTooltipShowing;
- (void)hideNUXTooltipIfVisible;
- (void)setPromptButtonHidden:(_Bool)arg1;
- (void)setRightGradientViewHidden:(_Bool)arg1;
- (void)setBottomGradientViewHidden:(_Bool)arg1;
- (void)setFooterContainerViewHidden:(_Bool)arg1;
- (void)setMinimalHeaderChrome:(_Bool)arg1;
- (void)emojiReactionReactorsListWillUnhide;
- (void)setEmojiReactionReactorsListHiddenFromLongTap:(_Bool)arg1;
- (void)setHeaderChromeHidden:(_Bool)arg1;
- (void)setChromeHidden:(_Bool)arg1;
- (void)setQuickReactionHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setIsComposingMessage:(_Bool)arg1 shouldCoverUnderlyingItems:(_Bool)arg2 replyType:(unsigned long long)arg3;
- (void)didPresentEmojiReactorReplyModal:(unsigned long long)arg1;
- (void)_layoutEmojiReactorsListIfNeeded;
- (void)configureEmojiReactorReactorList:(id)arg1;
- (void)configureComposerBackgroundView:(id)arg1 storySmartRepliesViewModel:(id)arg2 emojiReactionViewModel:(id)arg3 emojiReactionDelegate:(id)arg4 isGroupStoriesInfoVisible:(_Bool)arg5 hasEmojiReactors:(_Bool)arg6;
- (void)configureWithTappableOverlays:(id)arg1 mediaSize:(struct CGSize)arg2 isCurrentUser:(_Bool)arg3 module:(id)arg4;
- (void)prepareForReuse;
- (void)_retryButtonTapped;
- (void)_setupComposerBackgroundView;
@property(readonly, nonatomic) UIView *moreButton; // @synthesize moreButton=_moreButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 shouldAnimateLeftTap:(_Bool)arg2 shouldCreateComposerBackgroundView:(_Bool)arg3 userSession:(id)arg4 bloksContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatBaseViewController.h"

#import "SCActionMenuViewControllerDelegate-Protocol.h"
#import "SCActionable-Protocol.h"
#import "SCAddToGroupViewControllerDelegate-Protocol.h"
#import "SCBitmojiAvatarBuilderRouterDelegate-Protocol.h"
#import "SCBlockedExceptionAlertControllerDelegate-Protocol.h"
#import "SCCaptureWorkflowResultDelegate-Protocol.h"
#import "SCChatAddToGroupViewPresenting-Protocol.h"
#import "SCChatCellGestureDelegate-Protocol.h"
#import "SCChatConversationUpdaterListener-Protocol.h"
#import "SCChatDrawerSender-Protocol.h"
#import "SCChatEraseMessageControllerDelegate-Protocol.h"
#import "SCChatFullscreenMediaChatTableCellDelegate-Protocol.h"
#import "SCChatInputMediaAccessoryDelegate-Protocol.h"
#import "SCChatInputSnapAccessoryDelegate-Protocol.h"
#import "SCChatInputSnapParameterProvider-Protocol.h"
#import "SCChatInputStateListener-Protocol.h"
#import "SCChatInputStickerAudioDelegate-Protocol.h"
#import "SCChatInputTextViewListener-Protocol.h"
#import "SCChatInputViewControllerDelegate-Protocol.h"
#import "SCChatStickerFavoritesDelegate-Protocol.h"
#import "SCChatTableViewV3PresenterDelegate-Protocol.h"
#import "SCChatTapActionHandlerDataProviding-Protocol.h"
#import "SCChatViewHeaderDataSource-Protocol.h"
#import "SCCommerceOperaPresenterDelegate-Protocol.h"
#import "SCFriendProfilePageActionHandlerDelegate-Protocol.h"
#import "SCGroupProfilePageActionHandlerDelegate-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCReplyDelegate-Protocol.h"
#import "SCS2RStackDebuggable-Protocol.h"
#import "SCSavableItemChatTableViewCellDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCSnapReplayControllerV3Delegate-Protocol.h"
#import "SCSnapReplayControllerV3Provider-Protocol.h"
#import "SCSnapReplayViewCellDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTPresencePillTapListener-Protocol.h"
#import "SCTextChatTableViewCellV2Delegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SCAddToGroupViewController, SCBaseMediaOperaPresenter, SCChatBaseTableView, SCChatMediaMessageSenderHelper, SCChatPushLogger, SCChatTableViewV3Delegate, SCChatTableViewV3Presenter, SCChatUIActionHandler, SCChatViewLifeCycleListenerAnnouncer, SCCommerceOperaPresenter, SCCustomVolumeController, SCFeedVerticalPresenter, SCLazy, SCMaxGroupSizeAlertView, SCNewGroupAddToGroupDelegateImpl, SCNewGroupViewController, SCSearchStoriesPresenter, SCStartChatIdentifier, SCUnifiedProfilePresenter, SCUserSession, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindow;
@protocol SCActionHandling, SCChatConversationViewModel, SCChatMessageReleaser;

@interface SCChatViewControllerV3 : SCChatBaseViewController <SCActionMenuViewControllerDelegate, SCGroupsDataRequestListener, SCSnapReplayControllerV3Delegate, SCChatEraseMessageControllerDelegate, SCCommerceOperaPresenterDelegate, SCSnapchattersDataRequestListener, SCSavableItemChatTableViewCellDelegate, SCTextChatTableViewCellV2Delegate, SCChatInputViewControllerDelegate, SCChatInputSnapParameterProvider, SCChatInputSnapAccessoryDelegate, SCChatStickerFavoritesDelegate, SCChatInputStateListener, SCChatInputTextViewListener, SCGroupProfilePageActionHandlerDelegate, SCFriendProfilePageActionHandlerDelegate, SCBitmojiAvatarBuilderRouterDelegate, SCChatTapActionHandlerDataProviding, SCChatInputMediaAccessoryDelegate, SCCaptureWorkflowResultDelegate, SCChatInputStickerAudioDelegate, SCChatAddToGroupViewPresenting, SCChatFullscreenMediaChatTableCellDelegate, SCChatCellGestureDelegate, SCSnapReplayControllerV3Provider, UIScrollViewDelegate, SCHeaderDelegate, SCTraceEnabled, UIGestureRecognizerDelegate, SCChatDrawerSender, SCBlockedExceptionAlertControllerDelegate, SCAddToGroupViewControllerDelegate, UINavigationControllerDelegate, SCChatTableViewV3PresenterDelegate, SCTPresencePillTapListener, SCReplyDelegate, SCActionable, SCSnapReplayViewCellDelegate, SCChatConversationUpdaterListener, SCS2RStackDebuggable, SCChatViewHeaderDataSource, SCShakeToReportDelegate, SCPageNameLogging>
{
    double _lastYOffset;
    SCUserSession *_userSession;
    NSString *_activeUserId;
    id <SCChatConversationViewModel> _conversationViewModel;
    id <SCChatMessageReleaser> _releaser;
    SCChatTableViewV3Presenter *_tableViewPresenter;
    SCLazy *_actionMenuVC;
    _Bool _actionMenuShown;
    SCLazy *_eraseMessageController;
    SCLazy *_mediaSendController;
    SCAddToGroupViewController *_addToGroupVC;
    SCNewGroupViewController *_newGroupVC;
    SCNewGroupAddToGroupDelegateImpl *_newGroupAddToGroupDelegate;
    SCFeedVerticalPresenter *_verticalPresenter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCLazy *_blockedExceptionAlertVC;
    SCMaxGroupSizeAlertView *_maxGroupSizeAlertView;
    _Bool _refreshBitmojisOnAccessoryChange;
    NSString *_lastOneOnOneRecipient;
    SCBaseMediaOperaPresenter *_operaPresenter;
    NSMutableArray *_conversationUpdateListeners;
    SCSearchStoriesPresenter *_searchStoriesPresenter;
    SCCommerceOperaPresenter *_commerceOperaPresenter;
    SCChatUIActionHandler *_chatActionHandler;
    long long _cameraPageSource;
    unsigned long long _deeplinkType;
    _Bool _pendingOpenHamburger;
    SCLazy *_replayController;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_usernameToSnapchatterFetcher;
    SCLazy *_groupSnapchatterRepository;
    SCLazy *_groupsDataCreator;
    SCLazy *_groupsDataMutator;
    SCLazy *_snapCountDownManager;
    _Bool _viewHasFullyAppeared;
    SCUnifiedProfilePresenter *_unifiedProfilePresenter;
    SCChatMediaMessageSenderHelper *_mediaMessageSenderHelper;
    _Bool _shouldSuppressKeyBoardForProfileDeepLink;
    SCLazy *_typingHandler;
    SCChatPushLogger *_chatPushLogger;
    _Bool _shouldKeepMuteOverrideOnDismiss;
    SCChatViewLifeCycleListenerAnnouncer *_lifeCycleAnnouncer;
    SCStartChatIdentifier *_activeChatIdentifier;
    UIWindow *_mediaFullScreenWindow;
    SCCustomVolumeController *_customVolumeController;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _snapViewingChatOffset;
    SCChatTableViewV3Delegate *_tableDelegate;
    SCChatBaseTableView *_tableView;
}

+ (id)pageViewName;
@property(retain, nonatomic) SCChatBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCChatTableViewV3Delegate *tableDelegate; // @synthesize tableDelegate=_tableDelegate;
@property(nonatomic) double snapViewingChatOffset; // @synthesize snapViewingChatOffset=_snapViewingChatOffset;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SCCustomVolumeController *customVolumeController; // @synthesize customVolumeController=_customVolumeController;
@property(retain, nonatomic) UIWindow *mediaFullScreenWindow; // @synthesize mediaFullScreenWindow=_mediaFullScreenWindow;
@property(readonly, copy, nonatomic) SCStartChatIdentifier *activeChatIdentifier; // @synthesize activeChatIdentifier=_activeChatIdentifier;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_chatActionHandler;
- (void)setLifeCycleAnnouncer:(id)arg1;
- (id)lifeCycleAnnouncer;
- (void).cxx_destruct;
- (void)didOverridingMuteSwitch:(_Bool)arg1;
- (id)defaultSubProjectName;
- (id)defaultProjectNameV2;
- (_Bool)_hasVisibleImmutableViewModelCells;
- (id)bitmojiAvatarBuilderPresentingViewController;
- (void)_switchToGroupChatWithGroupId:(id)arg1 deepLinkURL:(id)arg2;
- (_Bool)_isPresentedViewControllerUnifiedProfileViewController:(id)arg1;
- (void)_presentCameraForSnapchatterForUnifiedProfile:(id)arg1;
- (void)_pressCameraFromUnifiedProfile;
- (void)_presentGroupUnifiedProfileWithGroupId:(id)arg1;
- (void)friendProfilePageActionHandler:(id)arg1 navigatesToChatForGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)friendProfilePageActionHandler:(id)arg1 showCameraForSnapchatter:(id)arg2;
- (void)friendProfilePageActionHandler:(id)arg1 navigatesToChatForSnapchatterUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupProfilePageActionHandler:(id)arg1 showCameraForSnapchatter:(id)arg2;
- (void)groupProfilePageActionHandler:(id)arg1 showCameraForGroupId:(id)arg2;
- (void)groupProfilePageActionHandler:(id)arg1 navigatesToChatForSnapchatterUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupProfilePageActionHandler:(id)arg1 navigatesToChatForGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupProfilePageActionHandler:(id)arg1 showFriendProfileForSnapchatter:(id)arg2;
- (void)view:(id)arg1 didFinishAnimationForMessage:(id)arg2;
- (void)cell:(id)arg1 didFinishAnimationForMessage:(id)arg2;
- (double)borderThickness;
- (id)borderColor;
- (_Bool)shouldShowEditableHeader;
- (_Bool)isInChatCreationMode;
- (id)titleForHeader:(id)arg1;
- (id)tintColorForHeader;
- (id)fontForPlaceholderInHeader;
- (id)fontForHeader:(id)arg1;
- (id)textColorForPlaceholderInHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (double)_pencilIconPadding;
- (id)iconForPlaceholderAttributedString;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)backgroundColorForHeader;
- (id)imageForXButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (void)enableKeyboardConditionallyOnChatEntry;
- (void)_dismissChatViewControllerIfInChatWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissChatViewsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentBlockedExceptionAlertForConversationId:(id)arg1;
- (void)_didDeleteOrBlockSnapchatter;
- (void)_refreshSnapchatterData;
- (void)_didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)_didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)commerceOperaViewerDidDisappear:(id)arg1 unlockedLens:(id)arg2 additionalInfo:(id)arg3 wasBackgrounded:(_Bool)arg4;
- (void)commerceOperaViewerDidAppear:(id)arg1;
- (_Bool)shouldSuppressKeyboard;
- (void)replayControllerWillDisplayAlertView:(id)arg1;
- (void)replayControllerDidDismissAlertView:(id)arg1;
- (void)replayControllerConsumedRemainingCredits:(id)arg1 onSnap:(id)arg2 inConversation:(id)arg3;
- (_Bool)replyingToStoryWithChat;
- (void)didFollowThrough;
- (void)replyWithParameter:(id)arg1;
- (void)dismissActionMenu:(_Bool)arg1;
- (id)messageViewModelWithMessageId:(id)arg1;
- (id)currentGroupForGroupConversation;
- (void)performGesture:(long long)arg1 atIndexPath:(id)arg2 selectedIndex:(unsigned long long)arg3;
- (void)_setShouldAnimateOnSave:(_Bool)arg1 forIndexPath:(id)arg2;
- (void)_batchToggleSaveForStackedViewModel:(id)arg1;
- (void)saveItemAtIndexPath:(id)arg1 withSelectedIndex:(unsigned long long)arg2;
- (_Bool)isFullScreenPlayerShown;
- (void)updateTableContentInset:(double)arg1;
- (id)searchStoriesPresenter;
- (void)operaPresenterDidDisappear;
- (void)operaPresenterWillAppear;
- (id)operaPresenter;
- (void)didGrantBlockExceptionForGroup:(id)arg1;
- (void)_updateFriendmojiInChatIfNecessary;
- (void)_updateBitmojiPackageForConversation:(id)arg1;
- (void)_updateGroupFriendmojiImmediately:(_Bool)arg1;
- (void)_updateFriendmojiIfNecessary;
- (void)_didLeaveGroupId:(id)arg1;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)leavePreviewMode:(_Bool)arg1;
- (void)enterPreviewMode;
- (void)showMaxGroupSizeAlert;
- (void)navigateToChatViewWithGroupId:(id)arg1;
- (void)navigateToChatViewWithFriend:(id)arg1 deepLinkURL:(id)arg2 viewController:(id)arg3;
- (void)didPressMischiefConfirmationButton:(id)arg1 viewController:(id)arg2 groupName:(id)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)restoreViewAfterSideMenuDisappear;
- (void)prepareSideMenuAppear;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)presentAddToGroupWithBaseGroupId:(id)arg1;
- (void)didPressAddToGroupButton:(id)arg1;
- (void)_goRightWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)chatRecipientUsername;
- (id)currentGroup;
- (id)activeGroupId;
- (_Bool)tableIsFadedOut;
- (struct CGRect)_screenFrameExcludingHeader;
- (struct CGRect)mediaBoundingFrame;
- (_Bool)isPlayingSearchShare;
- (_Bool)isPlayingNYCShare;
- (_Bool)isPlayingStoryShare;
- (_Bool)isPlayingSnap;
- (void)hideCustomVolumeView;
- (void)showCustomVolumeViewIgnoringNextVolumeChange:(_Bool)arg1;
- (void)mediaDidDismissFullscreen;
- (void)mediaDidGoFullscreen:(_Bool)arg1;
- (void)mediaWillGoFullscreen;
- (void)didReceiveBitmojiInChat:(id)arg1 stickerId:(id)arg2;
- (_Bool)_isOneOnOneConversationActiveForConversationId:(id)arg1;
- (void)didShowPendingDisplayForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didShowCompleteDisplayForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didSelectPreserveMessageForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)_retryFailedMessageWithMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didRequestRetryFailedMessage:(id)arg1;
- (void)enableTableViewInteractionAfterChatNotesRecording;
- (void)disableTableViewInteractionBeforeChatNotesRecording;
- (void)sendVideoNoteWithData:(id)arg1 duration:(double)arg2;
- (void)sendAudioNoteWithData:(id)arg1 duration:(double)arg2;
- (void)sendBloop:(id)arg1 fromCategory:(id)arg2 fromPosition:(unsigned long long)arg3 fromFullscreen:(_Bool)arg4 fromSource:(long long)arg5;
- (void)sendMediaDrawerMedia:(id)arg1 fromLocation:(CDStruct_1dee9796)arg2;
- (void)sendSticker:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 fromSource:(long long)arg4;
- (void)removeLifeCycleListener:(id)arg1;
- (void)addLifeCycleListener:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_messageViewModelForIndexPath:(id)arg1;
- (id)_updatedViewModelForIndexPath:(id)arg1;
- (id)_messageViewModelForCell:(id)arg1;
- (void)userDidScreenRecord;
- (void)userDidTakeScreenshot;
- (void)_handleScreenCaptureWithType:(long long)arg1;
- (_Bool)_shouldNotifyParticipantOfChatScreenshot;
- (_Bool)_shouldPresentingOperaContentIgnoreScreenshot;
- (void)sccpConnectionStatusChanged;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didDismissAlertView;
- (void)willDisplayAlertView;
- (void)_updateGroupNameInHeader;
- (void)headerTextViewTextEditingDidBegin;
- (void)headerTextViewTextEditingDidEnd;
- (void)_cleanupUnifiedProfile;
- (id)presenceController;
- (void)leftButtonPressed;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_tapToLoadMediaViewModel:(id)arg1;
- (void)_tapToLoadReplyMediaViewModel:(id)arg1;
- (_Bool)_replyViewModelNeedsLoading:(id)arg1;
- (void)onCellTapped:(id)arg1 cell:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)didTapAddButtonForUsername:(id)arg1;
- (void)presentProfileForSnapchatter:(id)arg1 addSource:(long long)arg2;
- (void)handleCommerceDeepLink:(id)arg1 additionalInfo:(id)arg2;
- (void)didTapDeepLinkWithUrl:(id)arg1 additionalInfo:(id)arg2;
- (void)didLongPressOnMessageViewModel:(id)arg1 cell:(id)arg2;
- (void)stackedTableViewCellDidFinishPlayingNoteWithMessageId:(id)arg1;
- (id)_stackedCellIndexPathForViewModel:(id)arg1;
- (void)stackedTableViewCell:(id)arg1 didSelectIndex:(unsigned long long)arg2 viewModel:(id)arg3;
- (void)didReturnFromCameraWithoutSendingSnap;
- (void)didAttemptToSendMessage;
- (void)didPressSnapAccessoryButton;
- (struct NSDictionary *)conversationStickerUsageHistory;
- (_Bool)_hasJustViewedSnapMessage;
- (id)chatMetricsEventInfoForConversationId:(id)arg1;
- (void)mediaAccessoryDidSendMessageFromPreview:(id)arg1;
- (_Bool)isGroupConversation;
- (id)replyParameters;
- (id)recipient;
- (void)inputViewController:(id)arg1 textView:(id)arg2 didPasteMemoji:(id)arg3;
- (void)inputViewController:(id)arg1 textView:(id)arg2 didPasteGifData:(id)arg3;
- (void)_updateChatTypingStateWithState:(id)arg1;
- (_Bool)isPartiallyVisible;
- (void)inputController:(id)arg1 willActivateItem:(id)arg2;
- (_Bool)inputController:(id)arg1 textViewShouldBeginEditing:(id)arg2;
- (void)inputController:(id)arg1 typingStateDidChange:(long long)arg2;
- (void)inputController:(id)arg1 sizeDidChange:(struct CGSize)arg2;
- (void)inputController:(id)arg1 didSendText:(id)arg2;
- (void)inputViewController:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)inputViewController:(id)arg1 willTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)textChatTableViewCell:(id)arg1 didTapTag:(id)arg2;
- (void)_resetPresenceBar;
- (void)updateTableContainerViewBottomConstraint;
- (_Bool)_isPlayingMedia;
- (void)_playChatSoundMaybe:(unsigned long long)arg1;
- (void)_playChatSentSoundMaybe;
- (void)_addCustomVolumeIgnoringNextVolumeChange:(_Bool)arg1;
- (void)_removeCustomVolume;
- (_Bool)shouldDisableFullScreen;
- (void)dismissFullScreenView;
- (id)userSession;
- (void)eraseMessageController:(id)arg1 didDismissAlertView:(id)arg2;
- (void)eraseMessageControllerWillDisplayAlertView:(id)arg1;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)didPressSnapReplyForViewModel:(id)arg1 withSticker:(id)arg2;
- (void)didSaveMediasToCameraRollFromViewModel:(id)arg1;
- (void)didBatchSaveOrUnsaveMessageIds:(id)arg1 conversationId:(id)arg2 toSaved:(_Bool)arg3;
- (void)didSaveCustomSticker:(id)arg1;
- (void)unsaveMessageId:(id)arg1 conversationId:(id)arg2;
- (void)saveMessageId:(id)arg1 conversationId:(id)arg2;
- (void)_presentSendToForOwnerId:(id)arg1 mediaChatViewModel:(id)arg2;
- (void)didPressSendToForMediaChatViewModel:(id)arg1;
- (void)didPressSendToForForwardableViewModel:(id)arg1;
- (void)didPressEraseMessageId:(id)arg1 conversationId:(id)arg2;
- (void)actionMenuDidDismiss:(id)arg1;
- (void)actionMenuWillDismiss:(id)arg1;
- (void)actionMenuDidOpen:(id)arg1;
- (void)presentActionMenuViewControllerAtIndexPath:(id)arg1 selectedIndex:(unsigned long long)arg2 viewModel:(id)arg3;
- (void)handleOffsetChangedForCells:(double)arg1;
- (unsigned long long)_messageIndexForTouchPoint:(struct CGPoint)arg1 stackedCell:(id)arg2 includeWhitespace:(_Bool)arg3;
- (unsigned long long)messageIndexForTouchPoint:(struct CGPoint)arg1 viewModel:(id)arg2 includeWhitespace:(_Bool)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)pan:(id)arg1;
- (void)setActionMenuShown:(_Bool)arg1;
- (_Bool)_hasSendingMessageInBlockForPath:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onTapOnWhitespaceAroundStackedCell:(id)arg1;
- (void)longPress:(id)arg1;
- (id)replayController;
- (id)conversationViewModel;
- (void)_initInputController;
- (id)chatInputController;
- (void)blockMessageReleasing;
- (void)allowMessageReleasing;
- (_Bool)canBeShown;
- (id)activeConversationId;
- (_Bool)shouldDisableScrollOut:(id)arg1;
- (void)_resumeConversationIfNecessary;
- (void)resumeConversation;
- (void)viewDidPopFromStack;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)viewDidFullyDisappearFromStack:(_Bool)arg1;
- (void)viewDidFullyAppearFromStack:(_Bool)arg1 fromBackground:(_Bool)arg2;
- (void)releaseMemory;
- (void)viewWillEnterBackground;
- (void)willDisplayCells:(id)arg1;
- (void)willEndDisplayingCells:(id)arg1;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldPopToRootViewController;
- (void)didViewModelsChangeForConversationId:(id)arg1;
- (void)_notifyChildrenWithUpdatedViewModel:(id)arg1;
- (void)_addConversationUpdateListener:(id)arg1;
- (void)_notifyGroupInfoComponentsIfNecessaryForOldViewModel:(id)arg1 newViewModel:(id)arg2;
- (void)didInitialConversationFetchFailForConversationId:(id)arg1;
- (void)showMigrationStateMessageIfNeeded;
- (void)setSourceNotification:(id)arg1;
- (void)didConversationViewModelChange:(id)arg1;
- (id)conversationId;
- (void)unsetActiveConversation;
- (void)setDeepLinkType:(unsigned long long)arg1;
- (void)setChatSubpageName:(id)arg1;
- (void)setChatPageSource:(long long)arg1;
- (void)setActiveConversationById:(id)arg1 deeplinkType:(unsigned long long)arg2 conversationSource:(long long)arg3;
- (void)_showPendingViewModelForConversationId:(id)arg1 username:(id)arg2 isGroup:(_Bool)arg3;
- (void)_handleDeepLinkBeforeVisible;
- (void)_handleDeepLinkAfterViewDidSwipeIn;
- (void)setActiveTalkSessionForConversationWithId:(id)arg1;
- (void)prepareToBeVisible;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_initGestures;
- (void)_initMixins;
- (void)_initChatTable;
- (void)_initHeader;
- (void)_initLoggers;
- (id)additionalS2RDebugOutput;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 parentDelegate:(id)arg2 groupsDataTracker:(id)arg3 groupsDataCreator:(id)arg4 groupsDataMutator:(id)arg5 groupSnapchatterRepository:(id)arg6 snapchattersDataMutator:(id)arg7 snapchattersDataProvider:(id)arg8;
- (void)presentUnifiedProfileForSnapchatter:(id)arg1 addSourceType:(long long)arg2 completion:(CDUnknownBlockType)arg3 sourcePageType:(id)arg4;
- (id)getPageName;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


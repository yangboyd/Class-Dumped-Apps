//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGAutocompleteControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCommentEmojiSelectionViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCommentReplyingToBannerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCommentTextRedesignViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectShareSheetControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGatingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGrowingTextViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/MFMessageComposeViewControllerDelegate-Protocol.h>

@class IGAnalyticsNavigationState, IGAutocompleteController, IGCommentAudienceControlReminderView, IGCommentEmojiSelectionViewController, IGCommentModel, IGCommentReplyingToBanner, IGCommentThreadManager, IGMedia, IGSponsoredSupportConfiguration, IGUserSession, IGViewController, NSString, UIView;
@protocol IGCommentComposingControllerDelegate, IGCommentTextViewProtocol, IGDirectShareSheetControlling, IGFeedItemLoggingProviderDelegate><IGGatingLoggingProviderDelegate;

@interface IGCommentComposingController : NSObject <IGAutocompleteControllerDelegate, IGCommentEmojiSelectionViewControllerDelegate, IGCommentReplyingToBannerDelegate, IGCommentTextRedesignViewDelegate, IGGrowingTextViewDelegate, IGDirectShareSheetControllerDelegate, IGGatingDelegate, MFMessageComposeViewControllerDelegate>
{
    IGCommentThreadManager *_commentThreadManager;
    IGCommentReplyingToBanner *_replyingToBannerView;
    IGAnalyticsNavigationState *_navigationState;
    IGCommentAudienceControlReminderView *_audienceControlReminderView;
    _Bool _hasShownAudienceControlReminder;
    id <IGDirectShareSheetControlling> _reshareController;
    _Bool _disableEmojiPicker;
    _Bool _onlyShowEmojiPickerOnFocus;
    _Bool _useInnerReplyingToBanner;
    IGCommentEmojiSelectionViewController *_inlineEmojiSelectionViewController;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    id <IGCommentComposingControllerDelegate> _delegate;
    UIView<IGCommentTextViewProtocol> *_commentTextView;
    IGCommentModel *_replyToComment;
    IGUserSession *_userSession;
    IGMedia *_media;
    IGAutocompleteController *_autocompleteController;
    IGViewController *_presentingViewController;
    UIView *_containerView;
    NSString *_analyticsModule;
    id <IGFeedItemLoggingProviderDelegate><IGGatingLoggingProviderDelegate> _loggingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate><IGGatingLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) __weak IGViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) IGAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGCommentModel *replyToComment; // @synthesize replyToComment=_replyToComment;
@property(readonly, nonatomic) UIView<IGCommentTextViewProtocol> *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(nonatomic) __weak id <IGCommentComposingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shouldRevealMediaForSensitiveMediaItem:(id)arg1;
- (void)didSelectLearnMoreForFalseInformationMediaItem:(id)arg1 actionSource:(unsigned long long)arg2 actionType:(unsigned long long)arg3;
- (void)didMarkValidViewingAge:(_Bool)arg1 forContentGateableMediaItem:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (double)_initialComposerHeight;
- (void)_setTextRedesignViewSendButtonHidden:(_Bool)arg1;
- (void)setupDirectButtonOnNavigationBarAfterFetchingCommentThread:(id)arg1;
- (void)hideAudienceControlReminder;
- (void)showAudienceControlReminderIfNecessary;
- (void)_updatePlaceholderText;
- (void)_resetReplyToComment;
- (void)_hideReplyingToBannerView;
- (void)_showReplyingToBannerViewWithComment:(id)arg1;
- (void)_composingFinished;
- (void)_onModeSwitchButtonTapped:(id)arg1;
- (void)_onSendButtonTapped:(id)arg1;
- (void)_replaceCommentInTextViewForReplyToCommentIfRequired:(id)arg1;
- (void)_updateText:(id)arg1;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (id)_currentParentComment;
- (id)_loggingCommonForComposerExtension;
- (void)commentTextRedesignView:(id)arg1 didDismissInnerReplyingToBanner:(id)arg2;
- (void)commentTextRedesignView:(id)arg1 didNeedDismissInnerReplyingToBanner:(id)arg2;
- (void)commentTextRedesignView:(id)arg1 didLongPressProfilePicture:(id)arg2;
- (void)commentTextRedesignView:(id)arg1 didTapProfilePicture:(id)arg2;
- (void)didDismissCommentReplyingToBanner:(id)arg1;
- (void)growingTextView:(id)arg1 didChangeHeight:(double)arg2;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(double)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)_logEmojiSelectionWithEmoji:(id)arg1 didLongPress:(_Bool)arg2 didAutoPost:(_Bool)arg3 selectedIndex:(unsigned long long)arg4;
- (void)emojiSelectionViewController:(id)arg1 didSelectEmoji:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteControllerDidReload:(id)arg1;
- (void)autocompleteControllerDidAutocomplete:(id)arg1;
- (void)autocompleteController:(id)arg1 willHideContainerView:(id)arg2;
- (void)autocompleteController:(id)arg1 willShowContainerView:(id)arg2 type:(long long)arg3;
- (void)autocompleteController:(id)arg1 atIndex:(long long)arg2 isUserSearch:(_Bool)arg3 allResults:(id)arg4 indexInNullState:(unsigned long long)arg5;
- (void)_hideEmojiComposerIfNecessary;
- (void)_showEmojiComposerIfNecessary;
- (unsigned long long)_initialCommentTextRedesignViewStyle;
- (_Bool)_isEmojiComposerEnabled;
- (void)openShareSheet;
- (void)hideReplyBannerView;
- (void)updateAutocompleteForCommentThread:(id)arg1;
- (void)updateWithReplyToComment:(id)arg1;
- (void)setupTextBeforeCommentComposingBeginWithPrefillText:(id)arg1;
- (id)viewsToMoveWithKeyboard;
- (id)autoCompleteController;
- (void)_setupCommentTextViewWithContainerView:(id)arg1;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 commentThreadManager:(id)arg3 loggingDelegate:(id)arg4 presentingViewController:(id)arg5 analyticsModule:(id)arg6 navigationState:(id)arg7 disableEmojiPicker:(_Bool)arg8 onlyShowEmojiPickerOnFocus:(_Bool)arg9 useInnerReplyingToBanner:(_Bool)arg10 sponsoredSupportConfiguration:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


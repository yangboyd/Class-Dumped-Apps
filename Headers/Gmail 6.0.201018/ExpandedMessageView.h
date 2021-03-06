//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageView.h"

#import "GBTMessageRegionsViewDelegate-Protocol.h"
#import "GBTMessageRegionsViewRenderingDelegate-Protocol.h"
#import "GBTSmartMailInteractionSupport-Protocol.h"
#import "LockerCmlLockerCmlActionHandler-Protocol.h"
#import "MessageHeaderViewDelegate-Protocol.h"

@class CMLComponent, CardCarouselView, GBTConversationMessage, GBTMessageRegionsView, HUBTextButton, JBTLockerFetchInfo_LockerFetchInfoType, MessageHeaderView, NSString, UIImageView, UIView;
@protocol GBTClient, GBTExpandedMessageViewLockerFrameDelegate, GBTMessageRegionsViewRenderingDelegate, HUBColorScheme, MessageRegionsViewCache;

@interface ExpandedMessageView : MessageView <LockerCmlLockerCmlActionHandler, MessageHeaderViewDelegate, GBTMessageRegionsViewDelegate, GBTMessageRegionsViewRenderingDelegate, GBTSmartMailInteractionSupport>
{
    CardCarouselView *_attachmentsView;
    HUBTextButton *_fullMessageButton;
    MessageHeaderView *_messageHeaderView;
    UIImageView *_messageActionsView;
    JBTLockerFetchInfo_LockerFetchInfoType *_receivedLockerFetchInfoType;
    _Bool _allowLockerChallengeAction;
    long long dynamicMailXhrsInProgress;
    NSString *_plainText;
    id <HUBColorScheme> _colorScheme;
    id <GBTClient> _client;
    id <MessageRegionsViewCache> _messageRegionsViewCache;
    id <GBTMessageRegionsViewRenderingDelegate> _renderingDelegate;
    id <GBTExpandedMessageViewLockerFrameDelegate> _lockerFrameDelegate;
    GBTMessageRegionsView *_messageRegionsView;
    long long _renderingThemeType;
    CMLComponent *_lockerFrameComponent;
}

+ (double)cachedScrollHeightForMessage:(id)arg1 forScrollableAreaAtIndex:(long long)arg2 withConversationWidth:(double)arg3;
+ (long long)scrollableAreaCountForMessage:(id)arg1;
+ (double)computeCachedHeightForMessage:(id)arg1 withConversationWidth:(double)arg2 includingScrollableArea:(_Bool)arg3 renderingDelegate:(id)arg4 messageRegionsViewCache:(id)arg5 performInefficientChecks:(_Bool)arg6 withSpan:(id)arg7 prefetchingFromThreadViewController:(_Bool)arg8 renderingThemeType:(long long)arg9;
+ (double)cachedHeightForMessage:(id)arg1 withConversationWidth:(double)arg2 includingScrollableArea:(_Bool)arg3 renderingDelegate:(id)arg4 messageRegionsViewCache:(id)arg5 performInefficientChecks:(_Bool)arg6 withSpan:(id)arg7 prefetchingFromThreadViewController:(_Bool)arg8 renderingThemeType:(long long)arg9;
+ (_Bool)hasCachedHeightsForMessage:(id)arg1 withMessageWidth:(double)arg2 renderingThemeType:(long long)arg3;
+ (id)loadingRegionsMap;
+ (_Bool)shouldShowFullMessageButtonForMessage:(id)arg1 account:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CMLComponent *lockerFrameComponent; // @synthesize lockerFrameComponent=_lockerFrameComponent;
@property(nonatomic) long long renderingThemeType; // @synthesize renderingThemeType=_renderingThemeType;
@property(readonly, nonatomic) GBTMessageRegionsView *messageRegionsView; // @synthesize messageRegionsView=_messageRegionsView;
@property(nonatomic) __weak id <GBTExpandedMessageViewLockerFrameDelegate> lockerFrameDelegate; // @synthesize lockerFrameDelegate=_lockerFrameDelegate;
@property(nonatomic) __weak id <GBTMessageRegionsViewRenderingDelegate> renderingDelegate; // @synthesize renderingDelegate=_renderingDelegate;
@property(nonatomic) __weak id <MessageRegionsViewCache> messageRegionsViewCache; // @synthesize messageRegionsViewCache=_messageRegionsViewCache;
- (void)setUpLockerFrameComponent:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setShouldShowReplyButton:(_Bool)arg1;
- (void)setIsDefaultReplyAll:(_Bool)arg1;
- (void)setSending:(_Bool)arg1;
- (id)scrollViews;
- (void)securityBannerView:(id)arg1 performAction:(unsigned long long)arg2 forMessage:(id)arg3;
- (void)messageHeaderViewDidTapCancelScheduledSend:(id)arg1;
- (void)messageHeaderViewDidTapAvatar:(id)arg1;
- (void)messageHeaderViewDidTapHideImagesButton:(id)arg1;
- (void)messageHeaderViewDidTapDisplayImagesButton:(id)arg1;
- (void)messageHeaderViewDidReceiveAccessibilityFocus:(id)arg1;
- (void)messageHeaderViewDidTapToggleDetails:(id)arg1;
- (void)messageHeaderViewDidTapEncryptionLearnMoreButton:(id)arg1;
- (void)messageHeaderViewDidTapSignatureDetailsButton:(id)arg1;
- (void)messageHeaderViewDidTapMoreButton:(id)arg1;
- (void)messageHeaderViewDidTapReplyButton:(id)arg1;
- (void)messageJSDidFinishLoadingForMessageId:(id)arg1;
- (void)messageRegionsViewDidLoadWithoutDynamicContent:(id)arg1;
- (void)messageRegionsViewDidFinishLoadingDynamicContent:(id)arg1 hashedDynamicMailType:(id)arg2;
- (void)messageRegionsViewDidMoveAmpFrameContainerIntoView:(id)arg1;
- (void)messageRegionsViewDidFinishLoad:(id)arg1;
- (void)highlightSearchTermsInWebview:(id)arg1;
- (void)messageRegionsView:(id)arg1 didFinishLoadingWebview:(id)arg2;
- (void)messageRegionsViewHeightDidChange:(id)arg1 scrollNeeded:(_Bool)arg2;
- (void)messageRegionsViewDidStartLoad:(id)arg1;
- (void)messageRegionsViewWasCreatedAsync:(id)arg1;
- (void)messageRegionsViewWillBeCreatedAsync;
- (void)messageRegionsViewDidFinishDynamicMailXhr:(id)arg1;
- (void)messageRegionsViewDidStartDynamicMailXhr:(id)arg1;
- (void)messageRegionsView:(id)arg1 didForceToHTMLWithReason:(unsigned long long)arg2;
- (void)messageRegionsView:(id)arg1 didSelectLink:(id)arg2;
- (void)messageRegionsView:(id)arg1 didToggleQuotedTextButtonForMessageRegionGroupAtIndex:(unsigned long long)arg2;
- (void)view:(id)arg1 didSelectDisabledAttachmentCard:(id)arg2 metadata:(id)arg3;
- (void)view:(id)arg1 didSelectAttachmentCard:(id)arg2;
- (void)submitChallengeCodeWithNSString:(id)arg1;
- (void)requestChallengeCode;
- (void)requestMoreTime;
- (void)showLockerSenderActionErrorAlert;
- (void)performLockerSenderActionWithFuture:(id)arg1 actionString:(id)arg2;
- (void)renewAccess;
- (void)revokeAccess;
- (id)createLockerAccessFrameForMessage:(id)arg1;
- (void)showFullMessage;
- (void)setSelected:(_Bool)arg1;
@property(readonly, nonatomic) UIView *dynamicMailOnboardingAnchor;
- (id)moreMenuButton;
- (void)toggleMessageCollapseState;
- (void)setFrame:(struct CGRect)arg1;
- (void)senderContactFetchedForClient:(id)arg1;
- (void)updateSizeWithScrollNeeded:(_Bool)arg1;
- (void)updateSize;
- (void)headerViewTapped:(id)arg1;
- (_Bool)shouldHideMessageRegionsView;
- (id)cardCarouselView;
- (id)lockerFrameVisualElement;
- (void)setUpLockerFrameVisualElement;
@property(readonly, nonatomic) _Bool allWebViewsJavaScriptFinishedLoading;
@property(readonly, nonatomic) _Bool allWebViewsFinishedLoading;
- (_Bool)lockerFrameVisualElementLoggingEnabled;
- (void)focusOnFirstMessageRegion;
- (void)expandedRegionsChanged;
- (void)updateVisualElementWithParentVisualElement:(id)arg1;
- (void)setMessage:(id)arg1 fromConversation:(id)arg2 client:(id)arg3 span:(id)arg4 parentVisualElement:(id)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)createMessageHeaderView;
- (struct CGRect)messageRegionsFrame;
- (void)createSubviews;
@property(readonly, nonatomic) GBTConversationMessage *message;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageView.h"

#import "MessageHeaderViewDelegate-Protocol.h"

@class MessageHeaderView, NSString;

@interface CollapsedMessageView : MessageView <MessageHeaderViewDelegate>
{
    MessageHeaderView *_messageHeaderView;
}

+ (double)cachedHeightForMessage:(id)arg1 withConversationWidth:(double)arg2 includingScrollableArea:(_Bool)arg3 renderingDelegate:(id)arg4 messageRegionsViewCache:(id)arg5 performInefficientChecks:(_Bool)arg6 withSpan:(id)arg7 prefetchingFromThreadViewController:(_Bool)arg8 renderingThemeType:(long long)arg9;
- (void).cxx_destruct;
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
- (void)setShouldShowReplyButton:(_Bool)arg1;
- (void)setIsDefaultReplyAll:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setSending:(_Bool)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (void)headerViewTapped:(id)arg1;
- (void)toggleMessageCollapseState;
- (void)senderContactFetchedForClient:(id)arg1;
- (void)setMessage:(id)arg1 fromConversation:(id)arg2 client:(id)arg3 span:(id)arg4 parentVisualElement:(id)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


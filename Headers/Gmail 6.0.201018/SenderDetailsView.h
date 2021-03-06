//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SenderDetailsSmimeInfoViewDelegate-Protocol.h"

@class GBTConversationMessage, GBTPlainButton, NSMutableArray, NSString, RecipientView, SenderDetailsSmimeInfoView, UILabel;
@protocol HUBColorScheme, SenderDetailsViewDelegate;

@interface SenderDetailsView : UIView <SenderDetailsSmimeInfoViewDelegate>
{
    UILabel *_fromLabel;
    RecipientView *_senderView;
    SenderDetailsSmimeInfoView *_smimeSignatureView;
    UILabel *_replyToLabel;
    UILabel *_toLabel;
    UILabel *_ccLabel;
    UILabel *_bccLabel;
    UILabel *_dateLabel;
    UILabel *_receivedDateLabel;
    NSMutableArray *_recipientViews;
    GBTPlainButton *_securityButton;
    SenderDetailsSmimeInfoView *_smimeEncryptionView;
    GBTPlainButton *_hideImagesButton;
    float _senderDetailsLeftIndent;
    float _hideImagesButtonLeftInset;
    id <HUBColorScheme> _colorScheme;
    GBTConversationMessage *_message;
    id <SenderDetailsViewDelegate> _delegate;
}

+ (_Bool)shouldShowHideImagesButtonForMessage:(id)arg1;
+ (id)createHideImagesButton;
+ (struct CGSize)hideImagesButtonSizeForWidth:(double)arg1 hideImagesButton:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SenderDetailsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GBTConversationMessage *message; // @synthesize message=_message;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCGColors;
- (void)hideImagesButtonTapped;
- (void)updateHideImagesButton;
- (void)setupSecurityButtonWithMessage:(id)arg1;
- (void)setupEncryptionInfoViewWithMessage:(id)arg1;
- (double)heightOfRecipientLabelsGivenWidth:(double)arg1 from:(long long)arg2 to:(long long)arg3;
- (double)layoutRecipientView:(id)arg1 originY:(double)arg2;
- (double)layoutRecipientViewsFrom:(long long)arg1 to:(long long)arg2 originY:(double)arg3;
- (void)addRecipients:(id)arg1 withCurrentRecipientsCount:(long long)arg2;
- (id)labelWithText:(id)arg1 textColor:(id)arg2 accessibilityIdentifier:(id)arg3 maxWidth:(double)arg4;
- (void)createSubviews;
- (void)securityInfoViewMoreInfoButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


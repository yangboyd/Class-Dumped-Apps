//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessagingAlertTemplate.h"

#import "NFUIModalNavControllerPresentationProtocol-Protocol.h"
#import "NFUIProductChoiceViewControllerDelegateProtocol-Protocol.h"

@class MessagingAlert, MessagingAlertInlineView, MessagingDecorationView, MessagingViewController, NFUILabel, NFUILinkLabel, NSLayoutConstraint, NSNumber, NSString, UILabel, UIStackView;

@interface NFUINewAlertTemplate : MessagingAlertTemplate <NFUIProductChoiceViewControllerDelegateProtocol, NFUIModalNavControllerPresentationProtocol>
{
    _Bool _useBannerAsDefault;
    _Bool _dynamicInlineButtons;
    MessagingDecorationView *_decorationView;
    MessagingViewController *_messagingViewController;
    MessagingAlertInlineView *_cachedMessageView;
    UILabel *_iconLabel;
    NFUILabel *_titleLabel;
    NFUILinkLabel *_bodyLabel;
    NFUILinkLabel *_footerLabel;
    UIStackView *_stackView;
    NSLayoutConstraint *_umaWidthConstraint;
    MessagingAlert *_messagingAlert;
    NSNumber *_presentationSessionId;
}

+ (void)setIconLabelType:(id)arg1 viewType:(id)arg2 hideUnknownViewTypes:(_Bool)arg3;
+ (id)supportedTemplates;
@property(nonatomic) _Bool dynamicInlineButtons; // @synthesize dynamicInlineButtons=_dynamicInlineButtons;
@property(nonatomic) _Bool useBannerAsDefault; // @synthesize useBannerAsDefault=_useBannerAsDefault;
@property(retain, nonatomic) NSNumber *presentationSessionId; // @synthesize presentationSessionId=_presentationSessionId;
@property(retain, nonatomic) MessagingAlert *messagingAlert; // @synthesize messagingAlert=_messagingAlert;
@property(nonatomic) __weak NSLayoutConstraint *umaWidthConstraint; // @synthesize umaWidthConstraint=_umaWidthConstraint;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak NFUILinkLabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(nonatomic) __weak NFUILinkLabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(nonatomic) __weak NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) MessagingAlertInlineView *cachedMessageView; // @synthesize cachedMessageView=_cachedMessageView;
@property(nonatomic) __weak MessagingViewController *messagingViewController; // @synthesize messagingViewController=_messagingViewController;
@property(nonatomic) __weak MessagingDecorationView *decorationView; // @synthesize decorationView=_decorationView;
- (void).cxx_destruct;
- (void)productChoiceCancelled;
- (void)productChoiceCompleted:(id)arg1 trackingInfo:(id)arg2;
- (_Bool)hasTranslucentNavigationBar;
- (long long)styleForDismissal;
- (long long)styleForPresentation;
- (long long)presentationStyle;
- (void)addCTAButtonsToInlineViewWithCtaList:(id)arg1;
- (id)createMessageView:(id)arg1;
- (id)createAlertInlineView:(id)arg1;
- (double)heightForMessagingAlert:(id)arg1;
- (void)endPresentationSession;
- (void)beginPresentationSession:(id)arg1;
- (void)openActionURL:(id)arg1 mintAutoLogin:(_Bool)arg2;
- (_Bool)performActionForCTA:(id)arg1;
- (void)openURLAndDismiss:(id)arg1 shouldAutoLogin:(_Bool)arg2;
- (void)buttonTapped:(id)arg1;
- (void)styleUnselectedButtonDefault:(id)arg1;
- (void)styleSelectedButtonDefault:(id)arg1;
- (id)ctasFromAlert:(id)arg1;
- (id)buttonForCTA:(id)arg1;
- (id)buttonWithTitle:(id)arg1 isSelected:(_Bool)arg2 action:(id)arg3;
- (void)dismissUMA:(_Bool)arg1;
- (void)dismissModalUMA:(_Bool)arg1;
- (void)dismissTooltipUMA:(_Bool)arg1;
- (void)dismissDecorationUMA:(_Bool)arg1;
- (id)templatePathFor:(id)arg1;
- (void)ctaButtonTapped:(id)arg1;
- (void)ctaActionTriggeredAtIndex:(long long)arg1;
- (void)configureLinkLabel:(id)arg1 withCopy:(id)arg2;
- (void)startLoggingSessionAndHandleFeedback:(id)arg1;
- (void)messagingViewControllerViewDidLoad:(id)arg1;
- (id)loadXib;
- (void)handleMessage:(id)arg1;
- (void)handleTooltipMessage:(id)arg1;
- (void)handleFullscreenMessage:(id)arg1;
- (void)handleInlineMessage:(id)arg1;
- (unsigned long long)typeForMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


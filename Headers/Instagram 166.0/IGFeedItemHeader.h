//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGTimelineHeader.h>

#import <InstagramAppCoreFramework/IGALLogContextModelProvider-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedItemHeaderAvatarViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedItemHeaderCoreTextViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedItemUpdatedListener-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowControllerLoggingProvider-Protocol.h>
#import <InstagramAppCoreFramework/IGUserUpdatedListener-Protocol.h>
#import <InstagramAppCoreFramework/THStatusServiceListener-Protocol.h>

@class IGALTapGestureRecognizer, IGCoreTextView, IGFeedItemHeaderAvatarView, IGFeedItemHeaderCoreTextView, IGFeedItemHeaderViewModel, IGFollowController, IGMedia, IGSponsoredSupportConfiguration, IGStringStyle, IGSundialAudioAttributionLabel, IGSundialRemixedVideoAttributionButton, IGTapButton, IGUserSession, NSAttributedString, NSMutableArray, NSObject, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol IGFeedItemHeaderDelegate, IGFeedItemLoggingProviderDelegate, IGFeedTheme, IGFollowControllerLoggingProvider, THStatusServiceQuerying;

@interface IGFeedItemHeader : IGTimelineHeader <IGALLogContextModelProvider, IGFeedItemHeaderAvatarViewDelegate, IGFollowControllerDelegate, IGFollowControllerLoggingProvider, IGCoreTextLinkHandler, IGFeedItemHeaderCoreTextViewDelegate, IGUserUpdatedListener, IGFeedItemUpdatedListener, THStatusServiceListener>
{
    NSObject<IGFeedItemHeaderDelegate> *_delegate;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    _Bool _isLayoutInvalid;
    id <IGFeedTheme> _feedTheme;
    _Bool _supportEditingSponsorTag;
    IGFollowController *_borderlessFollowController;
    IGFollowController *_defaultFollowController;
    id <THStatusServiceQuerying> _statusQuerier;
    id <IGFollowControllerLoggingProvider> _followLoggingProvider;
    long long _unseenIndicatorStyle;
    long long _unseenIndicatorSource;
    IGFeedItemHeaderCoreTextView *_headerCoreTextView;
    double _leftMostAccessoryViewMinX;
    IGALTapGestureRecognizer *_sponsoredLabelALTapRecognizer;
    _Bool _alternateAccessibility;
    _Bool _supportsEdgePostLabel;
    IGFeedItemHeaderViewModel *_viewModel;
    IGFeedItemHeaderAvatarView *_avatar;
    IGUserSession *_userSession;
    long long _style;
    UIImageView *_userBadge;
    UIView *_unseenIndicator;
    IGTapButton *_firstRowButton;
    UIButton *_userCreditButton;
    UIButton *_stateRunMediaButton;
    UIButton *_locationTransparencyButton;
    UIButton *_postLocationButton;
    IGCoreTextView *_sponsorTextView;
    IGCoreTextView *_brandedContentTextView;
    UIButton *_viewShopButton;
    UILabel *_dotSeparator;
    UILabel *_usernameDotSeparator;
    UIButton *_moreButton;
    UIButton *_dismissButton;
    IGStringStyle *_primaryBoldLinkStyle;
    IGStringStyle *_secondaryBoldStyle;
    IGSundialAudioAttributionLabel *_audioAttributionLabel;
    IGSundialRemixedVideoAttributionButton *_remixAttributionButton;
    IGMedia *_media;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    UIView *_firstRowReferenceView;
    NSMutableArray *_accessibilityCustomActions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool supportsEdgePostLabel; // @synthesize supportsEdgePostLabel=_supportsEdgePostLabel;
@property(nonatomic) _Bool alternateAccessibility; // @synthesize alternateAccessibility=_alternateAccessibility;
@property(retain, nonatomic) NSMutableArray *accessibilityCustomActions; // @synthesize accessibilityCustomActions=_accessibilityCustomActions;
@property(retain, nonatomic) UIView *firstRowReferenceView; // @synthesize firstRowReferenceView=_firstRowReferenceView;
@property(retain, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration; // @synthesize sponsoredSupportConfiguration=_sponsoredSupportConfiguration;
@property(retain, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(retain, nonatomic) IGSundialRemixedVideoAttributionButton *remixAttributionButton; // @synthesize remixAttributionButton=_remixAttributionButton;
@property(retain, nonatomic) IGSundialAudioAttributionLabel *audioAttributionLabel; // @synthesize audioAttributionLabel=_audioAttributionLabel;
@property(retain, nonatomic) IGStringStyle *secondaryBoldStyle; // @synthesize secondaryBoldStyle=_secondaryBoldStyle;
@property(retain, nonatomic) IGStringStyle *primaryBoldLinkStyle; // @synthesize primaryBoldLinkStyle=_primaryBoldLinkStyle;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *usernameDotSeparator; // @synthesize usernameDotSeparator=_usernameDotSeparator;
@property(retain, nonatomic) UILabel *dotSeparator; // @synthesize dotSeparator=_dotSeparator;
@property(retain, nonatomic) UIButton *viewShopButton; // @synthesize viewShopButton=_viewShopButton;
@property(retain, nonatomic) IGCoreTextView *brandedContentTextView; // @synthesize brandedContentTextView=_brandedContentTextView;
@property(retain, nonatomic) IGCoreTextView *sponsorTextView; // @synthesize sponsorTextView=_sponsorTextView;
@property(retain, nonatomic) UIButton *postLocationButton; // @synthesize postLocationButton=_postLocationButton;
@property(retain, nonatomic) UIButton *locationTransparencyButton; // @synthesize locationTransparencyButton=_locationTransparencyButton;
@property(retain, nonatomic) UIButton *stateRunMediaButton; // @synthesize stateRunMediaButton=_stateRunMediaButton;
@property(retain, nonatomic) UIButton *userCreditButton; // @synthesize userCreditButton=_userCreditButton;
@property(retain, nonatomic) IGTapButton *firstRowButton; // @synthesize firstRowButton=_firstRowButton;
@property(retain, nonatomic) UIView *unseenIndicator; // @synthesize unseenIndicator=_unseenIndicator;
@property(retain, nonatomic) UIImageView *userBadge; // @synthesize userBadge=_userBadge;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <IGFeedTheme> feedTheme; // @synthesize feedTheme=_feedTheme;
@property(retain, nonatomic) IGFeedItemHeaderAvatarView *avatar; // @synthesize avatar=_avatar;
@property(readonly, nonatomic) IGFeedItemHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_logAuthenticityImpression:(unsigned long long)arg1;
- (id)trackingModel;
- (void)setBounds:(struct CGRect)arg1;
- (void)invalidateLayout;
- (id)analyticsExtras;
- (_Bool)_shouldDisplayBrandedContentAndLocationInHeaderLocationButtonWidth:(double)arg1;
- (struct CGSize)_getBrandedContentViewSize;
- (void)headerCoreTextView:(id)arg1 didTapOnUserName:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)_onRemixAttributionTapped;
- (void)_onAudioAttributionTapped;
- (void)_onViewShopTapped;
- (void)_onPostLocationTapped;
- (void)_onLocationTransparencyTagTapped;
- (void)_onStateRunMediaTagTapped;
- (void)_onUserCreditTapped;
- (void)_onUserTapped;
- (void)_onHashtagTapped;
- (void)_onFirstRowTapped;
- (void)_onBrandedContentTapped;
- (void)_onSponsoredLabelTapped;
- (void)didTapAvatarView:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)statusServiceDidReceiveUpdate:(id)arg1 forUserPks:(id)arg2;
- (void)feedItemUpdated:(id)arg1 feedItemChange:(long long)arg2;
- (void)userWasUpdated:(id)arg1;
- (void)accessoryShouldShow:(_Bool)arg1 accessories:(long long)arg2;
- (void)_configureRemixAttributionButton;
- (void)_configureAudioAttributionLabel;
- (void)_configureViewShopButton;
- (void)_configureDotSeparators;
- (void)_configureActionButtons;
- (void)_configureBrandedContentTextView;
- (void)_configureSponsoredPostLabel;
- (void)_configureUserCreditButton;
- (void)_configurePostLocationButton;
- (void)_configureLocationTransparencyButton;
- (void)_configureStateRunMediaButton;
- (void)_configureFirstRowButton;
- (void)_configureUserBadge;
- (id)_avatarBadgeViewModel;
- (void)_configureAvatar;
- (void)_configureUnseenIndicator;
- (id)_statusEmojis;
- (_Bool)_isPBIAPostWithFacebookPageLink;
- (_Bool)_isLocationPost;
- (_Bool)_isHashtagPost;
- (_Bool)_showFirstRowCoreTextView;
- (_Bool)_showPaidBCLabel;
- (_Bool)_showEdgePostLabel;
- (void)_onDismissButtonTapped:(id)arg1;
- (void)_onMoreButtonTapped:(id)arg1;
- (void)_invalidateCachedStyles;
- (void)_setupFirstRowCoreTextView;
@property(readonly, nonatomic) IGFollowController *followController;
- (id)_defaultFollowController;
- (id)_borderlessFollowController;
- (id)_borderlessFollowButtonViewConfiguration;
@property(readonly, nonatomic) NSAttributedString *headerSubTitleAttributtedString;
@property(readonly, nonatomic) UILabel *headerPrimaryTitleLabel;
- (id)contentBackgroundColor;
- (void)prepareForReuse;
- (void)_updateFollowButtonWithUser:(id)arg1 module:(id)arg2;
- (void)_updateAccessoryViewAppearance;
- (void)_updateFollowButtonAppearance;
- (void)_updateAppearance;
- (void)_configureWithViewModel:(id)arg1;
- (void)_updateTrackingNodesWithIndex:(id)arg1;
- (void)updateHeaderWithPostItem:(id)arg1;
- (void)_logReuseCellViewModelInfoWithMethodName:(id)arg1;
- (void)configureWithViewModel:(id)arg1 loggingDelegate:(id)arg2 followLoggingProvider:(id)arg3 delegate:(id)arg4 userSession:(id)arg5 pageCellState:(id)arg6 feedTheme:(id)arg7;
- (void)_layoutDotSeparatorAndFollowButton;
- (void)_layoutAccessoryView;
- (void)_layoutImageForUserCredit;
- (void)_layoutSecondRow;
- (void)_layoutUserNameAndBadgeAndFirstRowCoreTextView;
- (void)_layoutAvatar;
- (void)_layoutUnseenIndicator;
- (void)_layoutFeedItemHeader;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 userSession:(id)arg3 supportEditingSponsorTag:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


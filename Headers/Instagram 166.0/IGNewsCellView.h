//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowControllerTapDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGImageViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPendingRequestControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGProfilePictureImageViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTappableImageViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTappableStoryMediaImageViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTooltipViewDelegate-Protocol.h>

@class CAShapeLayer, IGCoreTextView, IGFollowController, IGImageView, IGNewsStory, IGPendingRequestController, IGPollingStickerResultsView, IGProfilePictureImageView, IGStoryBadgeView, IGStoryGradientRingView, IGStoryReelOwnerViewLayoutSpec, IGTableLayoutSpec, IGTappableStoryMediaImageView, IGTextButton, IGUnreadBubbleView, IGUserSession, NSMutableArray, NSString, UIButton, UIColor, UIImageView, UILabel;
@protocol IGFollowButtonAnalyticsDelegate, IGNewsCellViewDelegate, IGPendingRequestControllerDelegate;

@interface IGNewsCellView : UIView <IGCoreTextLinkHandler, IGFollowControllerDelegate, IGFollowControllerTapDelegate, IGPendingRequestControllerDelegate, IGProfilePictureImageViewDelegate, IGTappableImageViewDelegate, IGTappableStoryMediaImageViewDelegate, IGImageViewDelegate, IGTooltipViewDelegate>
{
    IGNewsStory *_story;
    NSString *_module;
    IGUserSession *_userSession;
    _Bool _showStoryRing;
    _Bool _hasExpiredMedia;
    _Bool _shouldShowTappableStoryMediaImageView;
    _Bool _showUFI;
    _Bool _isFollowRequest;
    UIColor *_backgroundColorReference;
    IGPendingRequestController *_pendingRequestController;
    IGFollowController *_followController;
    IGTableLayoutSpec *_tableInterface;
    IGProfilePictureImageView *_backProfilePictureView;
    IGProfilePictureImageView *_frontProfilePictureView;
    CAShapeLayer *_frontProfilePictureRing;
    IGUnreadBubbleView *_requestCountBubbleView;
    IGCoreTextView *_textView;
    IGStoryGradientRingView *_gradientStoryRingView;
    IGStoryBadgeView *_hashtagBadgeView;
    IGStoryReelOwnerViewLayoutSpec *_badgeViewLayoutSpec;
    UIImageView *_accessoryIconView;
    UIImageView *_copyrightImageView;
    IGImageView *_frontIconImageView;
    IGImageView *_backIconImageView;
    CAShapeLayer *_frontIconImageRing;
    UIImageView *_infoImageView;
    UIImageView *_insightsImageView;
    UIImageView *_promoteImageView;
    UIImageView *_couponImageView;
    UIImageView *_loginMapImageView;
    UIView *_topLine;
    UILabel *_expiredMediaLabel;
    UIImageView *_expiredMediaRoundedBackgroundView;
    UIImageView *_expiredMediaClockIcon;
    IGPollingStickerResultsView *_pollingStickResults;
    IGTappableStoryMediaImageView *_tappableStoryMediaImageView;
    UIView *_followAccessoryView;
    UIButton *_likeButton;
    UIButton *_replyButton;
    UIButton *_deleteCommentButton;
    UIButton *_viewReplyButton;
    IGTextButton *_textActionButton;
    _Bool _isInProfileDrawer;
    _Bool _isPanoUIRefreshOn;
    _Bool _showAccentedHighlight;
    id <IGNewsCellViewDelegate> _delegate;
    id <IGFollowButtonAnalyticsDelegate> _analyticsDelegate;
    id <IGPendingRequestControllerDelegate> _pendingRequestControllerDelegate;
    NSMutableArray *_imageViews;
    unsigned long long _tableRow;
}

+ (double)heightForStory:(id)arg1 cellWidth:(double)arg2 mediaCount:(unsigned long long)arg3 followButtonState:(long long)arg4 showUFI:(_Bool)arg5 userSession:(id)arg6 hasExpiredMedia:(_Bool)arg7;
- (void).cxx_destruct;
@property(nonatomic) _Bool showAccentedHighlight; // @synthesize showAccentedHighlight=_showAccentedHighlight;
@property(nonatomic) unsigned long long tableRow; // @synthesize tableRow=_tableRow;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(readonly, nonatomic) IGNewsStory *story; // @synthesize story=_story;
@property(nonatomic) __weak id <IGPendingRequestControllerDelegate> pendingRequestControllerDelegate; // @synthesize pendingRequestControllerDelegate=_pendingRequestControllerDelegate;
@property(nonatomic) __weak id <IGFollowButtonAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <IGNewsCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapTooltipView:(id)arg1;
- (id)accessibilityCustomActions;
- (void)_onActionButtonTapped:(id)arg1;
- (_Bool)_didTapFollowButton:(id)arg1;
- (_Bool)_accessibilityLikeButtonTapped:(id)arg1;
- (_Bool)_frontProfilePictureTapped;
- (_Bool)accessibilityActivate;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (void)setShowAccentedHighlight:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNeedLayoutForHasRepliedComment:(_Bool)arg1;
- (void)_updateLikeButton;
- (void)setNeedLayoutForLikeAction;
- (void)setStoryRingLoading:(_Bool)arg1;
- (void)setStory:(id)arg1 userSession:(id)arg2 contextString:(id)arg3 module:(id)arg4 showStoryRing:(_Bool)arg5 showUFI:(_Bool)arg6 showDeleteComment:(_Bool)arg7 showReplyButton:(_Bool)arg8 hasExpiredMedia:(_Bool)arg9;
- (void)_showMetricInDevelopmentTooltipForRect:(struct CGRect)arg1;
- (void)_createBackIconImageViewsIfNeeded;
- (_Bool)_shouldShowPromoteIcon:(id)arg1;
- (_Bool)_isHashtagFollowingStory;
- (void)_didTapDeleteCommentButton;
- (void)_didTapViewReplyButton;
- (void)_didTapReplyButton;
- (void)_didTapLikeButton;
- (void)_configureFollowControllerWithUserSession:(id)arg1 module:(id)arg2;
- (void)_setMedia:(id)arg1 module:(id)arg2;
- (void)_createImageViews:(long long)arg1;
- (void)_setUpFollowAccessoryView;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)didTapTappableStoryMediaImageView:(id)arg1;
- (void)didTapTappableImageView:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)didTapMessageButton:(id)arg1;
- (void)followController:(id)arg1 didTapButtonWithAction:(long long)arg2;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)pendingControllerDidIgnoreRequest:(id)arg1;
- (void)pendingControllerDidAcceptRequest:(id)arg1;
- (void)applyHighlight:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (double)_profilePictureDiameter;
- (double)_gradientStoryRingSize;
- (double)_stackedImageSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


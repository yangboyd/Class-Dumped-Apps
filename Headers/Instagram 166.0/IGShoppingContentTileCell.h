//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGDelayedBouncyCollectionViewCell.h>

#import <InstagramAppCoreFramework/IGStoryFacepileViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTransitionZoomViewCustomizable-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGGradientView, IGImageView, IGLabel, IGShoppingContentTileViewModel, IGStoryFacepileView, IGTextButton, IGTextView, NSString, UIButton, UILabel, UITapGestureRecognizer, UIView;
@protocol IGImageViewDelegate, IGShoppingContentTileCellDelegate;

@interface IGShoppingContentTileCell : IGDelayedBouncyCollectionViewCell <IGStoryFacepileViewDelegate, IGTransitionZoomViewCustomizable, UIGestureRecognizerDelegate>
{
    IGShoppingContentTileViewModel *_viewModel;
    IGGradientView *_imageTopGradientView;
    IGGradientView *_imageBottomGradientView;
    IGImageView *_coverImageView;
    UIView *_videoContainerView;
    UIView *_videoView;
    IGGradientView *_videoTopGradientView;
    IGGradientView *_videoBottomGradientView;
    IGStoryFacepileView *_facePileView;
    IGLabel *_primaryUsernameLabel;
    IGLabel *_secondaryUsernameLabel;
    UILabel *_usernameDotSeparator;
    UIView *_followButton;
    IGTextView *_titleTextView;
    IGLabel *_subtitleLabel;
    UILabel *_subtitleDotSeparator;
    IGLabel *_dropsLaunchDateLabel;
    IGTextButton *_actionButton;
    UIButton *_shareButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <IGShoppingContentTileCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingContentTileCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureShareButtonWithViewModel:(id)arg1;
- (void)_configureDropsLabelWithViewModel:(id)arg1;
- (void)_configureFollowButton:(id)arg1;
- (void)_configureUserViewsWithViewModel:(id)arg1;
- (void)_configureCoverImageViewWithImage:(id)arg1 width:(double)arg2;
- (void)_configureCoverMediaViewWithViewModel:(id)arg1 width:(double)arg2;
- (void)_didTapShareButton;
- (void)_didTapProfilePictureOrUsernameWithUser:(id)arg1;
- (void)_didTapSecondaryUsernameLabel:(id)arg1;
- (void)_didTapPrimaryUsernameLabel:(id)arg1;
- (double)zoomTransitionViewCornerRadius;
- (void)storyFacepileView:(id)arg1 didTapProfilePictureWithUser:(id)arg2;
- (void)configureVideoView:(id)arg1;
- (void)configureWithViewModel:(id)arg1 followButton:(id)arg2 width:(double)arg3;
@property(nonatomic) __weak id <IGImageViewDelegate> imageDelegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


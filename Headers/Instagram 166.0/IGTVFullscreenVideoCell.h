//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGHeartAnimatable-Protocol.h>
#import <InstagramAppCoreFramework/IGTVFullscreenTapControllerGestureDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVShoppingPinnedProductViewDelegate-Protocol.h>

@class IGCoreTextView, IGMultilineChevronButton, IGPassthroughView, IGTVBlurredOverlayDetailedView, IGTVDescriptionContainerView, IGTVFullscreenBaseVideoView, IGTVFullscreenLoadingView, IGTVFullscreenTapController, IGTVShoppingPinnedProductView, IGTVSocialContextButtonsView, IGTVVideoControlsView, IGTVVideoCreatorView, IGTVVideoFeedActionsBarView, IGVideoCaptionView, IGVideoPreviewThumbnailView, NSString, UIButton, UIView;
@protocol IGTVFullscreenVideoCellDelegate;

@interface IGTVFullscreenVideoCell : UICollectionViewCell <IGTVFullscreenTapControllerGestureDelegate, IGTVShoppingPinnedProductViewDelegate, IGHeartAnimatable>
{
    IGTVFullscreenBaseVideoView *_baseView;
    IGPassthroughView *_overlayPassthroughView;
    IGPassthroughView *_pinnedOverlayPassthroughView;
    IGTVBlurredOverlayDetailedView *_blurredOverlayView;
    UIView *_dimmingView;
    double _currentVolume;
    UIButton *_seriesButton;
    UIButton *_collectionButton;
    _Bool _descriptionShown;
    _Bool _chromeAdjustedForScrubbing;
    _Bool _staticViewHidden;
    _Bool _enterLandscapeButtonHidden;
    IGTVVideoCreatorView *_creatorView;
    id <IGTVFullscreenVideoCellDelegate> _delegate;
    IGCoreTextView *_landscapeBrandedContentTextView;
    long long _playerMode;
    IGMultilineChevronButton *_titleButton;
    IGTVDescriptionContainerView *_descriptionView;
    IGVideoPreviewThumbnailView *_thumbnailView;
    IGTVSocialContextButtonsView *_socialContextView;
    IGTVVideoFeedActionsBarView *_actionsBarView;
    IGTVVideoControlsView *_controlsView;
    IGTVShoppingPinnedProductView *_shoppingPinnedProductView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enterLandscapeButtonHidden; // @synthesize enterLandscapeButtonHidden=_enterLandscapeButtonHidden;
@property(nonatomic) _Bool staticViewHidden; // @synthesize staticViewHidden=_staticViewHidden;
@property(nonatomic) _Bool chromeAdjustedForScrubbing; // @synthesize chromeAdjustedForScrubbing=_chromeAdjustedForScrubbing;
@property(nonatomic) _Bool descriptionShown; // @synthesize descriptionShown=_descriptionShown;
@property(readonly, nonatomic) IGTVShoppingPinnedProductView *shoppingPinnedProductView; // @synthesize shoppingPinnedProductView=_shoppingPinnedProductView;
@property(readonly, nonatomic) IGTVVideoControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(readonly, nonatomic) IGTVVideoFeedActionsBarView *actionsBarView; // @synthesize actionsBarView=_actionsBarView;
@property(readonly, nonatomic) IGTVSocialContextButtonsView *socialContextView; // @synthesize socialContextView=_socialContextView;
@property(readonly, nonatomic) IGVideoPreviewThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, nonatomic) IGTVDescriptionContainerView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(readonly, nonatomic) IGMultilineChevronButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) long long playerMode; // @synthesize playerMode=_playerMode;
@property(retain, nonatomic) IGCoreTextView *landscapeBrandedContentTextView; // @synthesize landscapeBrandedContentTextView=_landscapeBrandedContentTextView;
@property(nonatomic) __weak id <IGTVFullscreenVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGTVVideoCreatorView *creatorView; // @synthesize creatorView=_creatorView;
- (_Bool)fullscreenQuickSkipController:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)shoppingPinnedProductView:(id)arg1 didTapCTAWithViewModel:(id)arg2;
- (void)_shoppingPinnedProductViewTapped:(id)arg1;
- (void)_collectionButtonTapped;
- (void)_seriesButtonTapped;
- (void)_enterLandscapeTapped;
- (id)contentViewForHeartAnimation;
- (void)_animateLayoutUpdates;
- (void)_updateStaticViewAndEnterLandscapeButtonAppearance;
- (void)_updateSubchromeAlpha;
- (void)setPinnedOverlayAlpha:(double)arg1;
- (void)setChromeAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)blurVideoContents:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithOverlayViewModel:(id)arg1 animated:(_Bool)arg2;
- (void)configureWithCollectionTitle:(id)arg1 showCollectionButton:(_Bool)arg2;
- (void)configureWithSeriesTitle:(id)arg1 showSeriesButton:(_Bool)arg2;
- (void)configureWithVideoView:(id)arg1 playerMode:(long long)arg2 aspectRatio:(struct CGSize)arg3 title:(id)arg4 description:(id)arg5 descriptionUsesIGTVHashtag:(_Bool)arg6 landscapeBrandedContentString:(id)arg7 isNonIGTVMedia:(_Bool)arg8;
- (void)setCornerRadiusPresentationProgress:(double)arg1;
@property(readonly, nonatomic) IGVideoCaptionView *videoCaptionView;
@property(readonly, nonatomic) IGTVFullscreenTapController *quickSkipController;
@property(readonly, nonatomic) UIButton *undoButton;
@property(readonly, nonatomic) UIButton *closeButton;
@property(readonly, nonatomic) UIButton *blockedButton;
@property(readonly, nonatomic) IGTVFullscreenLoadingView *loadingView;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


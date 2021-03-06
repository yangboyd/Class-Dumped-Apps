//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGImageProgressViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPHeroCarouselImageAnimatedTransitionProviderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPDPMediaWithFeaturedProductPendingOverlayDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, IGGradientView, IGImageProgressView, IGShoppingPDPMediaWithFeaturedProductPendingOverlay, IGStoryOverlayTapModel, IGZoomController, NSShadow, NSString, UIButton, UITapGestureRecognizer, UIView;
@protocol IGShoppingPDPHeroCarouselMediaCellDelegate, IGZoomControllerZoomingDelegate;

@interface IGShoppingPDPHeroCarouselMediaCell : UICollectionViewCell <IGImageProgressViewDelegate, IGShoppingPDPMediaWithFeaturedProductPendingOverlayDelegate, IGShoppingPDPHeroCarouselImageAnimatedTransitionProviderDelegate, UIGestureRecognizerDelegate>
{
    UIView *_mediaContainerView;
    UIView *_videoView;
    IGImageProgressView *_imageView;
    struct CGSize _imageSize;
    IGStoryOverlayTapModel *_overlayTapModel;
    struct CGSize _storyViewerMediaSize;
    IGGradientView *_gradientView;
    UIButton *_attributionButton;
    NSShadow *_attributionTextShadow;
    UIButton *_moreButton;
    CALayer *_dimmingLayer;
    IGShoppingPDPMediaWithFeaturedProductPendingOverlay *_pendingRequestOverlay;
    IGZoomController *_zoomController;
    UIView *_mediaZoomRecognizerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _showAttributionButton;
    UIView *_productSticker;
    id <IGShoppingPDPHeroCarouselMediaCellDelegate> _delegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showAttributionButton; // @synthesize showAttributionButton=_showAttributionButton;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGShoppingPDPHeroCarouselMediaCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *productSticker; // @synthesize productSticker=_productSticker;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
- (void)_didTapMoreButton:(id)arg1;
- (void)_didTapAttribution;
- (void)_didTapCell:(id)arg1;
- (void)shoppingPDPMediaWithFeaturedProductPendingOverlay:(id)arg1 didTapCancelButton:(id)arg2;
- (long long)vp_level;
- (_Bool)shoppingPDPHeroCarouselImageAnimationTransitionProvider:(id)arg1 shouldAnimationTransitionFromState:(id)arg2 toState:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)prepareForReuse;
- (void)setShowAttributionButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithConfiguration:(id)arg1 gradientColors:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *animationTransitionMediaView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


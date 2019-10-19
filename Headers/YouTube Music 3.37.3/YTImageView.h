//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, UIControl, UIImage, UIImageView;
@protocol GA11YMixinImpl, YTImageViewDelegate, YTImageViewLoadingDelegate;

@interface YTImageView : UIView <GA11YMixinEmbedder, YTPageStyling>
{
    UIView *_placeholderContainerView;
    UIImageView *_placeholderImageView;
    UIImage *_placeholderInitImage;
    UIImageView *_imageView;
    UIView *_imageContainerView;
    UIImageView *_borderImageView;
    _Bool _adjustThumbnails;
    _Bool _roundImage;
    _Bool _cropToFaces;
    int _borderStyle;
    double _hairlineWidth;
    double _imageViewAlpha;
    _Bool _shouldUseDefaultPlaceholder;
    _Bool _treatSizeAsIntrinsic;
    _Bool _forceNoIntrinsicSize;
    _Bool _enablePageStyling;
    id <GA11YMixinImpl> _accessibilityMixin;
    UIControl *_hitTarget;
    id <YTImageViewDelegate> _delegate;
    id <YTImageViewLoadingDelegate> _loadingDelegate;
    unsigned long long _reuseIdentifier;
    double _aspectRatio;
    double _preferredMaxLayoutWidth;
}

@property(nonatomic) _Bool enablePageStyling; // @synthesize enablePageStyling=_enablePageStyling;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) _Bool forceNoIntrinsicSize; // @synthesize forceNoIntrinsicSize=_forceNoIntrinsicSize;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic, getter=shouldTreatSizeAsIntrinsic) _Bool treatSizeAsIntrinsic; // @synthesize treatSizeAsIntrinsic=_treatSizeAsIntrinsic;
@property(readonly, nonatomic) unsigned long long reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) __weak id <YTImageViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(nonatomic) __weak id <YTImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIControl *hitTarget; // @synthesize hitTarget=_hitTarget;
- (void).cxx_destruct;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)setAccessibilityLabel:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)createPlaceholderImageViewIfNeeded;
- (void)createBorderImageViewIfNeeded;
- (_Bool)isSquare;
- (void)setImageAlpha:(double)arg1;
- (void)setHitTargetEnabled:(_Bool)arg1;
- (void)setCropToFaces:(_Bool)arg1;
- (void)setRoundImage:(_Bool)arg1;
- (void)setAdjustThumbnails:(_Bool)arg1;
- (void)prepareForReuse;
- (void)resetToPlaceholder;
- (void)setBorderStyle:(int)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setContentMode:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)image;
- (id)imageView;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *placeholder;
- (id)initWithDefaultPlaceholder;
- (id)initWithPlaceholder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


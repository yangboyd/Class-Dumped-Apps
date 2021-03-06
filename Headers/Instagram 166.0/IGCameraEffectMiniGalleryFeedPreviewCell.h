//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGImageViewDelegate-Protocol.h>

@class CAShapeLayer, FBShimmeringView, IGImageSpecifier, IGImageView, NSString, UIView;

@interface IGCameraEffectMiniGalleryFeedPreviewCell : UICollectionViewCell <IGImageViewDelegate>
{
    FBShimmeringView *_shimmeringView;
    UIView *_shimmerableView;
    IGImageView *_imageView;
    CAShapeLayer *_selectionLayer;
}

- (void).cxx_destruct;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
@property(nonatomic) _Bool isLoading;
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGImageViewDelegate-Protocol.h>

@class CALayer, IGShoppingProductThumbnailImageView, NSString;

@interface IGVisualProductStickerThumbnailImageView : UIView <IGImageViewDelegate>
{
    IGShoppingProductThumbnailImageView *_thumbnailView;
    CALayer *_largeBlurRadiusShadowLayer;
    CALayer *_smallBlurRadiusShadowLayer;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)imageViewDidLoadPlaceholder:(id)arg1;
- (void)imageView:(id)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (id)imageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


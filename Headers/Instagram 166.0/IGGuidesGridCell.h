//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBouncyCollectionViewCell.h>

#import <InstagramAppCoreFramework/IGImageViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTransitionZoomViewCustomizable-Protocol.h>

@class IGGradientView, IGGuideThumbnailAttributionView, IGImageView, IGStackLayout, NSString, UIImageView, UILabel;

@interface IGGuidesGridCell : IGBouncyCollectionViewCell <IGImageViewDelegate, IGTransitionZoomViewCustomizable>
{
    IGImageView *_coverImageView;
    IGGradientView *_bottomLegibilityGradient;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    IGGuideThumbnailAttributionView *_attributionView;
    IGStackLayout *_layout;
    UIImageView *_selectionImageView;
    long long _selectionState;
}

+ (double)suggestedNetEgoCellWidth;
+ (double)suggestedNetEgoCellHeight;
- (void).cxx_destruct;
@property(nonatomic) long long selectionState; // @synthesize selectionState=_selectionState;
- (double)zoomTransitionViewCornerRadius;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 user:(id)arg3 coverImageSpecifier:(id)arg4 analyticsModule:(id)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


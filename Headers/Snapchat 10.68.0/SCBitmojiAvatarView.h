//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCBitmojiAvatarVisibleDelegate-Protocol.h"
#import "SCImageViewOptimizable-Protocol.h"

@class SCBitmojiAvatarViewModel, SCLazy, SCNetworkImageViewSynchronizer;
@protocol SCImageDownloading;

@interface SCBitmojiAvatarView : UIView <SCBitmojiAvatarVisibleDelegate, SCImageViewOptimizable>
{
    SCLazy *_emojiLabel;
    SCLazy *_bitmojiNetworkImageView;
    SCNetworkImageViewSynchronizer *_imageSynchronizer;
    unsigned long long _optimizationOptions;
    SCBitmojiAvatarViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    struct CGSize _preferredImageSize;
}

@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCBitmojiAvatarViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long optimizationOptions; // @synthesize optimizationOptions=_optimizationOptions;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
- (void).cxx_destruct;
- (_Bool)isVisible;
- (void)_showEmojiLabelWithAttributedText:(id)arg1;
- (void)_updateBitmojiNetworkImageWithFallBackImage:(id)arg1 viewModel:(id)arg2;
- (void)_showBitmojiNetworkImageViewWithNetworkImage:(id)arg1 loadingImage:(id)arg2 fallbackNetworkImage:(id)arg3 shouldTrimBitmojiToCircle:(_Bool)arg4 viewModel:(id)arg5;
- (void)setViewModel:(id)arg1 withImageSynchronizer:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


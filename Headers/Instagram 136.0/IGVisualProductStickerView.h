//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGStoryProductStickerProtocol-Protocol.h>

@class IGVisualProductStickerThumbnailImageView, NSString, UILabel;

@interface IGVisualProductStickerView : UIView <IGStoryProductStickerProtocol>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGVisualProductStickerThumbnailImageView *_thumbnailImageView;
}

- (void).cxx_destruct;
- (id)stickerView;
- (id)loggingId;
- (id)footerLabel;
- (void)productStickerDidAppear;
- (_Bool)handleTapActionAtPointInWindowCoordinates:(struct CGPoint)arg1;
- (void)setPrimaryColor:(id)arg1;
@property(retain, nonatomic) NSString *productName;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 thumbnail:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


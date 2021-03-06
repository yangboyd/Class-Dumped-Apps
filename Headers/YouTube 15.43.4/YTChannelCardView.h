//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "YTReusableView-Protocol.h"

@class CALayer, NSString, YTFormattedStringLabel, YTImageView;

@interface YTChannelCardView : UIButton <YTReusableView>
{
    CALayer *_thumbnailImageViewTintLayer;
    YTImageView *_thumbnailImageView;
    YTFormattedStringLabel *_channelTitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTFormattedStringLabel *channelTitleLabel; // @synthesize channelTitleLabel=_channelTitleLabel;
@property(readonly, nonatomic) YTImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void)didTouchUp;
- (void)didTouchDown;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UILabel, YTFormattedStringLabel, YTMCompoundThumbnailView, YTMTransferButton;

@interface YTMOfflineMixtapeRemixContentView : UIView
{
    UILabel *_offlineMixtapeLabel;
    CAGradientLayer *_transferButtonScrim;
    YTMCompoundThumbnailView *_thumbnailView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_bylineLabel;
    YTMTransferButton *_transferButton;
}

@property(retain, nonatomic) YTMTransferButton *transferButton; // @synthesize transferButton=_transferButton;
@property(retain, nonatomic) YTFormattedStringLabel *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTMCompoundThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (struct CGRect)thumbnailFrame;
- (void)setTransferButtonHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


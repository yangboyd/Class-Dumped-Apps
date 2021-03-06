//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGMarquee, IGMusicAnimatedAudioIndicatorBars, IGSundialAdditionalAudioInfo, IGSundialAudioAttributionLabel;
@protocol IGSundialAudioAssetProtocol;

@interface IGSundialAudioAttributionView : UIView
{
    IGMusicAnimatedAudioIndicatorBars *_audioBars;
    IGMarquee *_attributionLabelMarquee;
    IGSundialAudioAttributionLabel *_attributionLabel;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAnimating) _Bool animating;
@property(retain, nonatomic) IGSundialAdditionalAudioInfo *additionalAudioInfo;
@property(retain, nonatomic) id <IGSundialAudioAssetProtocol> audioAsset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


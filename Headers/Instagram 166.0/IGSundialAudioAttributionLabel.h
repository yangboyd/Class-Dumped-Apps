//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGMusicAttributionLabel, IGSundialAdditionalAudioInfo, UIColor, UIFont, UILabel;
@protocol IGSundialAudioAssetProtocol;

@interface IGSundialAudioAttributionLabel : UIView
{
    IGMusicAttributionLabel *_audioAttributionLabel;
    UILabel *_additionalAttributionLabel;
    id <IGSundialAudioAssetProtocol> _audioAsset;
    IGSundialAdditionalAudioInfo *_additionalAudioInfo;
    UIColor *_color;
    UIFont *_font;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) IGSundialAdditionalAudioInfo *additionalAudioInfo; // @synthesize additionalAudioInfo=_additionalAudioInfo;
@property(retain, nonatomic) id <IGSundialAudioAssetProtocol> audioAsset; // @synthesize audioAsset=_audioAsset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


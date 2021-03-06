//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIFamiliarityViewCell.h"

@class NFUIVideoMetadataView, PlayButton, UIImageView, UILabel;

@interface NFUIDisplayPageBoxArtImageCell : NFUIFamiliarityViewCell
{
    UIImageView *_backgroundImageView;
    UIImageView *_titleTextImageView;
    UIImageView *_boxArtImageView;
    NFUIVideoMetadataView *_metaDataView;
    UILabel *_titleTextLabel;
    UILabel *_supplementalLabel;
    PlayButton *_playButtonView;
    UIImageView *_gradientView;
}

@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) PlayButton *playButtonView; // @synthesize playButtonView=_playButtonView;
@property(retain, nonatomic) UILabel *supplementalLabel; // @synthesize supplementalLabel=_supplementalLabel;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
@property(retain, nonatomic) NFUIVideoMetadataView *metaDataView; // @synthesize metaDataView=_metaDataView;
@property(retain, nonatomic) UIImageView *boxArtImageView; // @synthesize boxArtImageView=_boxArtImageView;
@property(retain, nonatomic) UIImageView *titleTextImageView; // @synthesize titleTextImageView=_titleTextImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)playButtonPressed:(id)arg1;

@end


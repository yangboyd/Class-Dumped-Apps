//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCountdownStickerTimeView, IGGradientView, IGStackLayout, UIImageView, UILabel;

@interface IGVotingInfoCenterHeaderCell : UICollectionViewCell
{
    IGGradientView *_backgroundGradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_subtitleImageView;
    UIImageView *_facebookFamilyImageView;
    IGCountdownStickerTimeView *_countdownView;
    IGStackLayout *_contentLayout;
}

- (void).cxx_destruct;
- (void)showFakeTick;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


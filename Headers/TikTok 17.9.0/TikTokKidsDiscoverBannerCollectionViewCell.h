//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TikTokKidsBannerModel, UIImageView;

@interface TikTokKidsDiscoverBannerCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    TikTokKidsBannerModel *_model;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) TikTokKidsBannerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;
- (void)refreshWithPlaceholderModel:(id)arg1;
- (void)refreshWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface AWEDiscoverSquareCollectionViewCell : UICollectionViewCell
{
    UIImageView *_coverImageView;
    UILabel *_descLabel;
    UIImageView *_maskImageView;
    UILabel *_adTagLabel;
}

@property(retain, nonatomic) UILabel *adTagLabel; // @synthesize adTagLabel=_adTagLabel;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)configureTitle:(id)arg1 imageName:(id)arg2;
- (void)resume;
- (void)pause;
- (void)configureAdModel:(id)arg1;
- (void)configureModel:(id)arg1;
- (void)prepareForReuse;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPSCollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface QPSProductCollectionViewCell : QPSCollectionViewCell
{
    UIView *_ratingView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_ratingCounts;
    UIView *_topBorderView;
    UIView *_rightBorderView;
}

+ (id)highlightAttributesWithStyleGuide:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *rightBorderView; // @synthesize rightBorderView=_rightBorderView;
@property(nonatomic) __weak UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(nonatomic) __weak UILabel *ratingCounts; // @synthesize ratingCounts=_ratingCounts;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *ratingView; // @synthesize ratingView=_ratingView;
- (void)updateCellStyleWithGuide:(id)arg1;
- (void)setModel:(id)arg1;

@end


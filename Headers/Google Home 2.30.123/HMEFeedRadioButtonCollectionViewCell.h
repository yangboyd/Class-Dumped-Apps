//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIStackView;

@interface HMEFeedRadioButtonCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIStackView *_horizontalStackView;
    NSLayoutConstraint *_maxWidthConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *maxWidthConstraint; // @synthesize maxWidthConstraint=_maxWidthConstraint;
@property(readonly, nonatomic) UIStackView *horizontalStackView; // @synthesize horizontalStackView=_horizontalStackView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)markRadioButtonUnchecked;
- (void)markRadioButtonChecked;
- (void)initializeLayoutConstraints;
- (void)setMaxWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


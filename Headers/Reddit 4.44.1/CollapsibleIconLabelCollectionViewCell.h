//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class AttributedLabel, BaseImageView, BaseLabel, NSLayoutConstraint;

@interface CollapsibleIconLabelCollectionViewCell : BaseCollectionViewCell
{
    _Bool _isExpanded;
    BaseLabel *_titleLabel;
    AttributedLabel *_descriptionAttributedLabel;
    BaseImageView *_accessoryIconImageView;
    NSLayoutConstraint *_accessoryIconWidthConstraint;
    NSLayoutConstraint *_detailLabelZeroHeightConstraint;
}

+ (double)calculatedHeightForAttributedString:(id)arg1 width:(double)arg2 includingHorizontalPadding:(_Bool)arg3;
+ (double)calculatedHeightForString:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) NSLayoutConstraint *detailLabelZeroHeightConstraint; // @synthesize detailLabelZeroHeightConstraint=_detailLabelZeroHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryIconWidthConstraint; // @synthesize accessoryIconWidthConstraint=_accessoryIconWidthConstraint;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) BaseImageView *accessoryIconImageView; // @synthesize accessoryIconImageView=_accessoryIconImageView;
@property(retain, nonatomic) AttributedLabel *descriptionAttributedLabel; // @synthesize descriptionAttributedLabel=_descriptionAttributedLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureDescriptionLabelCollapsed:(_Bool)arg1 accessoryIconHidden:(_Bool)arg2;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end


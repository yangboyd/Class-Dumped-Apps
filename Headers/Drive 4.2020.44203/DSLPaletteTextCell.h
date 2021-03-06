//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DSLPaletteBaseCell.h"

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface DSLPaletteTextCell : DSLPaletteBaseCell
{
    UIImageView *_disclosureView;
    UIImageView *_titleImageView;
    NSLayoutConstraint *_leftTextConstraint;
    NSLayoutConstraint *_rightTextConstraint;
    NSLayoutConstraint *_textTopToTitleImageBottom;
    NSLayoutConstraint *_textTopToContentViewTop;
    NSLayoutConstraint *_bottomSubtextConstraint;
    NSLayoutConstraint *_centerTextConstraint;
    NSLayoutConstraint *_subtextTopToTextBottom;
    NSArray *_disclosureConstraints;
    _Bool _showDisclosureIndicator;
    _Bool _showInk;
    UILabel *_textLabel;
    UILabel *_subtextLabel;
    UIView *_accessoryView;
}

+ (double)getPaddingForAccessoryView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UILabel *subtextLabel; // @synthesize subtextLabel=_subtextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool showInk; // @synthesize showInk=_showInk;
@property(nonatomic) _Bool showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
- (double)labelRightOffset;
- (double)accessoryWidth;
- (_Bool)accessibilityActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (void)removeAccessoryConstraints;
- (void)prepareForReuse;
- (void)layoutAccessoryView;
- (void)updateLayoutConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end


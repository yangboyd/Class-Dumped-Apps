//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class AttributedLabel, NSLayoutConstraint;

@interface AttributedLabelCollectionViewCell : BaseCollectionViewCell
{
    AttributedLabel *_textViewAttributedLabel;
    NSLayoutConstraint *_labelLeadingConstraint;
    NSLayoutConstraint *_labelTrailingConstraint;
    NSLayoutConstraint *_labelTopConstraint;
    NSLayoutConstraint *_labelBottomConstraint;
    struct UIEdgeInsets _labelInsets;
}

+ (double)calculatedHeightForAttributedString:(id)arg1 width:(double)arg2 includingHorizontalPadding:(_Bool)arg3;
@property(retain, nonatomic) NSLayoutConstraint *labelBottomConstraint; // @synthesize labelBottomConstraint=_labelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelTopConstraint; // @synthesize labelTopConstraint=_labelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelTrailingConstraint; // @synthesize labelTrailingConstraint=_labelTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint; // @synthesize labelLeadingConstraint=_labelLeadingConstraint;
@property(retain, nonatomic) AttributedLabel *textViewAttributedLabel; // @synthesize textViewAttributedLabel=_textViewAttributedLabel;
@property(nonatomic) struct UIEdgeInsets labelInsets; // @synthesize labelInsets=_labelInsets;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end


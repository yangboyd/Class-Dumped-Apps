//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface SCCompactWrappingLabel : UILabel
{
    double _heightThatFits;
    struct CGRect _compactTextRect;
}

@property(nonatomic) double heightThatFits; // @synthesize heightThatFits=_heightThatFits;
@property(nonatomic) struct CGRect compactTextRect; // @synthesize compactTextRect=_compactTextRect;
- (double)_heightForTextWithWidth:(double)arg1 limitedToLineMax:(_Bool)arg2;
- (void)_invalidateMetrics;
- (void)_clearCachedMetrics;
- (struct CGRect)compactTextRectForBounds:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)_SCCompactWrappingLabel_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


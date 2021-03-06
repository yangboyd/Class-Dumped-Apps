//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUILabel.h"

@interface BottomAlignLabel : NFUILabel
{
    _Bool _shouldCenterVertically;
    float _topInset;
    float _leftInset;
    float _bottomInset;
    float _rightInset;
    long long _maxHeight;
}

@property float rightInset; // @synthesize rightInset=_rightInset;
@property float bottomInset; // @synthesize bottomInset=_bottomInset;
@property float leftInset; // @synthesize leftInset=_leftInset;
@property float topInset; // @synthesize topInset=_topInset;
@property(nonatomic) _Bool shouldCenterVertically; // @synthesize shouldCenterVertically=_shouldCenterVertically;
@property long long maxHeight; // @synthesize maxHeight=_maxHeight;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 maxHeight:(long long)arg2;

@end


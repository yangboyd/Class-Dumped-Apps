//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IESLiveMTDiggEndAnimationView : UIView
{
    _Bool _isAnchor;
    UIView *_gradientLayer;
    UILabel *_textLable;
    long long _count;
    long long _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) UILabel *textLable; // @synthesize textLable=_textLable;
@property(retain, nonatomic) UIView *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (long long)animationMaxWidth;
- (void)adjustTextFrame:(long long)arg1 margin:(long long)arg2;
- (void)doEndAnimationWithFromBound:(struct CGRect)arg1;
- (void)doStartAnimationToBound:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithIsAnchor:(_Bool)arg1 TotalCount:(long long)arg2;

@end


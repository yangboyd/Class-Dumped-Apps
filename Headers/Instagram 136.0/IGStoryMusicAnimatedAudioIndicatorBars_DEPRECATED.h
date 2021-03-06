//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface IGStoryMusicAnimatedAudioIndicatorBars_DEPRECATED : UIView
{
    NSArray *_bars;
    _Bool _animating;
    _Bool _shouldBeWigglingBars;
    double _spacing;
    double _barWidth;
    double _minBarHeight;
    double _maxBarHeight;
}

@property(nonatomic) _Bool shouldBeWigglingBars; // @synthesize shouldBeWigglingBars=_shouldBeWigglingBars;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double maxBarHeight; // @synthesize maxBarHeight=_maxBarHeight;
@property(nonatomic) double minBarHeight; // @synthesize minBarHeight=_minBarHeight;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) _Bool isVisible;
- (void)_addWiggleAnimationToBars;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


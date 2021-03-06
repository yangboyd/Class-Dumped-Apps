//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtC6Charts20BarLineChartViewBase.h>

@class _TtC6Charts12BarChartData;

@interface _TtC6Charts12BarChartView : _TtC6Charts20BarLineChartViewBase
{
    // Error parsing type: , name: _drawValueAboveBarEnabled
    // Error parsing type: , name: _drawBarShadowEnabled
    // Error parsing type: , name: fitBars
    // Error parsing type: , name: highlightFullBarEnabled
}

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) _Bool isDrawBarShadowEnabled;
@property(nonatomic, readonly) _Bool isDrawValueAboveBarEnabled;
@property(nonatomic, readonly) _TtC6Charts12BarChartData *barData;
@property(nonatomic, readonly) _Bool isHighlightFullBarEnabled;
@property(nonatomic) _Bool highlightFullBarEnabled; // @synthesize highlightFullBarEnabled;
@property(nonatomic) _Bool fitBars; // @synthesize fitBars;
@property(nonatomic) _Bool drawBarShadowEnabled;
@property(nonatomic) _Bool drawValueAboveBarEnabled;
- (void)highlightValueWithX:(double)arg1 dataSetIndex:(long long)arg2 stackIndex:(long long)arg3;
- (void)groupBarsFromX:(double)arg1 groupSpace:(double)arg2 barSpace:(double)arg3;
- (struct CGRect)getBarBoundsWithEntry:(id)arg1;
- (id)getHighlightByTouchPoint:(struct CGPoint)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtC6Charts12BarChartView.h>

@interface _TtC6Charts22HorizontalBarChartView : _TtC6Charts12BarChartView
{
}

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setVisibleYRangeWithMinYRange:(double)arg1 maxYRange:(double)arg2 axis:(long long)arg3;
- (void)setVisibleYRangeMinimum:(double)arg1 axis:(long long)arg2;
- (void)setVisibleYRangeMaximum:(double)arg1 axis:(long long)arg2;
- (void)setVisibleXRangeWithMinXRange:(double)arg1 maxXRange:(double)arg2;
- (void)setVisibleXRangeMinimum:(double)arg1;
- (void)setVisibleXRangeMaximum:(double)arg1;
@property(nonatomic, readonly) double highestVisibleX;
@property(nonatomic, readonly) double lowestVisibleX;
- (id)getHighlightByTouchPoint:(struct CGPoint)arg1;
- (struct CGPoint)getPositionWithEntry:(id)arg1 axis:(long long)arg2;
- (struct CGRect)getBarBoundsWithEntry:(id)arg1;
- (struct CGPoint)getMarkerPositionWithHighlight:(id)arg1;

@end


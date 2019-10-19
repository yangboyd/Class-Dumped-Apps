//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface MLSparklineView : UIView
{
    double _lineThickness;
    UIColor *_lineColor;
    UIColor *_strokeColor;
    NSArray *_points;
}

@property(copy, nonatomic) NSArray *points; // @synthesize points=_points;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
- (void).cxx_destruct;
- (void)drawPointsWithColor:(struct CGColor *)arg1 thickness:(double)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


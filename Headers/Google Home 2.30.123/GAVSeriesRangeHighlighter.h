//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVUIView.h"

@class NSNumber, UIColor;

@interface GAVSeriesRangeHighlighter : GAVUIView
{
    NSNumber *_xStart;
    NSNumber *_xEnd;
    NSNumber *_yStart;
    NSNumber *_yEnd;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSNumber *yEnd; // @synthesize yEnd=_yEnd;
@property(retain, nonatomic) NSNumber *yStart; // @synthesize yStart=_yStart;
@property(retain, nonatomic) NSNumber *xEnd; // @synthesize xEnd=_xEnd;
@property(retain, nonatomic) NSNumber *xStart; // @synthesize xStart=_xStart;
- (void)drawRect:(struct CGRect)arg1;

@end


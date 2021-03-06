//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVUIView.h"

@class GAVBottomGutterView, GAVLeftGutterView, GAVRightGutterView, GAVTopGutterView, NSMutableDictionary;
@protocol GAVChartStyle;

@interface GAVChartLayoutView : GAVUIView
{
    GAVUIView *_drawArea;
    GAVLeftGutterView *_leftGutter;
    GAVTopGutterView *_topGutter;
    GAVRightGutterView *_rightGutter;
    GAVBottomGutterView *_bottomGutter;
    id <GAVChartStyle> _style;
    NSMutableDictionary *_drawAreaSubviewsZIndexes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *drawAreaSubviewsZIndexes; // @synthesize drawAreaSubviewsZIndexes=_drawAreaSubviewsZIndexes;
@property(copy, nonatomic) id <GAVChartStyle> style; // @synthesize style=_style;
@property(retain, nonatomic) GAVBottomGutterView *bottomGutter; // @synthesize bottomGutter=_bottomGutter;
@property(retain, nonatomic) GAVRightGutterView *rightGutter; // @synthesize rightGutter=_rightGutter;
@property(retain, nonatomic) GAVTopGutterView *topGutter; // @synthesize topGutter=_topGutter;
@property(retain, nonatomic) GAVLeftGutterView *leftGutter; // @synthesize leftGutter=_leftGutter;
@property(retain, nonatomic) GAVUIView *drawArea; // @synthesize drawArea=_drawArea;
- (void)addDrawAreaSubview:(id)arg1 atZIndex:(long long)arg2;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface YTMMarkerview : UIView
{
    UIColor *_markerColor;
    NSArray *_markers;
    double _totalTime;
}

@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(copy, nonatomic) NSArray *markers; // @synthesize markers=_markers;
@property(readonly, nonatomic) UIColor *markerColor; // @synthesize markerColor=_markerColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;

@end


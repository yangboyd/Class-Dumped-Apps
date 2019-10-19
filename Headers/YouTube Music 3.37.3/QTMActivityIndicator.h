//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCActivityIndicator.h"

#import "YTActivityIndicatorView-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, UIColor;

@interface QTMActivityIndicator : MDCActivityIndicator <YTActivityIndicatorView, YTPageStyling>
{
    UIColor *_qtmStrokeColor;
}

+ (id)defaultColors;
+ (void)initialize;
+ (id)ytm_defaultActivityIndicator;
@property(copy, nonatomic) UIColor *qtmStrokeColor; // @synthesize qtmStrokeColor=_qtmStrokeColor;
- (void).cxx_destruct;
- (unsigned long long)polychromeColorCount;
- (void)setPolychromeColorCount:(unsigned long long)arg1;
- (long long)cycleStart;
- (void)setCycleStart:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)pageStyleDidChange:(long long)arg1;
- (void)strokeRotationCycleFinished;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


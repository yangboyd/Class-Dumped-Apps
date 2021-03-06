//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATPointPicker.h"

@class SCATFocusContext;

@interface SCATXYAxisPointPicker : SCATPointPicker
{
    SCATFocusContext *_sweepFocusContext;
}

@property(retain, nonatomic) SCATFocusContext *sweepFocusContext; // @synthesize sweepFocusContext=_sweepFocusContext;
- (void).cxx_destruct;
- (void)orientationDidChange:(id)arg1;
- (double)scannerIdleTimeout;
- (_Bool)shouldKeepScannerAwake;
- (_Bool)handleInputAction:(long long)arg1 withElement:(id)arg2;
- (_Bool)providesElements;
- (_Bool)allowsSelectionRefinement;
- (long long)pickerType;
- (_Bool)isRefiningPoint;
- (void)didSweepOverPoint:(struct CGPoint)arg1;
- (id)_initWithMenu:(id)arg1;

@end


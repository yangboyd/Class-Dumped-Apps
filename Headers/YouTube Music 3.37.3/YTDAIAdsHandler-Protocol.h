//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MLCuepoint, YTInstreamAdBreak;

@protocol YTDAIAdsHandler <NSObject>
- (void)forceReturnAdBreakAfterTime:(double)arg1;
- (NSString *)getIntervalsDescription;
- (double)startTimeForAdCPN:(NSString *)arg1;
- (void)setAdPrefetchWindow:(double)arg1;
- (void)activateCuepointsFrom:(double)arg1;
- (void)processAdBreak:(id <YTInstreamAdBreak>)arg1 forCueIdentifier:(NSString *)arg2;
- (void)processCuepoint:(id <MLCuepoint>)arg1;
@end


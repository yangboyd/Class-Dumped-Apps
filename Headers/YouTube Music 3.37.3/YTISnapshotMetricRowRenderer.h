//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTISnapshotMetricRowRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *comparisonSubtitle; // @dynamic comparisonSubtitle;
@property(retain, nonatomic) YTIFormattedString *comparisonValue; // @dynamic comparisonValue;
@property(nonatomic) _Bool hasComparisonSubtitle; // @dynamic hasComparisonSubtitle;
@property(nonatomic) _Bool hasComparisonValue; // @dynamic hasComparisonValue;
@property(nonatomic) _Bool hasMetricTitle; // @dynamic hasMetricTitle;
@property(nonatomic) _Bool hasMetricValue; // @dynamic hasMetricValue;
@property(nonatomic) _Bool hasTrendType; // @dynamic hasTrendType;
@property(retain, nonatomic) YTIFormattedString *metricTitle; // @dynamic metricTitle;
@property(retain, nonatomic) YTIFormattedString *metricValue; // @dynamic metricValue;
@property(nonatomic) int trendType; // @dynamic trendType;

@end


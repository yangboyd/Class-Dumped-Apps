//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIAnalyticsChartSupportedRenderers, YTIAnalyticsHeaderSupportedRenderers;

@interface YTIAnalyticsChartRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAnalyticsChartSupportedRenderers *chart; // @dynamic chart;
@property(nonatomic) _Bool hasChart; // @dynamic hasChart;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIAnalyticsHeaderSupportedRenderers *header; // @dynamic header;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAnalyticsDetailScreenConfiguration, YTIAnalyticsVideoScreenConfiguration;

@interface YTISnowEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAnalyticsDetailScreenConfiguration *detailScreenConfiguration; // @dynamic detailScreenConfiguration;
@property(readonly, nonatomic) int screenConfigurationOneOfCase; // @dynamic screenConfigurationOneOfCase;
@property(retain, nonatomic) YTIAnalyticsVideoScreenConfiguration *videoScreenConfiguration; // @dynamic videoScreenConfiguration;

@end


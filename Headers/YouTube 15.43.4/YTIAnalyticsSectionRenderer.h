//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIAnalyticsSectionSupportedHeaders, YTIFormattedString;

@interface YTIAnalyticsSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasSectionTitle; // @dynamic hasSectionTitle;
@property(nonatomic) _Bool hasTimePeriodLabel; // @dynamic hasTimePeriodLabel;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIAnalyticsSectionSupportedHeaders *header; // @dynamic header;
@property(retain, nonatomic) YTIFormattedString *sectionTitle; // @dynamic sectionTitle;
@property(retain, nonatomic) YTIFormattedString *timePeriodLabel; // @dynamic timePeriodLabel;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


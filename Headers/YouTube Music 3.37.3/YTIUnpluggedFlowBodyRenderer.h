//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedFlowBodyRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *bodyImage; // @dynamic bodyImage;
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(retain, nonatomic) NSMutableArray *flowBodyItemsArray; // @dynamic flowBodyItemsArray;
@property(readonly, nonatomic) unsigned long long flowBodyItemsArray_Count; // @dynamic flowBodyItemsArray_Count;
@property(nonatomic) _Bool hasBodyImage; // @dynamic hasBodyImage;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


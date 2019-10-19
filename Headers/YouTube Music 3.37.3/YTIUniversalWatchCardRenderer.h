//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIFormattedString, YTIIcon, YTISeparatorDetails, YTIWatchCardCallToActionSupportedRenderers, YTIWatchCardHeaderSupportedRenderers;

@interface YTIUniversalWatchCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIWatchCardCallToActionSupportedRenderers *callToAction; // @dynamic callToAction;
@property(retain, nonatomic) YTIIcon *collapsedIcon; // @dynamic collapsedIcon;
@property(retain, nonatomic) YTIFormattedString *collapsedLabel; // @dynamic collapsedLabel;
@property(retain, nonatomic) YTIIcon *expandedIcon; // @dynamic expandedIcon;
@property(retain, nonatomic) YTIFormattedString *expandedLabel; // @dynamic expandedLabel;
@property(nonatomic) int expandedSectionsCount; // @dynamic expandedSectionsCount;
@property(nonatomic) _Bool hasCallToAction; // @dynamic hasCallToAction;
@property(nonatomic) _Bool hasCollapsedIcon; // @dynamic hasCollapsedIcon;
@property(nonatomic) _Bool hasCollapsedLabel; // @dynamic hasCollapsedLabel;
@property(nonatomic) _Bool hasExpandedIcon; // @dynamic hasExpandedIcon;
@property(nonatomic) _Bool hasExpandedLabel; // @dynamic hasExpandedLabel;
@property(nonatomic) _Bool hasExpandedSectionsCount; // @dynamic hasExpandedSectionsCount;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasSeparator; // @dynamic hasSeparator;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIWatchCardHeaderSupportedRenderers *header; // @dynamic header;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @dynamic sectionsArray;
@property(readonly, nonatomic) unsigned long long sectionsArray_Count; // @dynamic sectionsArray_Count;
@property(retain, nonatomic) YTISeparatorDetails *separator; // @dynamic separator;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


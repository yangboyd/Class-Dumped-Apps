//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIFormattedString, YTIUnlimitedBadgeInfoSupportedRenderers;

@interface YTIUnlimitedBadgeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInfoRenderer; // @dynamic hasInfoRenderer;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasPurchased; // @dynamic hasPurchased;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIUnlimitedBadgeInfoSupportedRenderers *infoRenderer; // @dynamic infoRenderer;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(nonatomic) _Bool purchased; // @dynamic purchased;
@property(copy, nonatomic) NSString *tooltip; // @dynamic tooltip;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


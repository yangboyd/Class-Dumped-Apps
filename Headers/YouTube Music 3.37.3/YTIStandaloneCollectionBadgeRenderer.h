//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIFormattedString, YTIIcon;

@interface YTIStandaloneCollectionBadgeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIconText; // @dynamic hasIconText;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *iconText; // @dynamic iconText;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSString;

@interface GMSx_GSPDTime : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *formattedValue; // @dynamic formattedValue;
@property(nonatomic) _Bool hasFormattedValue; // @dynamic hasFormattedValue;
@property(nonatomic) _Bool hasRoundedUtcSeconds; // @dynamic hasRoundedUtcSeconds;
@property(nonatomic) _Bool hasTimeZone; // @dynamic hasTimeZone;
@property(nonatomic) _Bool hasTimeZoneOffsetSeconds; // @dynamic hasTimeZoneOffsetSeconds;
@property(nonatomic) _Bool hasUtcSeconds; // @dynamic hasUtcSeconds;
@property(nonatomic) long long roundedUtcSeconds; // @dynamic roundedUtcSeconds;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(nonatomic) int timeZoneOffsetSeconds; // @dynamic timeZoneOffsetSeconds;
@property(nonatomic) long long utcSeconds; // @dynamic utcSeconds;

@end


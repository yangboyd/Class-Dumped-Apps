//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIUnpluggedLocationInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool browserPermissionGranted; // @dynamic browserPermissionGranted;
@property(nonatomic) int clientPermissionState; // @dynamic clientPermissionState;
@property(nonatomic) _Bool hasBrowserPermissionGranted; // @dynamic hasBrowserPermissionGranted;
@property(nonatomic) _Bool hasClientPermissionState; // @dynamic hasClientPermissionState;
@property(nonatomic) _Bool hasIpAddress; // @dynamic hasIpAddress;
@property(nonatomic) _Bool hasIsInitialLoad; // @dynamic hasIsInitialLoad;
@property(nonatomic) _Bool hasLatitudeE7; // @dynamic hasLatitudeE7;
@property(nonatomic) _Bool hasLocalTimestampMs; // @dynamic hasLocalTimestampMs;
@property(nonatomic) _Bool hasLocationOverrideToken; // @dynamic hasLocationOverrideToken;
@property(nonatomic) _Bool hasLocationRadiusMeters; // @dynamic hasLocationRadiusMeters;
@property(nonatomic) _Bool hasLongitudeE7; // @dynamic hasLongitudeE7;
@property(nonatomic) _Bool hasPrefer24HourTime; // @dynamic hasPrefer24HourTime;
@property(nonatomic) _Bool hasTimezone; // @dynamic hasTimezone;
@property(copy, nonatomic) NSString *ipAddress; // @dynamic ipAddress;
@property(nonatomic) _Bool isInitialLoad; // @dynamic isInitialLoad;
@property(nonatomic) int latitudeE7; // @dynamic latitudeE7;
@property(nonatomic) long long localTimestampMs; // @dynamic localTimestampMs;
@property(copy, nonatomic) NSString *locationOverrideToken; // @dynamic locationOverrideToken;
@property(nonatomic) int locationRadiusMeters; // @dynamic locationRadiusMeters;
@property(nonatomic) int longitudeE7; // @dynamic longitudeE7;
@property(nonatomic) _Bool prefer24HourTime; // @dynamic prefer24HourTime;
@property(copy, nonatomic) NSString *timezone; // @dynamic timezone;

@end


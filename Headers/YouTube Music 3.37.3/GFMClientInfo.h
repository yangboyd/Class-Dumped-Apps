//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMClientInfo_RequesterProductInfo, GFMDeviceInfo, NSString;

@interface GFMClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientId; // @dynamic clientId;
@property(retain, nonatomic) GFMDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(nonatomic) _Bool hasRequesterProductInfo; // @dynamic hasRequesterProductInfo;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) GFMClientInfo_RequesterProductInfo *requesterProductInfo; // @dynamic requesterProductInfo;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end


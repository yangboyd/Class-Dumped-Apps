//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class NSString, SCOBeaconId;

@interface SCODiscoveryHandle : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;
@property(retain, nonatomic) NSString *URL;
@property(nonatomic) _Bool hasURL;

// Remaining properties
@property(retain, nonatomic) SCOBeaconId *beaconId; // @dynamic beaconId;
@property(nonatomic) _Bool hasBeaconId; // @dynamic hasBeaconId;
@property(nonatomic) _Bool hasUrl; // @dynamic hasUrl;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end


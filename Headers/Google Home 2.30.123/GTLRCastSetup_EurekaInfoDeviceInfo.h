//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCastSetup_EurekaInfoDeviceInfoCapabilities, NSNumber, NSString;

@interface GTLRCastSetup_EurekaInfoDeviceInfo : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) GTLRCastSetup_EurekaInfoDeviceInfoCapabilities *capabilities; // @dynamic capabilities;
@property(copy, nonatomic) NSString *cloudDeviceId; // @dynamic cloudDeviceId;
@property(copy, nonatomic) NSString *factoryCountryCode; // @dynamic factoryCountryCode;
@property(copy, nonatomic) NSString *hotspotBssid; // @dynamic hotspotBssid;
@property(copy, nonatomic) NSString *localAuthorizationTokenHash; // @dynamic localAuthorizationTokenHash;
@property(copy, nonatomic) NSString *macAddress; // @dynamic macAddress;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *modelName; // @dynamic modelName;
@property(copy, nonatomic) NSString *productName; // @dynamic productName;
@property(copy, nonatomic) NSString *publicKey; // @dynamic publicKey;
@property(copy, nonatomic) NSString *ssdpUdn; // @dynamic ssdpUdn;
@property(copy, nonatomic) NSString *tvClientId; // @dynamic tvClientId;
@property(retain, nonatomic) NSNumber *tvSetupSessionId; // @dynamic tvSetupSessionId;
@property(copy, nonatomic) NSString *umaClientId; // @dynamic umaClientId;
@property(retain, nonatomic) NSNumber *uptime; // @dynamic uptime;

@end


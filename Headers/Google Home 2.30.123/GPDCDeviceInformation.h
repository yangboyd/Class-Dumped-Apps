//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GPDCDeviceInformation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool aswOptin; // @dynamic aswOptin;
@property(nonatomic) _Bool basOptin; // @dynamic basOptin;
@property(copy, nonatomic) NSString *brand; // @dynamic brand;
@property(copy, nonatomic) NSString *device; // @dynamic device;
@property(nonatomic) long long deviceId; // @dynamic deviceId;
@property(nonatomic) long long deviceLocalTimestampMs; // @dynamic deviceLocalTimestampMs;
@property(copy, nonatomic) NSString *display; // @dynamic display;
@property(nonatomic) _Bool hasAswOptin; // @dynamic hasAswOptin;
@property(nonatomic) _Bool hasBasOptin; // @dynamic hasBasOptin;
@property(nonatomic) _Bool hasBrand; // @dynamic hasBrand;
@property(nonatomic) _Bool hasDevice; // @dynamic hasDevice;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasDeviceLocalTimestampMs; // @dynamic hasDeviceLocalTimestampMs;
@property(nonatomic) _Bool hasDisplay; // @dynamic hasDisplay;
@property(nonatomic) _Bool hasIosApp; // @dynamic hasIosApp;
@property(nonatomic) _Bool hasIosAppVersion; // @dynamic hasIosAppVersion;
@property(nonatomic) _Bool hasIsFromGmscore; // @dynamic hasIsFromGmscore;
@property(nonatomic) _Bool hasIsFromIos; // @dynamic hasIsFromIos;
@property(nonatomic) _Bool hasIsFsa2; // @dynamic hasIsFsa2;
@property(nonatomic) _Bool hasIsSecondaryUdcAccount; // @dynamic hasIsSecondaryUdcAccount;
@property(nonatomic) _Bool hasLastUpdatedTimestampMs; // @dynamic hasLastUpdatedTimestampMs;
@property(nonatomic) _Bool hasLocaleCountryIso; // @dynamic hasLocaleCountryIso;
@property(nonatomic) _Bool hasManufacturer; // @dynamic hasManufacturer;
@property(nonatomic) _Bool hasModel; // @dynamic hasModel;
@property(nonatomic) _Bool hasNetworkCountryIso; // @dynamic hasNetworkCountryIso;
@property(nonatomic) _Bool hasNumContacts; // @dynamic hasNumContacts;
@property(nonatomic) _Bool hasNumRawContacts; // @dynamic hasNumRawContacts;
@property(nonatomic) _Bool hasOptOut; // @dynamic hasOptOut;
@property(nonatomic) _Bool hasSdkInt; // @dynamic hasSdkInt;
@property(nonatomic) _Bool hasSimCountryIso; // @dynamic hasSimCountryIso;
@property(nonatomic) _Bool hasUdcOptin; // @dynamic hasUdcOptin;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(copy, nonatomic) NSString *iosApp; // @dynamic iosApp;
@property(copy, nonatomic) NSString *iosAppVersion; // @dynamic iosAppVersion;
@property(retain, nonatomic) NSMutableArray *iosContactContainerArray; // @dynamic iosContactContainerArray;
@property(readonly, nonatomic) unsigned long long iosContactContainerArray_Count; // @dynamic iosContactContainerArray_Count;
@property(nonatomic) _Bool isFromGmscore; // @dynamic isFromGmscore;
@property(nonatomic) _Bool isFromIos; // @dynamic isFromIos;
@property(nonatomic) _Bool isFsa2; // @dynamic isFsa2;
@property(nonatomic) _Bool isSecondaryUdcAccount; // @dynamic isSecondaryUdcAccount;
@property(nonatomic) long long lastUpdatedTimestampMs; // @dynamic lastUpdatedTimestampMs;
@property(copy, nonatomic) NSString *localeCountryIso; // @dynamic localeCountryIso;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *model; // @dynamic model;
@property(copy, nonatomic) NSString *networkCountryIso; // @dynamic networkCountryIso;
@property(nonatomic) long long numContacts; // @dynamic numContacts;
@property(nonatomic) long long numRawContacts; // @dynamic numRawContacts;
@property(nonatomic) _Bool optOut; // @dynamic optOut;
@property(nonatomic) int sdkInt; // @dynamic sdkInt;
@property(copy, nonatomic) NSString *simCountryIso; // @dynamic simCountryIso;
@property(nonatomic) _Bool udcOptin; // @dynamic udcOptin;
@property(nonatomic) double version; // @dynamic version;

@end


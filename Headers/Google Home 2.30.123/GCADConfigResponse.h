//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSString;

@interface GCADConfigResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appArray; // @dynamic appArray;
@property(readonly, nonatomic) unsigned long long appArray_Count; // @dynamic appArray_Count;
@property(retain, nonatomic) NSMutableArray *ccsAuthScopesArray; // @dynamic ccsAuthScopesArray;
@property(readonly, nonatomic) unsigned long long ccsAuthScopesArray_Count; // @dynamic ccsAuthScopesArray_Count;
@property(copy, nonatomic) NSString *detectedCountry; // @dynamic detectedCountry;
@property(nonatomic) _Bool discoverEnabled; // @dynamic discoverEnabled;
@property(nonatomic) _Bool getAppsEnabled; // @dynamic getAppsEnabled;
@property(nonatomic) _Bool getAppsOpenedByDefault; // @dynamic getAppsOpenedByDefault;
@property(retain, nonatomic) NSMutableArray *getAppsOpenedByDefaultIfAppNotInstalledArray; // @dynamic getAppsOpenedByDefaultIfAppNotInstalledArray;
@property(readonly, nonatomic) unsigned long long getAppsOpenedByDefaultIfAppNotInstalledArray_Count; // @dynamic getAppsOpenedByDefaultIfAppNotInstalledArray_Count;
@property(nonatomic) _Bool hasDetectedCountry; // @dynamic hasDetectedCountry;
@property(nonatomic) _Bool hasDiscoverEnabled; // @dynamic hasDiscoverEnabled;
@property(nonatomic) _Bool hasGetAppsEnabled; // @dynamic hasGetAppsEnabled;
@property(nonatomic) _Bool hasGetAppsOpenedByDefault; // @dynamic hasGetAppsOpenedByDefault;
@property(nonatomic) _Bool hasIsUnicornAccount; // @dynamic hasIsUnicornAccount;
@property(nonatomic) _Bool hasIsYoungTeenAccount; // @dynamic hasIsYoungTeenAccount;
@property(nonatomic) _Bool hasListenEnabled; // @dynamic hasListenEnabled;
@property(nonatomic) _Bool hasSearchEnabled; // @dynamic hasSearchEnabled;
@property(nonatomic) _Bool hasSearchHint; // @dynamic hasSearchHint;
@property(nonatomic) _Bool hasSendInstalledApps; // @dynamic hasSendInstalledApps;
@property(nonatomic) _Bool hasUnicornVoiceEnrollmentSupported; // @dynamic hasUnicornVoiceEnrollmentSupported;
@property(nonatomic) _Bool hasWatchEnabled; // @dynamic hasWatchEnabled;
@property(nonatomic) _Bool hasWhatsOnEnabled; // @dynamic hasWhatsOnEnabled;
@property(nonatomic) _Bool isUnicornAccount; // @dynamic isUnicornAccount;
@property(nonatomic) _Bool isYoungTeenAccount; // @dynamic isYoungTeenAccount;
@property(retain, nonatomic) GPBEnumArray *linkedDeviceCapabilityArray; // @dynamic linkedDeviceCapabilityArray;
@property(readonly, nonatomic) unsigned long long linkedDeviceCapabilityArray_Count; // @dynamic linkedDeviceCapabilityArray_Count;
@property(nonatomic) _Bool listenEnabled; // @dynamic listenEnabled;
@property(nonatomic) _Bool searchEnabled; // @dynamic searchEnabled;
@property(copy, nonatomic) NSString *searchHint; // @dynamic searchHint;
@property(nonatomic) _Bool sendInstalledApps; // @dynamic sendInstalledApps;
@property(nonatomic) _Bool unicornVoiceEnrollmentSupported; // @dynamic unicornVoiceEnrollmentSupported;
@property(nonatomic) _Bool watchEnabled; // @dynamic watchEnabled;
@property(nonatomic) _Bool whatsOnEnabled; // @dynamic whatsOnEnabled;

@end


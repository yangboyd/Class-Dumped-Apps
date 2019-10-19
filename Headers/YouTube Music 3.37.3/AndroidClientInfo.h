//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AccessibilityState, AndroidDeviceType, GmsCoreBuildVariant, NSMutableArray, NSString;

@interface AndroidClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AccessibilityState *accessibilityState; // @dynamic accessibilityState;
@property(retain, nonatomic) AndroidDeviceType *androidDeviceType; // @dynamic androidDeviceType;
@property(nonatomic) long long androidId; // @dynamic androidId;
@property(copy, nonatomic) NSString *applicationBuild; // @dynamic applicationBuild;
@property(copy, nonatomic) NSString *board; // @dynamic board;
@property(copy, nonatomic) NSString *brand; // @dynamic brand;
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(copy, nonatomic) NSString *device; // @dynamic device;
@property(copy, nonatomic) NSString *deviceDataVersionInfo; // @dynamic deviceDataVersionInfo;
@property(nonatomic) long long deviceId; // @dynamic deviceId;
@property(nonatomic) int deviceRestriction; // @dynamic deviceRestriction;
@property(copy, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(nonatomic) int gmsCoreVersionCode; // @dynamic gmsCoreVersionCode;
@property(retain, nonatomic) GmsCoreBuildVariant *gmscoreVariant; // @dynamic gmscoreVariant;
@property(copy, nonatomic) NSString *hardware; // @dynamic hardware;
@property(nonatomic) _Bool hasAccessibilityState; // @dynamic hasAccessibilityState;
@property(nonatomic) _Bool hasAndroidDeviceType; // @dynamic hasAndroidDeviceType;
@property(nonatomic) _Bool hasAndroidId; // @dynamic hasAndroidId;
@property(nonatomic) _Bool hasApplicationBuild; // @dynamic hasApplicationBuild;
@property(nonatomic) _Bool hasBoard; // @dynamic hasBoard;
@property(nonatomic) _Bool hasBrand; // @dynamic hasBrand;
@property(nonatomic) _Bool hasCountry; // @dynamic hasCountry;
@property(nonatomic) _Bool hasDevice; // @dynamic hasDevice;
@property(nonatomic) _Bool hasDeviceDataVersionInfo; // @dynamic hasDeviceDataVersionInfo;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasDeviceRestriction; // @dynamic hasDeviceRestriction;
@property(nonatomic) _Bool hasFingerprint; // @dynamic hasFingerprint;
@property(nonatomic) _Bool hasGmsCoreVersionCode; // @dynamic hasGmsCoreVersionCode;
@property(nonatomic) _Bool hasGmscoreVariant; // @dynamic hasGmscoreVariant;
@property(nonatomic) _Bool hasHardware; // @dynamic hasHardware;
@property(nonatomic) _Bool hasIsSidewinderDevice; // @dynamic hasIsSidewinderDevice;
@property(nonatomic) _Bool hasLocale; // @dynamic hasLocale;
@property(nonatomic) _Bool hasLoggingId; // @dynamic hasLoggingId;
@property(nonatomic) _Bool hasManufacturer; // @dynamic hasManufacturer;
@property(nonatomic) _Bool hasMccMnc; // @dynamic hasMccMnc;
@property(nonatomic) _Bool hasModel; // @dynamic hasModel;
@property(nonatomic) _Bool hasOsBuild; // @dynamic hasOsBuild;
@property(nonatomic) _Bool hasProduct; // @dynamic hasProduct;
@property(nonatomic) _Bool hasRadioVersion; // @dynamic hasRadioVersion;
@property(nonatomic) _Bool hasRoOemKey1; // @dynamic hasRoOemKey1;
@property(nonatomic) _Bool hasSdkVersion; // @dynamic hasSdkVersion;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUsingLogSourceInt; // @dynamic hasUsingLogSourceInt;
@property(nonatomic) _Bool isSidewinderDevice; // @dynamic isSidewinderDevice;
@property(copy, nonatomic) NSString *locale; // @dynamic locale;
@property(copy, nonatomic) NSString *loggingId; // @dynamic loggingId;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *mccMnc; // @dynamic mccMnc;
@property(copy, nonatomic) NSString *model; // @dynamic model;
@property(retain, nonatomic) NSMutableArray *nativePlatformArray; // @dynamic nativePlatformArray;
@property(readonly, nonatomic) unsigned long long nativePlatformArray_Count; // @dynamic nativePlatformArray_Count;
@property(copy, nonatomic) NSString *osBuild; // @dynamic osBuild;
@property(copy, nonatomic) NSString *product; // @dynamic product;
@property(copy, nonatomic) NSString *radioVersion; // @dynamic radioVersion;
@property(copy, nonatomic) NSString *roOemKey1; // @dynamic roOemKey1;
@property(nonatomic) int sdkVersion; // @dynamic sdkVersion;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(nonatomic) _Bool usingLogSourceInt; // @dynamic usingLogSourceInt;

@end


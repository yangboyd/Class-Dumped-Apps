//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, SGWPPMobileDevice;

@interface GIPRDeviceContactContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *consentTypeArray; // @dynamic consentTypeArray;
@property(readonly, nonatomic) unsigned long long consentTypeArray_Count; // @dynamic consentTypeArray_Count;
@property(retain, nonatomic) SGWPPMobileDevice *device; // @dynamic device;
@property(nonatomic) _Bool hasDevice; // @dynamic hasDevice;
@property(nonatomic) _Bool isAndroidDarkLaunch; // @dynamic isAndroidDarkLaunch;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray;

@interface GHCAssistingDeviceData : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)hasRadio:(int)arg1;
- (_Bool)hasCapability:(int)arg1;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *capabilitiesArray; // @dynamic capabilitiesArray;
@property(readonly, nonatomic) unsigned long long capabilitiesArray_Count; // @dynamic capabilitiesArray_Count;
@property(nonatomic) int priority; // @dynamic priority;
@property(retain, nonatomic) GPBEnumArray *radiosArray; // @dynamic radiosArray;
@property(readonly, nonatomic) unsigned long long radiosArray_Count; // @dynamic radiosArray_Count;
@property(nonatomic) unsigned long long weaveDeviceId; // @dynamic weaveDeviceId;
@property(nonatomic) unsigned int weaveProductId; // @dynamic weaveProductId;
@property(nonatomic) unsigned int weaveVendorId; // @dynamic weaveVendorId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSMutableArray;

@interface WAPBDeviceTableUpdate_AccountEffect_DeviceListEffectCreate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *devicesArray; // @dynamic devicesArray;
@property(readonly, nonatomic) unsigned long long devicesArray_Count; // @dynamic devicesArray_Count;
@property(nonatomic) _Bool hasRawId; // @dynamic hasRawId;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) unsigned int rawId; // @dynamic rawId;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end


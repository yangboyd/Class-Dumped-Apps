//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GCAORGetLinkedCastDevicesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(retain, nonatomic) NSMutableArray *linkedDevicesArray; // @dynamic linkedDevicesArray;
@property(readonly, nonatomic) unsigned long long linkedDevicesArray_Count; // @dynamic linkedDevicesArray_Count;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class StorageHighUsage, StorageNearExpiry;

@interface StoragePayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int debugMode; // @dynamic debugMode;
@property(nonatomic) _Bool hasDebugMode; // @dynamic hasDebugMode;
@property(nonatomic) _Bool hasHighUsage; // @dynamic hasHighUsage;
@property(nonatomic) _Bool hasNearExpiry; // @dynamic hasNearExpiry;
@property(nonatomic) _Bool hasTimestampMs; // @dynamic hasTimestampMs;
@property(retain, nonatomic) StorageHighUsage *highUsage; // @dynamic highUsage;
@property(retain, nonatomic) StorageNearExpiry *nearExpiry; // @dynamic nearExpiry;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;

@end


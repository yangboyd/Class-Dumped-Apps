//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSMutableArray, NSString;

@interface PHTHeterodyneSyncInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientType; // @dynamic clientType;
@property(copy, nonatomic) NSString *fetchPackageName; // @dynamic fetchPackageName;
@property(nonatomic) int fetchReason; // @dynamic fetchReason;
@property(nonatomic) _Bool hasClientType; // @dynamic hasClientType;
@property(nonatomic) _Bool hasFetchPackageName; // @dynamic hasFetchPackageName;
@property(nonatomic) _Bool hasFetchReason; // @dynamic hasFetchReason;
@property(nonatomic) _Bool hasHostApplicationName; // @dynamic hasHostApplicationName;
@property(nonatomic) _Bool hasSyncLatencyMs; // @dynamic hasSyncLatencyMs;
@property(copy, nonatomic) NSString *hostApplicationName; // @dynamic hostApplicationName;
@property(retain, nonatomic) NSMutableArray *singleSyncArray; // @dynamic singleSyncArray;
@property(readonly, nonatomic) unsigned long long singleSyncArray_Count; // @dynamic singleSyncArray_Count;
@property(nonatomic) int syncLatencyMs; // @dynamic syncLatencyMs;

@end


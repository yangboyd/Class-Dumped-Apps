//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CRPTIFeatureMetadata, GPBInt32ObjectDictionary, NSMutableDictionary, NSString;

@interface CRPTICryptauthMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *appMetadata; // @dynamic appMetadata;
@property(readonly, nonatomic) unsigned long long appMetadata_Count; // @dynamic appMetadata_Count;
@property(nonatomic) long long exponentialBackoffNextSyncMillis; // @dynamic exponentialBackoffNextSyncMillis;
@property(retain, nonatomic) CRPTIFeatureMetadata *featureMetadata; // @dynamic featureMetadata;
@property(nonatomic) long long firstTimeHaveSecureScreenLockMillis; // @dynamic firstTimeHaveSecureScreenLockMillis;
@property(nonatomic) _Bool hasFeatureMetadata; // @dynamic hasFeatureMetadata;
@property(copy, nonatomic) NSString *instanceId; // @dynamic instanceId;
@property(copy, nonatomic) NSString *instanceIdToken; // @dynamic instanceIdToken;
@property(retain, nonatomic) GPBInt32ObjectDictionary *keyNameMetadata; // @dynamic keyNameMetadata;
@property(readonly, nonatomic) unsigned long long keyNameMetadata_Count; // @dynamic keyNameMetadata_Count;
@property(nonatomic) long long lastOpenedTimeMillis; // @dynamic lastOpenedTimeMillis;
@property(nonatomic) long long lastSyncCompletedMillis; // @dynamic lastSyncCompletedMillis;
@property(copy, nonatomic) NSString *lastSyncLongDeviceId; // @dynamic lastSyncLongDeviceId;
@property(nonatomic) long long lastSyncStartedMillis; // @dynamic lastSyncStartedMillis;
@property(nonatomic) long long timeUntilNextSyncMillis; // @dynamic timeUntilNextSyncMillis;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class MDDVersionRestrictions, NSMutableArray;

@interface MDDInternalFileGroup : GPBMessage
{
}

+ (id)descriptor;
+ (id)allLatestGroupsForInstanceID:(id)arg1 bundleID:(id)arg2 storageEnvironment:(id)arg3;
+ (id)groupNameFromURL:(id)arg1 instanceID:(id)arg2 bundleID:(id)arg3;
+ (id)latestCompletedSymlinkURLWithInstanceID:(id)arg1 bundleID:(id)arg2 groupName:(id)arg3 storageEnvironment:(id)arg4;
+ (id)URLWithInstanceID:(id)arg1 bundleID:(id)arg2 groupName:(id)arg3 version:(long long)arg4 storageEnvironment:(id)arg5;
+ (id)baseFileNameWithInstanceID:(id)arg1 bundleID:(id)arg2 groupName:(id)arg3 version:(long long)arg4;
+ (id)baseFileNameWithInstanceID:(id)arg1 bundleID:(id)arg2 groupName:(id)arg3;
+ (id)baseFileNameWithInstanceID:(id)arg1 bundleID:(id)arg2;
@property(readonly, getter=isSane) _Bool sane;
- (_Bool)setStale;
@property(readonly, nonatomic, getter=isStale) _Bool stale;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic, getter=isFullyLocal) _Bool fullyLocal;

// Remaining properties
@property(nonatomic) long long activeExpirationDateSecs; // @dynamic activeExpirationDateSecs;
@property(nonatomic) _Bool allFilesDone; // @dynamic allFilesDone;
@property(nonatomic) long long cleanupExpirationTimeSecs; // @dynamic cleanupExpirationTimeSecs;
@property(retain, nonatomic) NSMutableArray *filesArray; // @dynamic filesArray;
@property(readonly, nonatomic) unsigned long long filesArray_Count; // @dynamic filesArray_Count;
@property(retain, nonatomic) NSMutableArray *groupHeaderFieldsArray; // @dynamic groupHeaderFieldsArray;
@property(readonly, nonatomic) unsigned long long groupHeaderFieldsArray_Count; // @dynamic groupHeaderFieldsArray_Count;
@property(nonatomic) _Bool hasActiveExpirationDateSecs; // @dynamic hasActiveExpirationDateSecs;
@property(nonatomic) _Bool hasAllFilesDone; // @dynamic hasAllFilesDone;
@property(nonatomic) _Bool hasCleanupExpirationTimeSecs; // @dynamic hasCleanupExpirationTimeSecs;
@property(nonatomic) _Bool hasIsolateAndPreserveFileNames; // @dynamic hasIsolateAndPreserveFileNames;
@property(nonatomic) _Bool hasStaleLifetimeSecs; // @dynamic hasStaleLifetimeSecs;
@property(nonatomic) _Bool hasVersionRestrictions; // @dynamic hasVersionRestrictions;
@property(nonatomic) _Bool isolateAndPreserveFileNames; // @dynamic isolateAndPreserveFileNames;
@property(nonatomic) long long staleLifetimeSecs; // @dynamic staleLifetimeSecs;
@property(retain, nonatomic) MDDVersionRestrictions *versionRestrictions; // @dynamic versionRestrictions;

@end


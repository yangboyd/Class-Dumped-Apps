//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMSyncMetadata, NSMutableArray;

@interface GIMStreamsPush : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSyncMetadata; // @dynamic hasSyncMetadata;
@property(retain, nonatomic) NSMutableArray *leftUsersArray; // @dynamic leftUsersArray;
@property(readonly, nonatomic) unsigned long long leftUsersArray_Count; // @dynamic leftUsersArray_Count;
@property(retain, nonatomic) NSMutableArray *modifiedStreamsArray; // @dynamic modifiedStreamsArray;
@property(readonly, nonatomic) unsigned long long modifiedStreamsArray_Count; // @dynamic modifiedStreamsArray_Count;
@property(retain, nonatomic) GIMSyncMetadata *syncMetadata; // @dynamic syncMetadata;

@end


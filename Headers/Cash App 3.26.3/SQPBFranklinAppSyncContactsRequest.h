//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SQPBFranklinAppSyncContactsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addHashedAliasesArray; // @dynamic addHashedAliasesArray;
@property(readonly, nonatomic) unsigned long long addHashedAliasesArray_Count; // @dynamic addHashedAliasesArray_Count;
@property(nonatomic) _Bool hasSyncToken; // @dynamic hasSyncToken;
@property(retain, nonatomic) NSMutableArray *removeHashedAliasesArray; // @dynamic removeHashedAliasesArray;
@property(readonly, nonatomic) unsigned long long removeHashedAliasesArray_Count; // @dynamic removeHashedAliasesArray_Count;
@property(copy, nonatomic) NSString *syncToken; // @dynamic syncToken;

@end


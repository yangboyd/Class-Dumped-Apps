//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SDMOwner_ID;

@interface Provenance : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOwnerId; // @dynamic hasOwnerId;
@property(retain, nonatomic) SDMOwner_ID *ownerId; // @dynamic ownerId;
@property(retain, nonatomic) NSMutableArray *secondaryOwnersArray; // @dynamic secondaryOwnersArray;
@property(readonly, nonatomic) unsigned long long secondaryOwnersArray_Count; // @dynamic secondaryOwnersArray_Count;
@property(copy, nonatomic) NSString *sourceId; // @dynamic sourceId;
@property(nonatomic) int sourceSystem; // @dynamic sourceSystem;
@property(copy, nonatomic) NSString *sourceVersion; // @dynamic sourceVersion;

@end


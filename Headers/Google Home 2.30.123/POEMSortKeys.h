//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface POEMSortKeys : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *affinityArray; // @dynamic affinityArray;
@property(readonly, nonatomic) unsigned long long affinityArray_Count; // @dynamic affinityArray_Count;
@property(nonatomic) _Bool hasInteractionRank; // @dynamic hasInteractionRank;
@property(nonatomic) _Bool hasLastName; // @dynamic hasLastName;
@property(nonatomic) _Bool hasLastNameRaw; // @dynamic hasLastNameRaw;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasNameRaw; // @dynamic hasNameRaw;
@property(copy, nonatomic) NSString *interactionRank; // @dynamic interactionRank;
@property(copy, nonatomic) NSString *lastName; // @dynamic lastName;
@property(copy, nonatomic) NSString *lastNameRaw; // @dynamic lastNameRaw;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *nameRaw; // @dynamic nameRaw;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GIPMBatchListRankedTargetsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *affinityResponseContextArray; // @dynamic affinityResponseContextArray;
@property(readonly, nonatomic) unsigned long long affinityResponseContextArray_Count; // @dynamic affinityResponseContextArray_Count;
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;
@property(retain, nonatomic) NSMutableArray *rankedTargetArray; // @dynamic rankedTargetArray;
@property(readonly, nonatomic) unsigned long long rankedTargetArray_Count; // @dynamic rankedTargetArray_Count;

@end


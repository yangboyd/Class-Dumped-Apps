//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface YTIAppBundleClientUpdateInstruction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPartitionId; // @dynamic hasPartitionId;
@property(nonatomic) _Bool hasVersionId; // @dynamic hasVersionId;
@property(copy, nonatomic) NSData *partitionId; // @dynamic partitionId;
@property(retain, nonatomic) NSMutableArray *shardsArray; // @dynamic shardsArray;
@property(readonly, nonatomic) unsigned long long shardsArray_Count; // @dynamic shardsArray_Count;
@property(nonatomic) unsigned long long versionId; // @dynamic versionId;

@end


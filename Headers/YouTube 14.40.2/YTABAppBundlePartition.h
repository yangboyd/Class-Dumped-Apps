//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface YTABAppBundlePartition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPartitionId; // @dynamic hasPartitionId;
@property(nonatomic) _Bool hasShouldRun; // @dynamic hasShouldRun;
@property(nonatomic) _Bool hasSubDirectory; // @dynamic hasSubDirectory;
@property(nonatomic) _Bool hasVersionId; // @dynamic hasVersionId;
@property(copy, nonatomic) NSData *partitionId; // @dynamic partitionId;
@property(nonatomic) _Bool shouldRun; // @dynamic shouldRun;
@property(copy, nonatomic) NSString *subDirectory; // @dynamic subDirectory;
@property(nonatomic) unsigned long long versionId; // @dynamic versionId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCPNFLModelCheckpoint, SCPNFLTrainingMetrics;

@interface SCPNFLAggregateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTrainingMetrics; // @dynamic hasTrainingMetrics;
@property(nonatomic) _Bool hasUpdatedCheckpoint; // @dynamic hasUpdatedCheckpoint;
@property(retain, nonatomic) SCPNFLTrainingMetrics *trainingMetrics; // @dynamic trainingMetrics;
@property(retain, nonatomic) SCPNFLModelCheckpoint *updatedCheckpoint; // @dynamic updatedCheckpoint;

@end


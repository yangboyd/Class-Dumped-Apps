//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMDuoReward_DuoDataReward, GIMDuoReward_DuoTezReward;

@interface GIMDuoReward : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIMDuoReward_DuoDataReward *data_p; // @dynamic data_p;
@property(readonly, nonatomic) int rewardOneOfCase; // @dynamic rewardOneOfCase;
@property(retain, nonatomic) GIMDuoReward_DuoTezReward *tez; // @dynamic tez;

@end


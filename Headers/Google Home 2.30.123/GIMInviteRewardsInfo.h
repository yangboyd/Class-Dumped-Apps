//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMDuoReward, GIMRewardSenderInfo, NSMutableArray;

@interface GIMInviteRewardsInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *eligibleRewardsArray; // @dynamic eligibleRewardsArray;
@property(readonly, nonatomic) unsigned long long eligibleRewardsArray_Count; // @dynamic eligibleRewardsArray_Count;
@property(nonatomic) _Bool hasInviteeRewardInfo; // @dynamic hasInviteeRewardInfo;
@property(nonatomic) _Bool hasRewardsSenderInfo; // @dynamic hasRewardsSenderInfo;
@property(retain, nonatomic) GIMDuoReward *inviteeRewardInfo; // @dynamic inviteeRewardInfo;
@property(retain, nonatomic) GIMRewardSenderInfo *rewardsSenderInfo; // @dynamic rewardsSenderInfo;

@end


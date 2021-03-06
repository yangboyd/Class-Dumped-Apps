//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLivePunishEffect, HTSLiveUser, NSMutableArray, NSString;

@interface HTSLiveLinkMicBattlePunish : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long battleId; // @dynamic battleId;
@property(nonatomic) long long channelId; // @dynamic channelId;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) long long duration; // @dynamic duration;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasMvp; // @dynamic hasMvp;
@property(nonatomic) _Bool hasTargetEffect; // @dynamic hasTargetEffect;
@property(nonatomic) _Bool hasTargetUser; // @dynamic hasTargetUser;
@property(nonatomic) long long medicineCount; // @dynamic medicineCount;
@property(nonatomic) long long messageType; // @dynamic messageType;
@property(retain, nonatomic) HTSLiveUser *mvp; // @dynamic mvp;
@property(copy, nonatomic) NSString *prompts; // @dynamic prompts;
@property(retain, nonatomic) NSMutableArray *punishEffectListArray; // @dynamic punishEffectListArray;
@property(readonly, nonatomic) unsigned long long punishEffectListArray_Count; // @dynamic punishEffectListArray_Count;
@property(nonatomic) long long speedyGiftId; // @dynamic speedyGiftId;
@property(nonatomic) long long startTime; // @dynamic startTime;
@property(retain, nonatomic) HTSLivePunishEffect *targetEffect; // @dynamic targetEffect;
@property(retain, nonatomic) HTSLiveUser *targetUser; // @dynamic targetUser;

@end


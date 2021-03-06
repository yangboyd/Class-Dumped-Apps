//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveGiftIMPriority, HTSLiveGiftMessage_TextEffect, HTSLiveGiftStruct, HTSLiveUser, NSString;

@interface HTSLiveGiftMessage : GPBMessage
{
}

+ (id)descriptor;
@property(nonatomic) _Bool special;
@property(nonatomic) _Bool isFakedNormalGift;
@property(nonatomic) _Bool isFakedBigGift;

// Remaining properties
@property(nonatomic) long long comboCount; // @dynamic comboCount;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) long long fanTicketCount; // @dynamic fanTicketCount;
@property(retain, nonatomic) HTSLiveGiftStruct *gift; // @dynamic gift;
@property(nonatomic) long long giftId; // @dynamic giftId;
@property(nonatomic) long long groupCount; // @dynamic groupCount;
@property(nonatomic) long long groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasGift; // @dynamic hasGift;
@property(nonatomic) _Bool hasPriority; // @dynamic hasPriority;
@property(nonatomic) _Bool hasTextEffect; // @dynamic hasTextEffect;
@property(nonatomic) _Bool hasToUser; // @dynamic hasToUser;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) long long incomeTaskgifts; // @dynamic incomeTaskgifts;
@property(copy, nonatomic) NSString *logId; // @dynamic logId;
@property(retain, nonatomic) HTSLiveGiftIMPriority *priority; // @dynamic priority;
@property(nonatomic) long long repeatCount; // @dynamic repeatCount;
@property(nonatomic) int repeatEnd; // @dynamic repeatEnd;
@property(nonatomic) long long roomFanTicketCount; // @dynamic roomFanTicketCount;
@property(nonatomic) long long sendType; // @dynamic sendType;
@property(retain, nonatomic) HTSLiveGiftMessage_TextEffect *textEffect; // @dynamic textEffect;
@property(retain, nonatomic) HTSLiveUser *toUser; // @dynamic toUser;
@property(retain, nonatomic) HTSLiveUser *user; // @dynamic user;

@end


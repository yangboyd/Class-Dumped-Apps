//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class LotteryPrize, NSMutableArray, NSString;

@interface LotteryInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long anchorId; // @dynamic anchorId;
@property(nonatomic) long long candidateNum; // @dynamic candidateNum;
@property(retain, nonatomic) NSMutableArray *conditionsArray; // @dynamic conditionsArray;
@property(readonly, nonatomic) unsigned long long conditionsArray_Count; // @dynamic conditionsArray_Count;
@property(nonatomic) long long countDown; // @dynamic countDown;
@property(nonatomic) long long currentTime; // @dynamic currentTime;
@property(nonatomic) long long drawTime; // @dynamic drawTime;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) _Bool hasPrizeInfo; // @dynamic hasPrizeInfo;
@property(nonatomic) long long lotteryId; // @dynamic lotteryId;
@property(copy, nonatomic) NSString *lotteryIdStr; // @dynamic lotteryIdStr;
@property(nonatomic) long long luckyCount; // @dynamic luckyCount;
@property(retain, nonatomic) NSMutableArray *luckyUsersArray; // @dynamic luckyUsersArray;
@property(readonly, nonatomic) unsigned long long luckyUsersArray_Count; // @dynamic luckyUsersArray_Count;
@property(nonatomic) int ownerType; // @dynamic ownerType;
@property(nonatomic) long long ownerUserId; // @dynamic ownerUserId;
@property(nonatomic) long long prizeCount; // @dynamic prizeCount;
@property(retain, nonatomic) LotteryPrize *prizeInfo; // @dynamic prizeInfo;
@property(nonatomic) long long realDrawTime; // @dynamic realDrawTime;
@property(nonatomic) long long realLuckyCount; // @dynamic realLuckyCount;
@property(nonatomic) long long roomId; // @dynamic roomId;
@property(copy, nonatomic) NSString *roomIdStr; // @dynamic roomIdStr;
@property(nonatomic) long long startTime; // @dynamic startTime;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) long long totalGrantCount; // @dynamic totalGrantCount;
@property(nonatomic) long long withdrawCount; // @dynamic withdrawCount;

@end


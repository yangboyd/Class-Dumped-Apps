//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SQPBCashMarketpricesServiceGetMarketHistoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long endTime; // @dynamic endTime;
@property(nonatomic) _Bool hasEndTime; // @dynamic hasEndTime;
@property(nonatomic) _Bool hasPeriod; // @dynamic hasPeriod;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(retain, nonatomic) NSMutableArray *investmentEntityTokensArray; // @dynamic investmentEntityTokensArray;
@property(readonly, nonatomic) unsigned long long investmentEntityTokensArray_Count; // @dynamic investmentEntityTokensArray_Count;
@property(nonatomic) int period; // @dynamic period;
@property(nonatomic) long long startTime; // @dynamic startTime;

@end


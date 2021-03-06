//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SQPBCashMarketpricesServiceGetInvestmentEntityHistoricalDataResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int baseCurrencyCode; // @dynamic baseCurrencyCode;
@property(nonatomic) long long endTime; // @dynamic endTime;
@property(nonatomic) _Bool hasBaseCurrencyCode; // @dynamic hasBaseCurrencyCode;
@property(nonatomic) _Bool hasEndTime; // @dynamic hasEndTime;
@property(nonatomic) _Bool hasPriorTradingDayPriceCents; // @dynamic hasPriorTradingDayPriceCents;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool hasTickFrequencyMs; // @dynamic hasTickFrequencyMs;
@property(retain, nonatomic) NSMutableArray *priceTicksArray; // @dynamic priceTicksArray;
@property(readonly, nonatomic) unsigned long long priceTicksArray_Count; // @dynamic priceTicksArray_Count;
@property(nonatomic) long long priorTradingDayPriceCents; // @dynamic priorTradingDayPriceCents;
@property(nonatomic) long long startTime; // @dynamic startTime;
@property(nonatomic) long long tickFrequencyMs; // @dynamic tickFrequencyMs;

@end


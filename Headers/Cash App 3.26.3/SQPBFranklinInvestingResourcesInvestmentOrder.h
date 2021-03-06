//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCommonMoney, SQPBFranklinInvestingResourcesCustomOrder, SQPBFranklinInvestingResourcesIncentiveData, SQPBFranklinInvestingResourcesOrderCancelationReason, SQPBFranklinInvestingResourcesOrderRejectionReason, SQPBFranklinInvestingResourcesPatternDayTradeData;

@interface SQPBFranklinInvestingResourcesInvestmentOrder : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinInvestingResourcesOrderCancelationReason *cancelationReason; // @dynamic cancelationReason;
@property(retain, nonatomic) SQPBFranklinInvestingResourcesCustomOrder *customOrder; // @dynamic customOrder;
@property(retain, nonatomic) SQPBCommonMoney *estimatedAmount; // @dynamic estimatedAmount;
@property(copy, nonatomic) NSString *estimatedExecutionTime; // @dynamic estimatedExecutionTime;
@property(copy, nonatomic) NSString *estimatedShareAmount; // @dynamic estimatedShareAmount;
@property(retain, nonatomic) SQPBCommonMoney *estimatedSharePrice; // @dynamic estimatedSharePrice;
@property(nonatomic) unsigned long long expirationEpochMs; // @dynamic expirationEpochMs;
@property(retain, nonatomic) SQPBCommonMoney *fee; // @dynamic fee;
@property(retain, nonatomic) SQPBCommonMoney *finalAmount; // @dynamic finalAmount;
@property(nonatomic) _Bool hasCancelationReason; // @dynamic hasCancelationReason;
@property(nonatomic) _Bool hasCustomOrder; // @dynamic hasCustomOrder;
@property(nonatomic) _Bool hasEstimatedAmount; // @dynamic hasEstimatedAmount;
@property(nonatomic) _Bool hasEstimatedExecutionTime; // @dynamic hasEstimatedExecutionTime;
@property(nonatomic) _Bool hasEstimatedShareAmount; // @dynamic hasEstimatedShareAmount;
@property(nonatomic) _Bool hasEstimatedSharePrice; // @dynamic hasEstimatedSharePrice;
@property(nonatomic) _Bool hasExpirationEpochMs; // @dynamic hasExpirationEpochMs;
@property(nonatomic) _Bool hasFee; // @dynamic hasFee;
@property(nonatomic) _Bool hasFinalAmount; // @dynamic hasFinalAmount;
@property(nonatomic) _Bool hasIncentiveData; // @dynamic hasIncentiveData;
@property(nonatomic) _Bool hasInstrumentToken; // @dynamic hasInstrumentToken;
@property(nonatomic) _Bool hasInvestmentEntityToken; // @dynamic hasInvestmentEntityToken;
@property(nonatomic) _Bool hasIsFirstMarketWhenTouchedOrder; // @dynamic hasIsFirstMarketWhenTouchedOrder;
@property(nonatomic) _Bool hasOrderSide; // @dynamic hasOrderSide;
@property(nonatomic) _Bool hasOrderToken; // @dynamic hasOrderToken;
@property(nonatomic) _Bool hasOrderType; // @dynamic hasOrderType;
@property(nonatomic) _Bool hasPatternDayTradeData; // @dynamic hasPatternDayTradeData;
@property(nonatomic) _Bool hasQuoteToken; // @dynamic hasQuoteToken;
@property(nonatomic) _Bool hasRejectionReason; // @dynamic hasRejectionReason;
@property(nonatomic) _Bool hasSettlementTime; // @dynamic hasSettlementTime;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasSymbol; // @dynamic hasSymbol;
@property(nonatomic) _Bool hasSymbolDisplayName; // @dynamic hasSymbolDisplayName;
@property(nonatomic) _Bool hasTimeZone; // @dynamic hasTimeZone;
@property(retain, nonatomic) SQPBFranklinInvestingResourcesIncentiveData *incentiveData; // @dynamic incentiveData;
@property(copy, nonatomic) NSString *instrumentToken; // @dynamic instrumentToken;
@property(copy, nonatomic) NSString *investmentEntityToken; // @dynamic investmentEntityToken;
@property(nonatomic) _Bool isFirstMarketWhenTouchedOrder; // @dynamic isFirstMarketWhenTouchedOrder;
@property(nonatomic) int orderSide; // @dynamic orderSide;
@property(copy, nonatomic) NSString *orderToken; // @dynamic orderToken;
@property(nonatomic) int orderType; // @dynamic orderType;
@property(retain, nonatomic) SQPBFranklinInvestingResourcesPatternDayTradeData *patternDayTradeData; // @dynamic patternDayTradeData;
@property(copy, nonatomic) NSString *quoteToken; // @dynamic quoteToken;
@property(retain, nonatomic) SQPBFranklinInvestingResourcesOrderRejectionReason *rejectionReason; // @dynamic rejectionReason;
@property(copy, nonatomic) NSString *settlementTime; // @dynamic settlementTime;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *symbol; // @dynamic symbol;
@property(copy, nonatomic) NSString *symbolDisplayName; // @dynamic symbolDisplayName;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCommonMoney, SQPBFranklinCommonRequestContext;

@interface SQPBFranklinLendingInitiateLoanPaymentRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIdempotenceToken; // @dynamic hasIdempotenceToken;
@property(nonatomic) _Bool hasLastKnownBalance; // @dynamic hasLastKnownBalance;
@property(nonatomic) _Bool hasLoanToken; // @dynamic hasLoanToken;
@property(nonatomic) _Bool hasLoanTransactionToken; // @dynamic hasLoanTransactionToken;
@property(nonatomic) _Bool hasPaymentAmount; // @dynamic hasPaymentAmount;
@property(nonatomic) _Bool hasRequestContext; // @dynamic hasRequestContext;
@property(copy, nonatomic) NSString *idempotenceToken; // @dynamic idempotenceToken;
@property(retain, nonatomic) SQPBCommonMoney *lastKnownBalance; // @dynamic lastKnownBalance;
@property(copy, nonatomic) NSString *loanToken; // @dynamic loanToken;
@property(copy, nonatomic) NSString *loanTransactionToken; // @dynamic loanTransactionToken;
@property(retain, nonatomic) SQPBCommonMoney *paymentAmount; // @dynamic paymentAmount;
@property(retain, nonatomic) SQPBFranklinCommonRequestContext *requestContext; // @dynamic requestContext;

@end


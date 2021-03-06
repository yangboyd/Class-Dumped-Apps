//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBFranklinApiCashCustomer, SQPBFranklinApiPayment;

@interface SQPBFranklinApiWebhookRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinApiCashCustomer *customer; // @dynamic customer;
@property(copy, nonatomic) NSString *customerId; // @dynamic customerId;
@property(nonatomic) _Bool hasCustomer; // @dynamic hasCustomer;
@property(nonatomic) _Bool hasCustomerId; // @dynamic hasCustomerId;
@property(nonatomic) _Bool hasPayment; // @dynamic hasPayment;
@property(nonatomic) _Bool hasPaymentId; // @dynamic hasPaymentId;
@property(nonatomic) _Bool hasRecipient; // @dynamic hasRecipient;
@property(nonatomic) _Bool hasSender; // @dynamic hasSender;
@property(retain, nonatomic) SQPBFranklinApiPayment *payment; // @dynamic payment;
@property(copy, nonatomic) NSString *paymentId; // @dynamic paymentId;
@property(retain, nonatomic) SQPBFranklinApiCashCustomer *recipient; // @dynamic recipient;
@property(retain, nonatomic) SQPBFranklinApiCashCustomer *sender; // @dynamic sender;

@end


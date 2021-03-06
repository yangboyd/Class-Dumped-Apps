//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SQPBFranklinCommonResponseContext, SQPBFranklinUiUiPayment;

@interface SQPBFranklinAppGetPaymentResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPayment; // @dynamic hasPayment;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) NSMutableArray *instrumentsArray; // @dynamic instrumentsArray;
@property(readonly, nonatomic) unsigned long long instrumentsArray_Count; // @dynamic instrumentsArray_Count;
@property(retain, nonatomic) SQPBFranklinUiUiPayment *payment; // @dynamic payment;
@property(retain, nonatomic) NSMutableArray *pendingInstrumentsArray; // @dynamic pendingInstrumentsArray;
@property(readonly, nonatomic) unsigned long long pendingInstrumentsArray_Count; // @dynamic pendingInstrumentsArray_Count;
@property(retain, nonatomic) SQPBFranklinCommonResponseContext *responseContext; // @dynamic responseContext;

@end


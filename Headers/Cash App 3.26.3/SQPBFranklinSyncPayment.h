//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SQPBFranklinPaymentConversationData, SQPBFranklinUiUiPayment;

@interface SQPBFranklinSyncPayment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinPaymentConversationData *conversation; // @dynamic conversation;
@property(nonatomic) _Bool hasConversation; // @dynamic hasConversation;
@property(nonatomic) _Bool hasIsBadged; // @dynamic hasIsBadged;
@property(nonatomic) _Bool hasPayment; // @dynamic hasPayment;
@property(nonatomic) _Bool isBadged; // @dynamic isBadged;
@property(retain, nonatomic) SQPBFranklinUiUiPayment *payment; // @dynamic payment;

@end


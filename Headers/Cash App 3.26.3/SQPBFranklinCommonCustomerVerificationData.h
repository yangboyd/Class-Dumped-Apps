//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBFranklinCommonKeyedCard;

@interface SQPBFranklinCommonCustomerVerificationData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinCommonKeyedCard *card; // @dynamic card;
@property(nonatomic) _Bool hasCard; // @dynamic hasCard;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end


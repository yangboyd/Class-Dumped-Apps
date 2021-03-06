//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SQPBCommonMoney, SQPBFranklinCommonRequestContext;

@interface SQPBFranklinAppCreateRedPocketEnvelopeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBCommonMoney *amount; // @dynamic amount;
@property(copy, nonatomic) NSString *externalId; // @dynamic externalId;
@property(nonatomic) _Bool hasAmount; // @dynamic hasAmount;
@property(nonatomic) _Bool hasExternalId; // @dynamic hasExternalId;
@property(nonatomic) _Bool hasNote; // @dynamic hasNote;
@property(nonatomic) _Bool hasPackets; // @dynamic hasPackets;
@property(nonatomic) _Bool hasRequestContext; // @dynamic hasRequestContext;
@property(copy, nonatomic) NSString *note; // @dynamic note;
@property(nonatomic) int packets; // @dynamic packets;
@property(retain, nonatomic) NSMutableArray *recipientsArray; // @dynamic recipientsArray;
@property(readonly, nonatomic) unsigned long long recipientsArray_Count; // @dynamic recipientsArray_Count;
@property(retain, nonatomic) SQPBFranklinCommonRequestContext *requestContext; // @dynamic requestContext;

@end


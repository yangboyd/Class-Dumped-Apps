//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCommonMoney, SQPBFranklinApiInstrument;

@interface SQPBFranklinApiStatementTransaction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBCommonMoney *amount; // @dynamic amount;
@property(retain, nonatomic) SQPBCommonMoney *balance; // @dynamic balance;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *displayPhotoURL; // @dynamic displayPhotoURL;
@property(retain, nonatomic) SQPBCommonMoney *fee; // @dynamic fee;
@property(nonatomic) _Bool hasAmount; // @dynamic hasAmount;
@property(nonatomic) _Bool hasBalance; // @dynamic hasBalance;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasDisplayPhotoURL; // @dynamic hasDisplayPhotoURL;
@property(nonatomic) _Bool hasFee; // @dynamic hasFee;
@property(nonatomic) _Bool hasInitiatedAt; // @dynamic hasInitiatedAt;
@property(nonatomic) _Bool hasInstrument; // @dynamic hasInstrument;
@property(nonatomic) _Bool hasOtherCustomerToken; // @dynamic hasOtherCustomerToken;
@property(nonatomic) _Bool hasPending; // @dynamic hasPending;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) long long initiatedAt; // @dynamic initiatedAt;
@property(retain, nonatomic) SQPBFranklinApiInstrument *instrument; // @dynamic instrument;
@property(copy, nonatomic) NSString *otherCustomerToken; // @dynamic otherCustomerToken;
@property(nonatomic) _Bool pending; // @dynamic pending;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) int type; // @dynamic type;

@end


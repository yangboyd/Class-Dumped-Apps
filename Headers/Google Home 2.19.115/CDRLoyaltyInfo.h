//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRLoyaltyExtension, NSString;

@interface CDRLoyaltyInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cardNumber; // @dynamic cardNumber;
@property(copy, nonatomic) NSString *firstName; // @dynamic firstName;
@property(nonatomic) _Bool hasCardNumber; // @dynamic hasCardNumber;
@property(nonatomic) _Bool hasFirstName; // @dynamic hasFirstName;
@property(nonatomic) _Bool hasLastName; // @dynamic hasLastName;
@property(nonatomic) _Bool hasLoyaltyExtension; // @dynamic hasLoyaltyExtension;
@property(nonatomic) _Bool hasMerchantId; // @dynamic hasMerchantId;
@property(nonatomic) _Bool hasMerchantName; // @dynamic hasMerchantName;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasProgramId; // @dynamic hasProgramId;
@property(copy, nonatomic) NSString *lastName; // @dynamic lastName;
@property(retain, nonatomic) CDRLoyaltyExtension *loyaltyExtension; // @dynamic loyaltyExtension;
@property(copy, nonatomic) NSString *merchantId; // @dynamic merchantId;
@property(copy, nonatomic) NSString *merchantName; // @dynamic merchantName;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *programId; // @dynamic programId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBFranklinUiInvestmentEntityData, SQPBFranklinUiMerchantData, SQPBFranklinUiUiCheckAddress;

@interface SQPBFranklinUiUiCustomer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accentColor; // @dynamic accentColor;
@property(nonatomic) int blockState; // @dynamic blockState;
@property(nonatomic) _Bool canAcceptPayments; // @dynamic canAcceptPayments;
@property(copy, nonatomic) NSString *cashtag; // @dynamic cashtag;
@property(retain, nonatomic) SQPBFranklinUiUiCheckAddress *checkAddress; // @dynamic checkAddress;
@property(nonatomic) int countryCode; // @dynamic countryCode;
@property(nonatomic) long long creditCardFeeBps; // @dynamic creditCardFeeBps;
@property(nonatomic) long long customerJoinedOn; // @dynamic customerJoinedOn;
@property(copy, nonatomic) NSString *emailAddress; // @dynamic emailAddress;
@property(copy, nonatomic) NSString *fullName; // @dynamic fullName;
@property(nonatomic) _Bool hasAccentColor; // @dynamic hasAccentColor;
@property(nonatomic) _Bool hasBlockState; // @dynamic hasBlockState;
@property(nonatomic) _Bool hasCanAcceptPayments; // @dynamic hasCanAcceptPayments;
@property(nonatomic) _Bool hasCashtag; // @dynamic hasCashtag;
@property(nonatomic) _Bool hasCheckAddress; // @dynamic hasCheckAddress;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasCreditCardFeeBps; // @dynamic hasCreditCardFeeBps;
@property(nonatomic) _Bool hasCustomerJoinedOn; // @dynamic hasCustomerJoinedOn;
@property(nonatomic) _Bool hasEmailAddress; // @dynamic hasEmailAddress;
@property(nonatomic) _Bool hasFullName; // @dynamic hasFullName;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasInvestmentEntityData; // @dynamic hasInvestmentEntityData;
@property(nonatomic) _Bool hasIsBusiness; // @dynamic hasIsBusiness;
@property(nonatomic) _Bool hasIsCashCustomer; // @dynamic hasIsCashCustomer;
@property(nonatomic) _Bool hasIsNearby; // @dynamic hasIsNearby;
@property(nonatomic) _Bool hasIsSquare; // @dynamic hasIsSquare;
@property(nonatomic) _Bool hasIsVerifiedAccount; // @dynamic hasIsVerifiedAccount;
@property(nonatomic) _Bool hasMerchantData; // @dynamic hasMerchantData;
@property(nonatomic) _Bool hasPhotoURL; // @dynamic hasPhotoURL;
@property(nonatomic) _Bool hasRegion; // @dynamic hasRegion;
@property(nonatomic) _Bool hasRenderData; // @dynamic hasRenderData;
@property(nonatomic) _Bool hasSelectionMethod; // @dynamic hasSelectionMethod;
@property(nonatomic) _Bool hasSmsNumber; // @dynamic hasSmsNumber;
@property(nonatomic) _Bool hasThreadedCustomerId; // @dynamic hasThreadedCustomerId;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SQPBFranklinUiInvestmentEntityData *investmentEntityData; // @dynamic investmentEntityData;
@property(nonatomic) _Bool isBusiness; // @dynamic isBusiness;
@property(nonatomic) _Bool isCashCustomer; // @dynamic isCashCustomer;
@property(nonatomic) _Bool isNearby; // @dynamic isNearby;
@property(nonatomic) _Bool isSquare; // @dynamic isSquare;
@property(nonatomic) _Bool isVerifiedAccount; // @dynamic isVerifiedAccount;
@property(retain, nonatomic) SQPBFranklinUiMerchantData *merchantData; // @dynamic merchantData;
@property(copy, nonatomic) NSString *photoURL; // @dynamic photoURL;
@property(nonatomic) int region; // @dynamic region;
@property(copy, nonatomic) NSString *renderData; // @dynamic renderData;
@property(nonatomic) int selectionMethod; // @dynamic selectionMethod;
@property(copy, nonatomic) NSString *smsNumber; // @dynamic smsNumber;
@property(copy, nonatomic) NSString *threadedCustomerId; // @dynamic threadedCustomerId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCommerceOrder-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCommerceCheckoutShippingOption, SOJUCommerceContactDetails, SOJUCommerceCurrencyAmount, SOJUCommerceDiscountInfo, SOJUCommerceShippingAddress, SOJUCommerceStoreInfo;

@interface SOJUCommerceOrder : NSObject <SOJUCommerceOrder>
{
    NSString *_accountId;
    NSString *_accountType;
    NSString *_orderId;
    NSString *_externalOrderId;
    NSNumber *_createdAt;
    NSNumber *_updatedAt;
    NSArray *_billingItems;
    NSNumber *_chargeTime;
    NSString *_billingState;
    SOJUCommerceShippingAddress *_shippingAddress;
    SOJUCommerceCheckoutShippingOption *_shippingInfo;
    SOJUCommerceCurrencyAmount *_subtotalPrice;
    SOJUCommerceCurrencyAmount *_totalTax;
    SOJUCommerceCurrencyAmount *_totalPrice;
    NSArray *_paymentMethods;
    NSString *_storeId;
    NSString *_partner;
    SOJUCommerceStoreInfo *_storeInfo;
    NSString *_externalOrderName;
    NSString *_discountCode;
    SOJUCommerceDiscountInfo *_discountInfo;
    SOJUCommerceContactDetails *_contactDetails;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUCommerceContactDetails *contactDetails; // @synthesize contactDetails=_contactDetails;
@property(readonly, copy, nonatomic) SOJUCommerceDiscountInfo *discountInfo; // @synthesize discountInfo=_discountInfo;
@property(readonly, copy, nonatomic) NSString *discountCode; // @synthesize discountCode=_discountCode;
@property(readonly, copy, nonatomic) NSString *externalOrderName; // @synthesize externalOrderName=_externalOrderName;
@property(readonly, copy, nonatomic) SOJUCommerceStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(readonly, copy, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(readonly, copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(readonly, copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *totalTax; // @synthesize totalTax=_totalTax;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *subtotalPrice; // @synthesize subtotalPrice=_subtotalPrice;
@property(readonly, copy, nonatomic) SOJUCommerceCheckoutShippingOption *shippingInfo; // @synthesize shippingInfo=_shippingInfo;
@property(readonly, copy, nonatomic) SOJUCommerceShippingAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(readonly, copy, nonatomic) NSString *billingState; // @synthesize billingState=_billingState;
@property(readonly, copy, nonatomic) NSNumber *chargeTime; // @synthesize chargeTime=_chargeTime;
@property(readonly, copy, nonatomic) NSArray *billingItems; // @synthesize billingItems=_billingItems;
@property(readonly, copy, nonatomic) NSNumber *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, copy, nonatomic) NSNumber *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *externalOrderId; // @synthesize externalOrderId=_externalOrderId;
@property(readonly, copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(readonly, copy, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(readonly, copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccountId:(id)arg1 accountType:(id)arg2 orderId:(id)arg3 externalOrderId:(id)arg4 createdAt:(id)arg5 updatedAt:(id)arg6 billingItems:(id)arg7 chargeTime:(id)arg8 billingState:(id)arg9 shippingAddress:(id)arg10 shippingInfo:(id)arg11 subtotalPrice:(id)arg12 totalTax:(id)arg13 totalPrice:(id)arg14 paymentMethods:(id)arg15 storeId:(id)arg16 partner:(id)arg17 storeInfo:(id)arg18 externalOrderName:(id)arg19 discountCode:(id)arg20 discountInfo:(id)arg21 contactDetails:(id)arg22;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)chargeTimeValue;
- (long long)updatedAtValue;
- (long long)createdAtValue;
- (long long)accountTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


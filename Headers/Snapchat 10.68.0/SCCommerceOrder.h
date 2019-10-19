//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString, SCPaymentsShippingAddress, SOJUCommerceCheckoutShippingOption, SOJUCommerceContactDetails, SOJUCommerceCurrencyAmount, SOJUCommerceStoreInfo;

@interface SCCommerceOrder : NSObject
{
    NSString *_accountId;
    NSString *_accountType;
    NSString *_orderId;
    NSString *_externalOrderId;
    NSNumber *_createdAt;
    NSDate *_createdAtDate;
    NSNumber *_updatedAt;
    NSArray *_billingItems;
    NSNumber *_chargeTime;
    NSString *_billingState;
    SCPaymentsShippingAddress *_shippingAddress;
    SOJUCommerceCheckoutShippingOption *_shippingInfo;
    SOJUCommerceCurrencyAmount *_subtotalPrice;
    SOJUCommerceCurrencyAmount *_discountPrice;
    SOJUCommerceCurrencyAmount *_totalTax;
    SOJUCommerceCurrencyAmount *_totalPrice;
    NSArray *_paymentMethods;
    NSString *_merchantEmail;
    NSString *_storeId;
    NSString *_partner;
    SOJUCommerceStoreInfo *_storeInfo;
    SOJUCommerceContactDetails *_contactDetails;
    NSString *_externalOrderName;
}

+ (id)convertToCommerceOrder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *externalOrderName; // @synthesize externalOrderName=_externalOrderName;
@property(readonly, copy, nonatomic) SOJUCommerceContactDetails *contactDetails; // @synthesize contactDetails=_contactDetails;
@property(readonly, copy, nonatomic) SOJUCommerceStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(readonly, copy, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(readonly, copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(readonly, copy, nonatomic) NSString *merchantEmail; // @synthesize merchantEmail=_merchantEmail;
@property(readonly, copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *totalTax; // @synthesize totalTax=_totalTax;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *subtotalPrice; // @synthesize subtotalPrice=_subtotalPrice;
@property(readonly, copy, nonatomic) SOJUCommerceCheckoutShippingOption *shippingInfo; // @synthesize shippingInfo=_shippingInfo;
@property(readonly, copy, nonatomic) SCPaymentsShippingAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(readonly, copy, nonatomic) NSString *billingState; // @synthesize billingState=_billingState;
@property(readonly, copy, nonatomic) NSNumber *chargeTime; // @synthesize chargeTime=_chargeTime;
@property(readonly, copy, nonatomic) NSArray *billingItems; // @synthesize billingItems=_billingItems;
@property(readonly, copy, nonatomic) NSNumber *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, copy, nonatomic) NSDate *createdAtDate; // @synthesize createdAtDate=_createdAtDate;
@property(readonly, copy, nonatomic) NSNumber *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *externalOrderId; // @synthesize externalOrderId=_externalOrderId;
@property(readonly, copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(readonly, copy, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(readonly, copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (_Bool)_validateSojuModel:(id)arg1;
- (id)initWithSOJUModel:(id)arg1;
- (id)initWithAccountId:(id)arg1 accountType:(id)arg2 orderId:(id)arg3 externalOrderId:(id)arg4 createdAt:(id)arg5 updatedAt:(id)arg6 billingItems:(id)arg7 chargeTime:(id)arg8 billingState:(id)arg9 shippingAddress:(id)arg10 shippingInfo:(id)arg11 subtotalPrice:(id)arg12 discountPrice:(id)arg13 totalTax:(id)arg14 totalPrice:(id)arg15 paymentMethods:(id)arg16 merchantEmail:(id)arg17 storeId:(id)arg18 partner:(id)arg19 storeInfo:(id)arg20 contactDetails:(id)arg21 externalOrderName:(id)arg22;

@end


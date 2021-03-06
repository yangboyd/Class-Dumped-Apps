//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDModelObject.h>

@class NSDate, NSNumber, NSString;

@interface WMPharmacyOrder : SDModelObject
{
    NSString *_orderId;
    unsigned long long _status;
    unsigned long long _checkoutType;
    NSDate *_orderDate;
    NSString *_orderType;
    NSNumber *_multiplePrescription;
    NSNumber *_connectEligible;
    NSNumber *_checkoutTypeEligible;
    NSNumber *_curbsideEligible;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *curbsideEligible; // @synthesize curbsideEligible=_curbsideEligible;
@property(copy, nonatomic) NSNumber *checkoutTypeEligible; // @synthesize checkoutTypeEligible=_checkoutTypeEligible;
@property(copy, nonatomic) NSNumber *connectEligible; // @synthesize connectEligible=_connectEligible;
@property(copy, nonatomic) NSNumber *multiplePrescription; // @synthesize multiplePrescription=_multiplePrescription;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(copy, nonatomic) NSDate *orderDate; // @synthesize orderDate=_orderDate;
@property(nonatomic) unsigned long long checkoutType; // @synthesize checkoutType=_checkoutType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void)mapDispenseType:(id)arg1;
- (void)p_setOrderDateWithString:(id)arg1;
- (void)mapStatus:(id)arg1;
- (_Bool)isCurbsideEligible;
- (_Bool)isCheckoutTypeEligible;
- (_Bool)isConnectEligible;
- (_Bool)hasMultiplePrescriptions;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end


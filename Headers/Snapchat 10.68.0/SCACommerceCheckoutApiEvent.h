//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCACommerceApiEventBase.h"

@interface SCACommerceCheckoutApiEvent : SCACommerceApiEventBase
{
}

- (void)setTotal:(double)arg1;
- (void)setTax:(double)arg1;
- (void)setSubTotal:(double)arg1;
- (void)setShippingMethodId:(id)arg1;
- (void)setShippingAmount:(double)arg1;
- (void)setHasValidShippingAddress:(_Bool)arg1;
- (void)setHasValidPaymentMethod:(_Bool)arg1;
- (void)setHasValidContactInfo:(_Bool)arg1;
- (void)setDiscount:(double)arg1;
- (void)setCurrencyType:(long long)arg1;
- (void)setCartItems:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end


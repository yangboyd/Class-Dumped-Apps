//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC18ElectrodeContainer17WalmartPaymentAPI;

@interface WalmartPaymentAPIImpl : NSObject
{
    _TtC18ElectrodeContainer17WalmartPaymentAPI *_paymentAPI;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC18ElectrodeContainer17WalmartPaymentAPI *paymentAPI; // @synthesize paymentAPI=_paymentAPI;
- (id)createPaymentOptionsWithDescription:(id)arg1 currencyCode:(id)arg2 total:(id)arg3 subtotal:(id)arg4 tax:(id)arg5 shippingHandling:(id)arg6;
- (long long)convertStringToEnum:(id)arg1;
- (void)startCheckout;
- (id)init;

@end


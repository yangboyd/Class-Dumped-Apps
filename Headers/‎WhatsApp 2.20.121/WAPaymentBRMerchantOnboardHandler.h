//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s8Payments18PaymentBaseHandlerCN.h"

@protocol WAPaymentBaseHandlerDelegate;

@interface WAPaymentBRMerchantOnboardHandler : _$s8Payments18PaymentBaseHandlerCN
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isUserInitiated
    // Error parsing type: , name: currentHandler
    // Error parsing type: , name: currentVC
    // Error parsing type: , name: paymentMerchantManager
    // Error parsing type: , name: taxID
    // Error parsing type: , name: currentErrorHandler
    // Error parsing type: , name: hasExistingAccount
}

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)arg1 paymentMerchantManager:(id)arg2 rootHandlerDelegate:(id)arg3;
@property(nonatomic) __weak id <WAPaymentBaseHandlerDelegate> delegate; // @synthesize delegate;

@end


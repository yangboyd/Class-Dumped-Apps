//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentBaseHandler.h>

@protocol WAPaymentRegistrationHandlerDelegate;

@interface WAPaymentMXRegistrationHandler : WAPaymentBaseHandler
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: currentHandler
    // Error parsing type: , name: paymentManager
    // Error parsing type: , name: paymentSettingsData
    // Error parsing type: , name: pinHandler
    // Error parsing type: , name: isUserInitiated
    // Error parsing type: , name: verificationNeeded
    // Error parsing type: , name: transactionContext
    // Error parsing type: , name: fieldStatsManager
}

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)arg1 paymentManager:(id)arg2 paymentSettingsData:(id)arg3 transactionContext:(long long)arg4 verificationNeeded:(_Bool)arg5 rootHandlerDelegate:(id)arg6;
@property(nonatomic) __weak id <WAPaymentRegistrationHandlerDelegate> delegate; // @synthesize delegate;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentBaseHandler.h>

@interface _TtC8Payments19PaymentMX3DSHandler : WAPaymentBaseHandler
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: paymentManager
    // Error parsing type: , name: account
    // Error parsing type: , name: threeDSWebVC
    // Error parsing type: , name: timer
    // Error parsing type: , name: threeDSNotificationTimeout
    // Error parsing type: , name: targetURL
    // Error parsing type: , name: canSkip
    // Error parsing type: , name: fieldStatsManager
}

- (void).cxx_destruct;
- (void)threeDSNotificationDidTimeout;
- (void)process3DSNotification:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentBRRegistrationHandler.h>

@interface WAPaymentBRRegistrationHandler (Payments)
- (void)handler:(id)arg1 didFailWithError:(id)arg2;
- (void)handler:(id)arg1 didFailWithUserAction:(long long)arg2;
- (void)handlerDidSucceed:(id)arg1;
- (void)verificationHandler:(id)arg1 didDeleteAccountFor:(id)arg2;
- (void)verificationHandler:(id)arg1 didRemove:(id)arg2;
- (void)verificationHandler:(id)arg1 didSkipVerificationForAccount:(id)arg2;
- (void)verificationHandler:(id)arg1 didCompleteVerificationForAccount:(id)arg2;
@end


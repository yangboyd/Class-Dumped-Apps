//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/_TtC8Payments30PaymentTransactionStartHandler.h>

@interface _TtC8Payments30PaymentTransactionStartHandler (Payments)
- (void)handler:(id)arg1 didFailWithError:(id)arg2;
- (void)handler:(id)arg1 didFailWithUserAction:(long long)arg2;
- (void)handlerDidSucceed:(id)arg1;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelect:(id)arg2;
- (void)paymentSendViewController:(id)arg1 didRequestChooseAccountWithConfiguration:(id)arg2;
- (void)paymentSendViewController:(id)arg1 didRequestChoosePayeeWithConfiguration:(id)arg2;
- (void)paymentSendViewControllerDidCancel:(id)arg1;
- (void)paymentSendViewController:(id)arg1 didConfirmPaymentConfiguration:(id)arg2;
- (void)updateReceiver:(id)arg1;
@end


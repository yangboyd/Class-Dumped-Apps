//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBPayTableViewModel.h>

@class FBPayContext, FBPayPaymentMethodViewModel;

@interface FBPayManagePayPalTableViewModel : FBPayTableViewModel
{
    FBPayPaymentMethodViewModel *_paypalViewModel;
    FBPayContext *_fbpayContext;
}

- (void).cxx_destruct;
- (void)_logEventWithName:(long long)arg1 paymentMethodId:(id)arg2;
- (void)_onError:(id)arg1;
- (void)_onSuccess;
- (void)_onDeletePayPal;
- (void)_logFlowstepWithEvent:(id)arg1 flowStep:(id)arg2;
- (void)fetchTableViewData;
- (id)initWithPayPalViewModel:(id)arg1 fbpayContext:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTYpcOffersListCellController.h"

#import "SKPaymentTransactionObserver-Protocol.h"
#import "YTStoreKitPurchaseControllerDelegate-Protocol.h"
#import "YTTransactionQueueControllerDelegate-Protocol.h"

@class NSString, YTMModalActivityIndicatorView;

@interface YTMYpcOffersListCellController : YTYpcOffersListCellController <SKPaymentTransactionObserver, YTTransactionQueueControllerDelegate, YTStoreKitPurchaseControllerDelegate>
{
    _Bool _isShowingActivityView;
    YTMModalActivityIndicatorView *_activityView;
}

- (void).cxx_destruct;
- (void)dismissActivityView;
- (void)showActivityView;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
@property(readonly, nonatomic) YTMModalActivityIndicatorView *activityView;
- (void)transactionQueueControllerHandleIapDidFailWithError:(id)arg1 forTransaction:(id)arg2;
- (void)transactionQueueControllerHandleIapDidSucceedForTransaction:(id)arg1;
- (void)storeKitPaymentFailed;
- (void)storeKitPaymentStarted;
- (void)storeKitProductsRequestStarted;
- (void)ypcGetOffersServiceSucceeded;
- (void)ypcGetOffersServiceFailed;
- (void)ypcInAppPurchasesEndpointStarted:(id)arg1 timeoutInterval:(double)arg2;
- (void)ypcGetOffersServiceStarted:(id)arg1 timeoutInterval:(double)arg2;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


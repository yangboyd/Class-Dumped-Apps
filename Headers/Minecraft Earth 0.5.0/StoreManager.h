//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"
#import "SKRequestDelegate.h"

@class NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString;

@interface StoreManager : NSObject <SKRequestDelegate, SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    struct StoreListener *mStoreListener;
    _Bool mTryRestore;
    _Bool mRefreshingReceipt;
    _Bool mQueryPurchasesAfterAppReceipt;
    NSMutableArray *mPendingRequestTransactions;
    NSMutableArray *mAvailableProducts;
    NSMutableDictionary *mTransactionMap;
    NSDateFormatter *mDateFormatter;
}

- (_Bool)approveAllPurchasesFromAppReceipt;
- (id)tryGetDecodedAppReceipt;
- (void)acknowledgePurchase:(const struct PurchaseInfo *)arg1;
- (void)completeTransaction:(id)arg1 forStatus:(long long)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
- (void)startRefreshReceiptRequest;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (struct PurchaseInfo)createPurchaseInfo:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)attemptToCompleteTransation:(id)arg1;
- (_Bool)isTransactionInReceipt:(id)arg1;
- (id)getProduct:(basic_string_90719d97)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)currencyCodeFromLocale:(id)arg1 withPrice:(id)arg2;
- (id)priceAsString:(id)arg1 withPrice:(id)arg2;
- (void)fetchProductInformationForIds:(id)arg1;
- (id)initWithStoreListener:(struct StoreListener *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


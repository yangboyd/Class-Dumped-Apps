//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBInAppPurchaseStoreObserverDelegate-Protocol.h>

@class FBInAppPurchaseCache, FBInAppPurchaseFunnelLoggerHelper, FBInAppPurchaseStoreObserver, NSString;
@protocol FBInAppPurchaseDelegate;

@interface FBInAppPurchasePaymentManager : NSObject <FBInAppPurchaseStoreObserverDelegate>
{
    FBInAppPurchaseStoreObserver *_storeObserver;
    id <FBInAppPurchaseDelegate> _delegate;
    FBInAppPurchaseFunnelLoggerHelper *_loggerHelper;
    FBInAppPurchaseCache *_inAppPurchaseCache;
}

- (void).cxx_destruct;
- (void)configureLoggerMetadataWithContainerModule:(id)arg1 mediaID:(id)arg2 productType:(id)arg3;
- (void)removeDataFromCacheForExternalProductID:(id)arg1;
- (void)finishTransactions:(id)arg1;
- (void)restoreCompletedTransactionsFailedWithError:(id)arg1;
- (void)restoredTransactions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deferredTransaction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)completedTransaction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)failedTransaction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unregisterTransactionObserver;
- (void)registerTransactionObserver;
- (id)initWithDelegate:(id)arg1 inAppPurchaseCache:(id)arg2 funnelLogger:(id)arg3 structuredLogger:(id)arg4 enableIAPDebugging:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


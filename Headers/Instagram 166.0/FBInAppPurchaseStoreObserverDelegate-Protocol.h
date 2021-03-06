//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSArray, NSError, NSNotification, NSString, SKPaymentTransaction;

@protocol FBInAppPurchaseStoreObserverDelegate <NSObject>
- (void)removeDataFromCacheForExternalProductID:(NSString *)arg1;
- (void)finishTransactions:(NSNotification *)arg1;
- (void)deferredTransaction:(SKPaymentTransaction *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)restoreCompletedTransactionsFailedWithError:(NSError *)arg1;
- (void)restoredTransactions:(NSArray *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)completedTransaction:(SKPaymentTransaction *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)failedTransaction:(SKPaymentTransaction *)arg1 completionBlock:(void (^)(NSError *))arg2;
@end


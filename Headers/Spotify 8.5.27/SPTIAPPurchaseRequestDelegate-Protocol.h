//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTIAPPurchaseRequest;

@protocol SPTIAPPurchaseRequestDelegate <NSObject>
- (void)purchaseRequest:(SPTIAPPurchaseRequest *)arg1 givingUpOnTransactionWithError:(NSError *)arg2;
- (void)purchaseRequest:(SPTIAPPurchaseRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)purchaseRequestDidFinish:(SPTIAPPurchaseRequest *)arg1;
- (void)purchaseRequestDidStartActivation:(SPTIAPPurchaseRequest *)arg1;
- (void)purchaseRequestDidResumeTransaction:(SPTIAPPurchaseRequest *)arg1;
- (void)purchaseRequestDidStartTransaction:(SPTIAPPurchaseRequest *)arg1;
@end


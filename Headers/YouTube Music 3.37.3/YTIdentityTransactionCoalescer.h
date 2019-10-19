//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableArray, YTIdentityStore, YTIdentityTransaction, YTIdentityTransactionFactory;

@interface YTIdentityTransactionCoalescer : NSObject
{
    YTIdentityTransactionFactory *_transactionFactory;
    YTIdentityStore *_store;
    NSMutableArray *_pendingIdentityRequests;
    YTIdentityTransaction *_currentTransaction;
    NSMutableArray *_onHoldIdentityRequests;
    YTIdentityTransaction *_onHoldTransaction;
    _Bool _isTransactionOnHold;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)storePendingRequestWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)restoreOnHoldTransaction;
- (void)placeCurrentTransactionOnHold;
- (_Bool)hasTransactionInFlight;
- (void)interruptCurrentTransaction;
- (void)finishWithCancellationForTransaction:(id)arg1;
- (void)finishWithError:(id)arg1 forTransaction:(id)arg2;
- (void)finishWithSuccessForTransaction:(id)arg1;
- (id)transactionForRequestWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end


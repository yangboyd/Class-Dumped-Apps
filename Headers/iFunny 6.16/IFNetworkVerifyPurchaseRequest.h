//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFNetworkBaseRequest.h>

@class NSString;

@interface IFNetworkVerifyPurchaseRequest : IFNetworkBaseRequest
{
    NSString *_receipt;
    NSString *_purchaseType;
    NSString *_purchaseItem;
    NSString *_transactionId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(copy, nonatomic) NSString *purchaseItem; // @synthesize purchaseItem=_purchaseItem;
@property(copy, nonatomic) NSString *purchaseType; // @synthesize purchaseType=_purchaseType;
@property(copy, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
- (id)parameters;
- (id)responseMapper;
- (Class)responseClass;
- (id)path;
- (long long)httpMethod;
- (id)initWithReceipt:(id)arg1 purchaseType:(id)arg2 purchaseItem:(id)arg3 transactionId:(id)arg4;

@end


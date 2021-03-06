//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface YTStoreKitReceiptInAppPurchase : NSObject
{
    long long _quantity;
    NSString *_productIdentifier;
    NSString *_transactionIdentifier;
    NSString *_originalTransactionIdentifier;
    NSDate *_purchaseDate;
    NSDate *_originalPurchaseDate;
    NSDate *_subscriptionExpirationDate;
    NSDate *_cancellationDate;
    long long _webOrderLineItemId;
}

- (void).cxx_destruct;
@property(nonatomic) long long webOrderLineItemId; // @synthesize webOrderLineItemId=_webOrderLineItemId;
@property(retain, nonatomic) NSDate *cancellationDate; // @synthesize cancellationDate=_cancellationDate;
@property(retain, nonatomic) NSDate *subscriptionExpirationDate; // @synthesize subscriptionExpirationDate=_subscriptionExpirationDate;
@property(retain, nonatomic) NSDate *originalPurchaseDate; // @synthesize originalPurchaseDate=_originalPurchaseDate;
@property(retain, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(retain, nonatomic) NSString *originalTransactionIdentifier; // @synthesize originalTransactionIdentifier=_originalTransactionIdentifier;
@property(retain, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
- (id)description;

@end


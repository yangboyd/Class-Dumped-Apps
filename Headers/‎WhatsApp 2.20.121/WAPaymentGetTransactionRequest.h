//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentRequest.h>

@class NSString;

@interface WAPaymentGetTransactionRequest : WAPaymentRequest
{
    NSString *_transactionId;
    NSString *_paymentVersion;
}

+ (id)identifierForTransactionId:(id)arg1 version:(id)arg2;
+ (long long)version;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *paymentVersion; // @synthesize paymentVersion=_paymentVersion;
@property(readonly, copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithTransactionId:(id)arg1 version:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


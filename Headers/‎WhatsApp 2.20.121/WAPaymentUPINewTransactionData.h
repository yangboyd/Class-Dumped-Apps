//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPaymentNewTransactionData.h>

@class NSString;

@interface WAPaymentUPINewTransactionData : WAPaymentNewTransactionData
{
    // Error parsing type: , name: encryptedPin
    // Error parsing type: , name: interopReferenceMessageId
}

- (void).cxx_destruct;
- (id)initWithLocalTransactionId:(id)arg1 credentialId:(id)arg2;
@property(nonatomic, readonly) _Bool validForSending;
- (id)initWithLocalTransactionId:(id)arg1 credentialId:(id)arg2 encryptedPin:(id)arg3 interopReferenceMessageId:(id)arg4;
@property(nonatomic, readonly) NSString *interopReferenceMessageId;
@property(nonatomic, readonly) NSString *encryptedPin;

@end


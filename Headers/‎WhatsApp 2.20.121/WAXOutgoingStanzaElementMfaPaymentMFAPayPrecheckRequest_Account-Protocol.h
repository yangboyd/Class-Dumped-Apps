//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol WAXOutgoingStanzaElementMfaPaymentMFAPayPrecheckRequest_Account_TrustToken, WAXOutgoingStanzaElementMfaPaymentMFAPayPrecheckRequest_Account_VerifyTrustToken;

@protocol WAXOutgoingStanzaElementMfaPaymentMFAPayPrecheckRequest_Account <NSObject>
@property(readonly, nonatomic) NSObject<WAXOutgoingStanzaElementMfaPaymentMFAPayPrecheckRequest_Account_TrustToken> *trust_token;
@property(readonly, nonatomic) NSObject<WAXOutgoingStanzaElementMfaPaymentMFAPayPrecheckRequest_Account_VerifyTrustToken> *verify_trust_token;
@property(readonly, copy, nonatomic) NSString *action;
@end


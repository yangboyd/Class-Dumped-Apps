//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSObject;
@protocol WAXIncomingStanzaElementNoviPaymentGetBalanceResponseSuccess_Account_Balance_Crypto, WAXIncomingStanzaElementNoviPaymentGetBalanceResponseSuccess_Account_Balance_Fiat;

@protocol WAXIncomingStanzaElementNoviPaymentGetBalanceResponseSuccess_Account_Balance <NSObject>
@property(readonly, nonatomic) NSObject<WAXIncomingStanzaElementNoviPaymentGetBalanceResponseSuccess_Account_Balance_Fiat> *fiat;
@property(readonly, nonatomic) NSObject<WAXIncomingStanzaElementNoviPaymentGetBalanceResponseSuccess_Account_Balance_Crypto> *crypto;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol WAXIncomingStanzaElementNoviPaymentCurrencyExchangeRatesResponseSuccess_Account_Sender_Quote_Fee;

@protocol WAXIncomingStanzaElementNoviPaymentCurrencyExchangeRatesResponseSuccess_Account_Sender_Quote <NSObject>
@property(readonly, nonatomic) NSObject<WAXIncomingStanzaElementNoviPaymentCurrencyExchangeRatesResponseSuccess_Account_Sender_Quote_Fee> *fee;
@property(readonly, copy, nonatomic) NSString *target_iso_code;
@property(readonly, copy, nonatomic) NSString *source_iso_code;
@property(readonly, copy, nonatomic) NSString *expiry_ts;
@property(readonly, copy, nonatomic) NSString *exchange_rate;
@property(readonly, copy, nonatomic) NSString *id_p;
@end


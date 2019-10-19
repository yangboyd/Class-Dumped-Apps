//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSDictionary, NSLocale, NSString, YTIAsyncActivityRenderer;

@protocol YTIAPEndpoint <NSObject>
@property(readonly, nonatomic) NSData *serializedTransactionFlowLoggingParams;
@property(readonly, nonatomic) _Bool hasOfferParams;
@property(readonly, nonatomic) NSString *offerParams;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) YTIAsyncActivityRenderer *asyncRenderer;
@property(readonly, nonatomic) NSString *productId;
@property(readonly, nonatomic) NSDictionary *clientInfo;
- (NSString *)countryMissmatchErrorStringForPriceLocale:(NSLocale *)arg1;
- (_Bool)isOfferedInPriceLocale:(NSLocale *)arg1;
@end


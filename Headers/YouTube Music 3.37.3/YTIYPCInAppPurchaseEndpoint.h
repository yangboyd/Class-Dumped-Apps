//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTIAPEndpoint-Protocol.h"

@class NSData, NSDate, NSDictionary, NSMutableArray, NSString, YTIAsyncActivityRenderer, YTIYPCInAppPurchaseAsyncActivitySupportedRenderers;

@interface YTIYPCInAppPurchaseEndpoint : GPBMessage <YTIAPEndpoint>
{
}

+ (id)descriptor;
- (id)formatedCountryNameFromBareCountryName:(id)arg1;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSString *productId;
@property(readonly, nonatomic) YTIAsyncActivityRenderer *asyncRenderer;
- (id)countryMissmatchErrorStringForPriceLocale:(id)arg1;
- (_Bool)isOfferedInPriceLocale:(id)arg1;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) NSDictionary *clientInfo;

// Remaining properties
@property(retain, nonatomic) YTIYPCInAppPurchaseAsyncActivitySupportedRenderers *asyncActivity; // @dynamic asyncActivity;
@property(retain, nonatomic) NSMutableArray *availableCountriesArray; // @dynamic availableCountriesArray;
@property(readonly, nonatomic) unsigned long long availableCountriesArray_Count; // @dynamic availableCountriesArray_Count;
@property(copy, nonatomic) NSString *clientLocationContext; // @dynamic clientLocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAsyncActivity; // @dynamic hasAsyncActivity;
@property(nonatomic) _Bool hasClientLocationContext; // @dynamic hasClientLocationContext;
@property(nonatomic) _Bool hasIapProductId; // @dynamic hasIapProductId;
@property(nonatomic) _Bool hasOfferCountry; // @dynamic hasOfferCountry;
@property(nonatomic) _Bool hasOfferEndTimeSecs; // @dynamic hasOfferEndTimeSecs;
@property(nonatomic) _Bool hasOfferParams; // @dynamic hasOfferParams;
@property(nonatomic) _Bool hasSerializedTransactionFlowLoggingParams; // @dynamic hasSerializedTransactionFlowLoggingParams;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *iapProductId; // @dynamic iapProductId;
@property(copy, nonatomic) NSString *offerCountry; // @dynamic offerCountry;
@property(nonatomic) long long offerEndTimeSecs; // @dynamic offerEndTimeSecs;
@property(copy, nonatomic) NSString *offerParams; // @dynamic offerParams;
@property(copy, nonatomic) NSData *serializedTransactionFlowLoggingParams; // @dynamic serializedTransactionFlowLoggingParams;
@property(readonly) Class superclass;

@end


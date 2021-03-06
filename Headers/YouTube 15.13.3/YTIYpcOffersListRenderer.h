//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIYpcOffersListCouponSupportedRenderers, YTIYpcOffersListSupportedRenderers;

@interface YTIYpcOffersListRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalInfosArray; // @dynamic additionalInfosArray;
@property(readonly, nonatomic) unsigned long long additionalInfosArray_Count; // @dynamic additionalInfosArray_Count;
@property(retain, nonatomic) YTIYpcOffersListCouponSupportedRenderers *coupon; // @dynamic coupon;
@property(retain, nonatomic) YTIFormattedString *couponApplyText; // @dynamic couponApplyText;
@property(nonatomic) _Bool hasCoupon; // @dynamic hasCoupon;
@property(nonatomic) _Bool hasCouponApplyText; // @dynamic hasCouponApplyText;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHelpEndpoint; // @dynamic hasHelpEndpoint;
@property(nonatomic) _Bool hasMoreAdditionalInfoHeader; // @dynamic hasMoreAdditionalInfoHeader;
@property(nonatomic) _Bool hasOffersList; // @dynamic hasOffersList;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *header; // @dynamic header;
@property(retain, nonatomic) YTICommand *helpEndpoint; // @dynamic helpEndpoint;
@property(retain, nonatomic) YTIFormattedString *moreAdditionalInfoHeader; // @dynamic moreAdditionalInfoHeader;
@property(retain, nonatomic) NSMutableArray *moreAdditionalInfosArray; // @dynamic moreAdditionalInfosArray;
@property(readonly, nonatomic) unsigned long long moreAdditionalInfosArray_Count; // @dynamic moreAdditionalInfosArray_Count;
@property(retain, nonatomic) YTIYpcOffersListSupportedRenderers *offersList; // @dynamic offersList;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) NSMutableArray *visibleAdditionalInfosArray; // @dynamic visibleAdditionalInfosArray;
@property(readonly, nonatomic) unsigned long long visibleAdditionalInfosArray_Count; // @dynamic visibleAdditionalInfosArray_Count;

@end


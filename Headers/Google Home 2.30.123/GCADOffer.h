//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCADImage, GCADOfferType, GPBEnumArray, NSString;

@interface GCADOffer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) GCADImage *assistCategoryIcon; // @dynamic assistCategoryIcon;
@property(copy, nonatomic) NSString *assistCategoryText; // @dynamic assistCategoryText;
@property(nonatomic) _Bool assistPromotionalRankOverride; // @dynamic assistPromotionalRankOverride;
@property(retain, nonatomic) GCADImage *cardImage; // @dynamic cardImage;
@property(retain, nonatomic) GPBEnumArray *deviceSectionTypeArray; // @dynamic deviceSectionTypeArray;
@property(readonly, nonatomic) unsigned long long deviceSectionTypeArray_Count; // @dynamic deviceSectionTypeArray_Count;
@property(nonatomic) int displayPriority; // @dynamic displayPriority;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasAssistCategoryIcon; // @dynamic hasAssistCategoryIcon;
@property(nonatomic) _Bool hasAssistCategoryText; // @dynamic hasAssistCategoryText;
@property(nonatomic) _Bool hasAssistPromotionalRankOverride; // @dynamic hasAssistPromotionalRankOverride;
@property(nonatomic) _Bool hasCardImage; // @dynamic hasCardImage;
@property(nonatomic) _Bool hasDisplayPriority; // @dynamic hasDisplayPriority;
@property(nonatomic) _Bool hasOfferId; // @dynamic hasOfferId;
@property(nonatomic) _Bool hasOfferText; // @dynamic hasOfferText;
@property(nonatomic) _Bool hasOfferTitle; // @dynamic hasOfferTitle;
@property(nonatomic) _Bool hasOfferType; // @dynamic hasOfferType;
@property(nonatomic) _Bool hasProviderName; // @dynamic hasProviderName;
@property(nonatomic) _Bool hasRedemptionToken; // @dynamic hasRedemptionToken;
@property(nonatomic) _Bool hasTermsURL; // @dynamic hasTermsURL;
@property(copy, nonatomic) NSString *offerId; // @dynamic offerId;
@property(copy, nonatomic) NSString *offerText; // @dynamic offerText;
@property(copy, nonatomic) NSString *offerTitle; // @dynamic offerTitle;
@property(retain, nonatomic) GCADOfferType *offerType; // @dynamic offerType;
@property(copy, nonatomic) NSString *providerName; // @dynamic providerName;
@property(copy, nonatomic) NSString *redemptionToken; // @dynamic redemptionToken;
@property(copy, nonatomic) NSString *termsURL; // @dynamic termsURL;

@end


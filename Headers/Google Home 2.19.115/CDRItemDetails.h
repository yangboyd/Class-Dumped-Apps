//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRItemId, CDRPackagingInfo, CDRProductIdentifiers, CDVPickAndPriceUnits, GPBEnumArray, NSString;

@interface CDRItemDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cdsMerchantId; // @dynamic cdsMerchantId;
@property(copy, nonatomic) NSString *confirmationImageURL; // @dynamic confirmationImageURL;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasCdsMerchantId; // @dynamic hasCdsMerchantId;
@property(nonatomic) _Bool hasConfirmationImageURL; // @dynamic hasConfirmationImageURL;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasItemId; // @dynamic hasItemId;
@property(nonatomic) _Bool hasMerchantName; // @dynamic hasMerchantName;
@property(nonatomic) _Bool hasPackagingInfo; // @dynamic hasPackagingInfo;
@property(nonatomic) _Bool hasPickPriceUnits; // @dynamic hasPickPriceUnits;
@property(nonatomic) _Bool hasProductIdentifiers; // @dynamic hasProductIdentifiers;
@property(nonatomic) _Bool hasProductImageFifeURL; // @dynamic hasProductImageFifeURL;
@property(nonatomic) _Bool hasReturnPolicyURL; // @dynamic hasReturnPolicyURL;
@property(nonatomic) _Bool hasThumbnailImageURL; // @dynamic hasThumbnailImageURL;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) GPBEnumArray *itemAttributeArray; // @dynamic itemAttributeArray;
@property(readonly, nonatomic) unsigned long long itemAttributeArray_Count; // @dynamic itemAttributeArray_Count;
@property(retain, nonatomic) CDRItemId *itemId; // @dynamic itemId;
@property(copy, nonatomic) NSString *merchantName; // @dynamic merchantName;
@property(retain, nonatomic) CDRPackagingInfo *packagingInfo; // @dynamic packagingInfo;
@property(retain, nonatomic) CDVPickAndPriceUnits *pickPriceUnits; // @dynamic pickPriceUnits;
@property(retain, nonatomic) CDRProductIdentifiers *productIdentifiers; // @dynamic productIdentifiers;
@property(copy, nonatomic) NSString *productImageFifeURL; // @dynamic productImageFifeURL;
@property(copy, nonatomic) NSString *returnPolicyURL; // @dynamic returnPolicyURL;
@property(copy, nonatomic) NSString *thumbnailImageURL; // @dynamic thumbnailImageURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end


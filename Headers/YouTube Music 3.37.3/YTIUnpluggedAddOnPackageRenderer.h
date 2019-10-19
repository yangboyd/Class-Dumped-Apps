//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIFormattedString, YTIRenderer, YTIThumbnailDetails, YTIUnpluggedPricingDetails;

@interface YTIUnpluggedAddOnPackageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalPricingDetailsArray; // @dynamic additionalPricingDetailsArray;
@property(readonly, nonatomic) unsigned long long additionalPricingDetailsArray_Count; // @dynamic additionalPricingDetailsArray_Count;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasPackageIcon; // @dynamic hasPackageIcon;
@property(nonatomic) _Bool hasPackageId; // @dynamic hasPackageId;
@property(nonatomic) _Bool hasPackageWhiteIcon; // @dynamic hasPackageWhiteIcon;
@property(nonatomic) _Bool hasPricingDetails; // @dynamic hasPricingDetails;
@property(nonatomic) _Bool hasSeeAll; // @dynamic hasSeeAll;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUserHasPurchased; // @dynamic hasUserHasPurchased;
@property(retain, nonatomic) NSMutableArray *moreInfoIconsArray; // @dynamic moreInfoIconsArray;
@property(readonly, nonatomic) unsigned long long moreInfoIconsArray_Count; // @dynamic moreInfoIconsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *packageIcon; // @dynamic packageIcon;
@property(copy, nonatomic) NSString *packageId; // @dynamic packageId;
@property(retain, nonatomic) YTIRenderer *packageWhiteIcon; // @dynamic packageWhiteIcon;
@property(retain, nonatomic) YTIUnpluggedPricingDetails *pricingDetails; // @dynamic pricingDetails;
@property(retain, nonatomic) YTIFormattedString *seeAll; // @dynamic seeAll;
@property(retain, nonatomic) NSMutableArray *stationIconsArray; // @dynamic stationIconsArray;
@property(readonly, nonatomic) unsigned long long stationIconsArray_Count; // @dynamic stationIconsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) _Bool userHasPurchased; // @dynamic userHasPurchased;

@end


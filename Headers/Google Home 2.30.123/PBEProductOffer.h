//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PBEProductOffer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasParentIdentifier; // @dynamic hasParentIdentifier;
@property(nonatomic) _Bool hasVendor; // @dynamic hasVendor;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *parentIdentifier; // @dynamic parentIdentifier;
@property(retain, nonatomic) NSMutableArray *parentPricingInfoArray; // @dynamic parentPricingInfoArray;
@property(readonly, nonatomic) unsigned long long parentPricingInfoArray_Count; // @dynamic parentPricingInfoArray_Count;
@property(retain, nonatomic) NSMutableArray *pricingInfoArray; // @dynamic pricingInfoArray;
@property(readonly, nonatomic) unsigned long long pricingInfoArray_Count; // @dynamic pricingInfoArray_Count;
@property(nonatomic) int vendor; // @dynamic vendor;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString;

@interface YTISubscriptionOffersRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOfferType; // @dynamic hasOfferType;
@property(retain, nonatomic) NSMutableArray *offerDataArray; // @dynamic offerDataArray;
@property(readonly, nonatomic) unsigned long long offerDataArray_Count; // @dynamic offerDataArray_Count;
@property(retain, nonatomic) YTIFormattedString *offerType; // @dynamic offerType;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIFormattedString;

@interface YTIGuideNoSubscriptionsSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *compactNoSubsPromoText; // @dynamic compactNoSubsPromoText;
@property(retain, nonatomic) YTIFormattedString *formattedTitle; // @dynamic formattedTitle;
@property(nonatomic) _Bool hasCompactNoSubsPromoText; // @dynamic hasCompactNoSubsPromoText;
@property(nonatomic) _Bool hasFormattedTitle; // @dynamic hasFormattedTitle;
@property(nonatomic) _Bool hasNoSubsPromoText; // @dynamic hasNoSubsPromoText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(retain, nonatomic) YTIFormattedString *noSubsPromoText; // @dynamic noSubsPromoText;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIActiveViewDisplayMeasurement, YTIPromotedDiscoveryAppPromoContent;

@interface YTIPromotedDiscoveryAppPromoCompactFormRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIActiveViewDisplayMeasurement *activeView; // @dynamic activeView;
@property(retain, nonatomic) NSMutableArray *clickLocationTargetsArray; // @dynamic clickLocationTargetsArray;
@property(readonly, nonatomic) unsigned long long clickLocationTargetsArray_Count; // @dynamic clickLocationTargetsArray_Count;
@property(retain, nonatomic) YTIPromotedDiscoveryAppPromoContent *content; // @dynamic content;
@property(nonatomic) _Bool hasActiveView; // @dynamic hasActiveView;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


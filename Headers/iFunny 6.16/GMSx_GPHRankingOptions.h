//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class NSString;

@interface GMSx_GPHRankingOptions : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double distanceRatio; // @dynamic distanceRatio;
@property(nonatomic) _Bool hasDistanceRatio; // @dynamic hasDistanceRatio;
@property(nonatomic) _Bool hasLogisticCurvature; // @dynamic hasLogisticCurvature;
@property(nonatomic) _Bool hasLogisticOffset; // @dynamic hasLogisticOffset;
@property(nonatomic) _Bool hasPreferredPhotoDescriptor; // @dynamic hasPreferredPhotoDescriptor;
@property(nonatomic) _Bool hasRankingStrategy; // @dynamic hasRankingStrategy;
@property(nonatomic) double logisticCurvature; // @dynamic logisticCurvature;
@property(nonatomic) double logisticOffset; // @dynamic logisticOffset;
@property(copy, nonatomic) NSString *preferredPhotoDescriptor; // @dynamic preferredPhotoDescriptor;
@property(nonatomic) int rankingStrategy; // @dynamic rankingStrategy;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIAdPlacementSupportedConfigs, YTIAdPlacementSupportedRenderers;

@interface YTIAdPlacementRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAdPlacementSupportedConfigs *config; // @dynamic config;
@property(nonatomic) long long driftRecoveryMs; // @dynamic driftRecoveryMs;
@property(copy, nonatomic) NSString *elementId; // @dynamic elementId;
@property(nonatomic) _Bool hasConfig; // @dynamic hasConfig;
@property(nonatomic) _Bool hasDriftRecoveryMs; // @dynamic hasDriftRecoveryMs;
@property(nonatomic) _Bool hasElementId; // @dynamic hasElementId;
@property(nonatomic) _Bool hasRenderer; // @dynamic hasRenderer;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *placementEndPingsArray; // @dynamic placementEndPingsArray;
@property(readonly, nonatomic) unsigned long long placementEndPingsArray_Count; // @dynamic placementEndPingsArray_Count;
@property(retain, nonatomic) NSMutableArray *placementStartPingsArray; // @dynamic placementStartPingsArray;
@property(readonly, nonatomic) unsigned long long placementStartPingsArray_Count; // @dynamic placementStartPingsArray_Count;
@property(retain, nonatomic) YTIAdPlacementSupportedRenderers *renderer; // @dynamic renderer;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


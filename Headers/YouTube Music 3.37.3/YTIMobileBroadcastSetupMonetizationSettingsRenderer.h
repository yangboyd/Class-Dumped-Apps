//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMobileBroadcastSetupAdvancedSettingsInputBooleanSupportedRenderers, YTIMobileBroadcastSetupAdvancedSettingsInputSelectSupportedRenderers;

@interface YTIMobileBroadcastSetupMonetizationSettingsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMobileBroadcastSetupAdvancedSettingsInputBooleanSupportedRenderers *enableContentId; // @dynamic enableContentId;
@property(retain, nonatomic) YTIMobileBroadcastSetupAdvancedSettingsInputBooleanSupportedRenderers *enableDefaultUsagePolicy; // @dynamic enableDefaultUsagePolicy;
@property(nonatomic) _Bool hasEnableContentId; // @dynamic hasEnableContentId;
@property(nonatomic) _Bool hasEnableDefaultUsagePolicy; // @dynamic hasEnableDefaultUsagePolicy;
@property(nonatomic) _Bool hasMatchPolicy; // @dynamic hasMatchPolicy;
@property(nonatomic) _Bool hasUsagePolicy; // @dynamic hasUsagePolicy;
@property(retain, nonatomic) YTIMobileBroadcastSetupAdvancedSettingsInputSelectSupportedRenderers *matchPolicy; // @dynamic matchPolicy;
@property(retain, nonatomic) YTIMobileBroadcastSetupAdvancedSettingsInputSelectSupportedRenderers *usagePolicy; // @dynamic usagePolicy;

@end


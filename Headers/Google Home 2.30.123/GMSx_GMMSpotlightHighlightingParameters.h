//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBInt32Array;

@interface GMSx_GMMSpotlightHighlightingParameters : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool areaHighlightingLogOnly; // @dynamic areaHighlightingLogOnly;
@property(nonatomic) _Bool enableAreaHighlighting; // @dynamic enableAreaHighlighting;
@property(nonatomic) _Bool enableIconicPlaces; // @dynamic enableIconicPlaces;
@property(nonatomic) _Bool hasAreaHighlightingLogOnly; // @dynamic hasAreaHighlightingLogOnly;
@property(nonatomic) _Bool hasEnableAreaHighlighting; // @dynamic hasEnableAreaHighlighting;
@property(nonatomic) _Bool hasEnableIconicPlaces; // @dynamic hasEnableIconicPlaces;
@property(retain, nonatomic) GMSx_GPBInt32Array *spotlightExperimentIdArray; // @dynamic spotlightExperimentIdArray;
@property(readonly, nonatomic) unsigned long long spotlightExperimentIdArray_Count; // @dynamic spotlightExperimentIdArray_Count;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CARSDeviceProperties, CARSScreenlockState, CARSStarguardData;

@interface CARSDeviceRiskSignals : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CARSDeviceProperties *deviceProperties; // @dynamic deviceProperties;
@property(nonatomic) _Bool hasDeviceProperties; // @dynamic hasDeviceProperties;
@property(nonatomic) _Bool hasScreenlockState; // @dynamic hasScreenlockState;
@property(nonatomic) _Bool hasStarguardData; // @dynamic hasStarguardData;
@property(retain, nonatomic) CARSScreenlockState *screenlockState; // @dynamic screenlockState;
@property(retain, nonatomic) CARSStarguardData *starguardData; // @dynamic starguardData;

@end


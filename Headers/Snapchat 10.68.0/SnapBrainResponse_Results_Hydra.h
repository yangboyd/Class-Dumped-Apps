//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray;

@interface SnapBrainResponse_Results_Hydra : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBDoubleArray *histogramArray; // @dynamic histogramArray;
@property(readonly, nonatomic) unsigned long long histogramArray_Count; // @dynamic histogramArray_Count;
@property(nonatomic) _Bool isFirstFrameLowContrast; // @dynamic isFirstFrameLowContrast;
@property(nonatomic) _Bool isLowContrast; // @dynamic isLowContrast;

@end


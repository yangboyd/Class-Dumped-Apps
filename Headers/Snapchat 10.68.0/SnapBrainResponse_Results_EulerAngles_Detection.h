//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray, SnapBrainResponse_Results_EulerAngles_Detection_ProjectionTranslate;

@interface SnapBrainResponse_Results_EulerAngles_Detection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBFloatArray *anglesArray; // @dynamic anglesArray;
@property(readonly, nonatomic) unsigned long long anglesArray_Count; // @dynamic anglesArray_Count;
@property(nonatomic) _Bool hasProjectionTranslate; // @dynamic hasProjectionTranslate;
@property(retain, nonatomic) SnapBrainResponse_Results_EulerAngles_Detection_ProjectionTranslate *projectionTranslate; // @dynamic projectionTranslate;

@end


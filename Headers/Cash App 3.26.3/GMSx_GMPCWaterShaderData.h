//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMPCPolyPolygon, NSMutableArray;

@interface GMSx_GMPCWaterShaderData : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int blurRadius; // @dynamic blurRadius;
@property(retain, nonatomic) GMSx_GMPCPolyPolygon *coverage; // @dynamic coverage;
@property(nonatomic) int coverageMargin; // @dynamic coverageMargin;
@property(nonatomic) _Bool hasBlurRadius; // @dynamic hasBlurRadius;
@property(nonatomic) _Bool hasCoverage; // @dynamic hasCoverage;
@property(nonatomic) _Bool hasCoverageMargin; // @dynamic hasCoverageMargin;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) NSMutableArray *rasterArray; // @dynamic rasterArray;
@property(readonly, nonatomic) unsigned long long rasterArray_Count; // @dynamic rasterArray_Count;
@property(nonatomic) int type; // @dynamic type;

@end


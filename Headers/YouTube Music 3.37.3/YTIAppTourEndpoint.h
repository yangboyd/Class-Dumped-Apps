//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, YTIAppTourEndpointSupportedRenderers;

@interface YTIAppTourEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clientViewTypeRenderingInfosArray; // @dynamic clientViewTypeRenderingInfosArray;
@property(readonly, nonatomic) unsigned long long clientViewTypeRenderingInfosArray_Count; // @dynamic clientViewTypeRenderingInfosArray_Count;
@property(retain, nonatomic) GPBEnumArray *clientViewTypesArray; // @dynamic clientViewTypesArray;
@property(readonly, nonatomic) unsigned long long clientViewTypesArray_Count; // @dynamic clientViewTypesArray_Count;
@property(retain, nonatomic) YTIAppTourEndpointSupportedRenderers *completeTourModal; // @dynamic completeTourModal;
@property(retain, nonatomic) YTIAppTourEndpointSupportedRenderers *dismissTourModal; // @dynamic dismissTourModal;
@property(nonatomic) _Bool hasCompleteTourModal; // @dynamic hasCompleteTourModal;
@property(nonatomic) _Bool hasDismissTourModal; // @dynamic hasDismissTourModal;
@property(nonatomic) _Bool hasStartTourModal; // @dynamic hasStartTourModal;
@property(retain, nonatomic) YTIAppTourEndpointSupportedRenderers *startTourModal; // @dynamic startTourModal;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSNavGuidanceState.h>

@class GMSDSearch, GMSDStep, GMSInt32Array, GMSx_DirectionsResponse, GMSx_RouteState;

@interface GMSNavMutableGuidanceState : GMSNavGuidanceState
{
}

+ (id)mutableStateWithState:(id)arg1;
@property(retain, nonatomic) GMSInt32Array *segmentIndicesForAllRoutes; // @dynamic segmentIndicesForAllRoutes;
@property(copy, nonatomic) GMSx_DirectionsResponse *directionsResponse; // @dynamic directionsResponse;
@property(copy, nonatomic) GMSDSearch *directionsSearch; // @dynamic directionsSearch;
@property(nonatomic, getter=isOnRoute) _Bool onRoute; // @dynamic onRoute;
@property(nonatomic) int delayCategory; // @dynamic delayCategory;
@property(nonatomic) double secondsRemaining; // @dynamic secondsRemaining;
@property(nonatomic) double metersRemaining; // @dynamic metersRemaining;
@property(nonatomic) double metersToNextStep; // @dynamic metersToNextStep;
@property(retain, nonatomic) GMSInt32Array *metersFromStartForAllRoutes; // @dynamic metersFromStartForAllRoutes;
@property(retain, nonatomic) GMSDStep *currentStep; // @dynamic currentStep;
@property(nonatomic) _Bool hasRerouted; // @dynamic hasRerouted;
@property(copy, nonatomic) GMSx_RouteState *routeState; // @dynamic routeState;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNavGuidanceState:(id)arg1;
- (id)init;

@end


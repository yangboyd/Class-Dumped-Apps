//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSCopying-Protocol.h>

@class GMSDSearch, GMSx_DirectionsResponse, GMSx_RouteState, NSArray;

@interface GMSNavigationJourneyPlan : NSObject <NSCopying>
{
    NSArray *_waypoints;
    NSArray *_destinationWaypoints;
    NSArray *_viaWaypoints;
    NSArray *_viaWaypointsForCurrentRouteLeg;
    NSArray *_viaPoints;
    GMSDSearch *_directionsSearch;
    GMSx_DirectionsResponse *_directionsResponse;
    GMSx_RouteState *_routeState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GMSx_RouteState *routeState; // @synthesize routeState=_routeState;
@property(readonly, nonatomic) GMSx_DirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property(readonly, nonatomic) GMSDSearch *directionsSearch; // @synthesize directionsSearch=_directionsSearch;
@property(readonly, nonatomic) NSArray *viaPoints; // @synthesize viaPoints=_viaPoints;
@property(readonly, nonatomic) NSArray *viaWaypointsForCurrentRouteLeg; // @synthesize viaWaypointsForCurrentRouteLeg=_viaWaypointsForCurrentRouteLeg;
@property(readonly, nonatomic) NSArray *viaWaypoints; // @synthesize viaWaypoints=_viaWaypoints;
@property(readonly, nonatomic) NSArray *destinationWaypoints; // @synthesize destinationWaypoints=_destinationWaypoints;
@property(readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)journeyPlanByRemovingLeadingViaPoints:(unsigned long long)arg1;
- (id)journeyPlanBySelectingRoute:(id)arg1;
- (id)journeyPlanWithUpdatedNavGuidanceState:(id)arg1;
- (id)journeyPlanByRemovingFirstDestination;
- (id)initWithWaypoints:(id)arg1 viaPoints:(id)arg2 directionsSearch:(id)arg3 directionsResponse:(id)arg4 routeState:(id)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDWaypointLocation, NSMutableArray, NSString;

@interface GMSx_GMTTDWaypointResult : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *alternativeWaypointArray; // @dynamic alternativeWaypointArray;
@property(readonly, nonatomic) unsigned long long alternativeWaypointArray_Count; // @dynamic alternativeWaypointArray_Count;
@property(nonatomic) _Bool hasIsChainOrCategoricalQuery; // @dynamic hasIsChainOrCategoricalQuery;
@property(nonatomic) _Bool hasOriginalQuery; // @dynamic hasOriginalQuery;
@property(nonatomic) _Bool hasRoutableWaypointToken; // @dynamic hasRoutableWaypointToken;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasWaypoint; // @dynamic hasWaypoint;
@property(nonatomic) _Bool isChainOrCategoricalQuery; // @dynamic isChainOrCategoricalQuery;
@property(copy, nonatomic) NSString *originalQuery; // @dynamic originalQuery;
@property(copy, nonatomic) NSString *routableWaypointToken; // @dynamic routableWaypointToken;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) GMSx_GMTTDWaypointLocation *waypoint; // @dynamic waypoint;

@end


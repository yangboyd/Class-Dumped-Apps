//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIAnalyticsDetailEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int dimension; // @dynamic dimension;
@property(copy, nonatomic) NSString *entityIdentifier; // @dynamic entityIdentifier;
@property(nonatomic) int entityType; // @dynamic entityType;
@property(nonatomic) _Bool hasDimension; // @dynamic hasDimension;
@property(nonatomic) _Bool hasEntityIdentifier; // @dynamic hasEntityIdentifier;
@property(nonatomic) _Bool hasEntityType; // @dynamic hasEntityType;
@property(nonatomic) _Bool hasMetric; // @dynamic hasMetric;
@property(nonatomic) _Bool hasTimePeriod; // @dynamic hasTimePeriod;
@property(nonatomic) int metric; // @dynamic metric;
@property(nonatomic) int timePeriod; // @dynamic timePeriod;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETUsageWindowCache.h"

@class NSMutableArray;

@interface JETRealtimeUsageWindowCache : JETUsageWindowCache
{
    NSMutableArray *_realtimeMetricsStationOrdering;
}

@property(retain, nonatomic) NSMutableArray *realtimeMetricsStationOrdering; // @synthesize realtimeMetricsStationOrdering=_realtimeMetricsStationOrdering;
- (void).cxx_destruct;
- (id)perStationDataPoints;
- (id)WANUsage;
- (id)startTimeForLastResponse;
- (id)endTimeForLastResponse;
- (id)stationsFromResponse:(id)arg1;
- (void)sortStationUsageInfoArray:(id)arg1;
- (void)addMissingRealtimeStations:(id)arg1;
- (void)clearRealtimeMetricsStationCache;
- (void)populateRealtimeMetricsStationCacheWithResponse:(id)arg1;
- (void)refreshForced:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end


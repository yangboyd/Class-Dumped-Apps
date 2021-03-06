//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, PILPeopleIntelligenceContext;
@protocol PILResponseMetricsCollector;

@protocol PILMetricsService <NSObject>
- (void)measureRpc:(GPCPromise * (^)(void))arg1 context:(PILPeopleIntelligenceContext *)arg2 featureType:(int)arg3;
- (id <PILResponseMetricsCollector>)responseMetricsCollectorWithContext:(PILPeopleIntelligenceContext *)arg1 featureType:(int)arg2;
- (GPCPromise *)measureRequest:(GPCPromise * (^)(void))arg1 context:(PILPeopleIntelligenceContext *)arg2 featureType:(int)arg3;
@end


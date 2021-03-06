//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NRMAHarvestable.h"

@class NSMutableArray, NSString;

@interface NRMAHarvestableMetric : NRMAHarvestable
{
    long long lastUpdateMillis;
    NSString *_metricName;
    NSMutableArray *_collectedValues;
    NSString *_scope;
}

@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSMutableArray *collectedValues; // @synthesize collectedValues=_collectedValues;
@property(retain, nonatomic) NSString *metricName; // @synthesize metricName=_metricName;
- (void).cxx_destruct;
- (void)removeValuesWithAge:(double)arg1;
- (id)JSONObject;
- (void)reset;
- (void)incrementCount;
- (void)addValue:(id)arg1;
- (long long)lastUpdatedMillis;
- (unsigned long long)count;
- (id)allValues;
- (id)initWithMetricName:(id)arg1 scope:(id)arg2;
- (id)initWithMetricName:(id)arg1;

@end


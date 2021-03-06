//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMILocalizationResourceMetricAggregatorDelegate-Protocol.h"

@class AMILocalizationResourceMetricAggregator, NSString, NSTimer;
@protocol AMILocalization, AMILocalizationConfigurationService, CMIMetricsFactory;

@interface AMILocalizationResourcesMetrics : NSObject <AMILocalizationResourceMetricAggregatorDelegate>
{
    _Bool _appFinishedStartup;
    _Bool _included;
    id <CMIMetricsFactory> _metricsFactory;
    id <AMILocalization> _localizationService;
    id <AMILocalizationConfigurationService> _localizationConfigurationService;
    AMILocalizationResourceMetricAggregator *_aggregator;
    double _durationInSeconds;
    long long _logCapacity;
    double _timeLapsedInSeconds;
    long long _recordedLogCount;
    NSTimer *_timer;
    NSString *_marketplaceId;
    NSString *_appVersion;
    long long _aggregationCapacity;
    id _subscription;
}

@property(retain, nonatomic) id subscription; // @synthesize subscription=_subscription;
@property(nonatomic) long long aggregationCapacity; // @synthesize aggregationCapacity=_aggregationCapacity;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *marketplaceId; // @synthesize marketplaceId=_marketplaceId;
@property(nonatomic) _Bool included; // @synthesize included=_included;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long recordedLogCount; // @synthesize recordedLogCount=_recordedLogCount;
@property(nonatomic) double timeLapsedInSeconds; // @synthesize timeLapsedInSeconds=_timeLapsedInSeconds;
@property(nonatomic) long long logCapacity; // @synthesize logCapacity=_logCapacity;
@property(nonatomic) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(retain, nonatomic) AMILocalizationResourceMetricAggregator *aggregator; // @synthesize aggregator=_aggregator;
@property(retain, nonatomic) id <AMILocalizationConfigurationService> localizationConfigurationService; // @synthesize localizationConfigurationService=_localizationConfigurationService;
@property(retain, nonatomic) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
@property(retain, nonatomic) id <CMIMetricsFactory> metricsFactory; // @synthesize metricsFactory=_metricsFactory;
@property _Bool appFinishedStartup; // @synthesize appFinishedStartup=_appFinishedStartup;
- (void).cxx_destruct;
- (void)aggregator:(id)arg1 finishAggregatingProgram:(id)arg2 source:(id)arg3 counters:(id)arg4;
- (void)handleTimer:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (double)timeLeft;
- (_Bool)isTimeout;
- (void)updateSamplingConfig:(id)arg1;
- (void)unregisterSsnapListener;
- (void)registerSsnapListener;
- (void)activateMetrics;
- (void)deactivateMetrics;
- (_Bool)isLogCapacityExceeded;
- (_Bool)exceededLimit;
- (_Bool)isLopRegressionMetricsEnabled:(id)arg1;
- (void)recordWithMarketplace:(id)arg1 locale:(id)arg2 stringId:(id)arg3 platform:(id)arg4;
- (void)recordWithMarketplace:(id)arg1 locale:(id)arg2 stringId:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


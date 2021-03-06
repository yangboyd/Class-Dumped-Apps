//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/APMEExperimentObserverDelegate-Protocol.h>

@class APMDatabase, APMEClient, APMEManager, APMPBMeasurementConfig, GULMutableDictionary, NSArray, NSNumberFormatter, NSString;
@protocol OS_dispatch_queue;

@interface APMRemoteConfig : NSObject <APMEExperimentObserverDelegate>
{
    _Bool _isDefaultInstance;
    NSString *_appID;
    APMDatabase *_database;
    GULMutableDictionary *_cachedValueByRemoteConfigKeys;
    GULMutableDictionary *_cachedEventConfigByEventName;
    NSNumberFormatter *_numberFormatter;
    APMPBMeasurementConfig *_remoteConfigProto;
    APMEClient *_experimentClient;
    APMEManager *_experimentManager;
    _Bool _hasNewSnapshot;
}

+ (id)defaultClientFromExperimentManager:(id)arg1 defaultFlags:(id)arg2;
+ (id)defaultInstanceFromExperimentManager:(id)arg1;
- (void).cxx_destruct;
- (long long)int64ValueFromCacheWithKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)int64ValueFromCacheWithKey:(id)arg1 defaultValue:(long long)arg2 maxValue:(long long)arg3 minValue:(long long)arg4;
- (int)intValueFromCacheWithKey:(id)arg1 defaultValue:(int)arg2 maxValue:(int)arg3 minValue:(int)arg4;
- (double)timeIntervalInSecondsFromCacheWithKey:(id)arg1 defaultValue:(double)arg2 maxValue:(double)arg3 minValue:(double)arg4;
- (id)numberFromCacheWithKey:(id)arg1 defaultValue:(id)arg2 maxValue:(id)arg3 minValue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (id)numberFromCacheWithKey:(id)arg1 defaultValue:(id)arg2 maxValue:(id)arg3 minValue:(id)arg4;
- (id)cacheValue:(id)arg1 forKey:(id)arg2;
- (id)numberFromString:(id)arg1;
- (id)measurementConfigFromDatabase;
- (void)parseRemoteConfigFromMeasurementConfig:(id)arg1;
@property(readonly, nonatomic, getter=isManualScreenTrackingEnabled) _Bool manualScreenTrackingEnabled;
@property(readonly, nonatomic, getter=isScreenViewReporterDelegateEnabled) _Bool screenViewReporterDelegateEnabled;
@property(readonly, nonatomic, getter=isResetAnalyticsDataEnabled) _Bool resetAnalyticsDataEnabled;
@property(readonly, nonatomic) double remoteConfigCacheTimeInterval;
@property(readonly, nonatomic) double attributionCacheTTLInterval;
@property(readonly, nonatomic) int maxDeferredDeepLinkRetryCount;
@property(readonly, nonatomic, getter=isDeferredDeepLinkEnabled) _Bool deferredDeepLinkEnabled;
@property(readonly, nonatomic) _Bool disableGMRMeasurementEnabled;
@property(readonly, nonatomic) _Bool enhancedEcommerceLifetimeValueUpdateEnabled;
@property(readonly, nonatomic) _Bool nestedParamDailyEventCountEnabled;
@property(readonly, nonatomic) _Bool lastAdvertisingIDResetFeatureEnabled;
@property(readonly, nonatomic) _Bool firebaseFeatureRolloutEnabled;
@property(readonly, nonatomic) _Bool lifecycleEngagementEnabled;
@property(readonly, nonatomic) _Bool appInBackgroundParameterEnabled;
@property(readonly, nonatomic) _Bool appBackgroundedEventEnabled;
@property(readonly, nonatomic) _Bool checksumEnabled;
@property(readonly, nonatomic) int analyticsAccountTimeZoneOffsetMinutes;
@property(readonly, nonatomic, getter=isTimeZoneOffsetEnabled) _Bool timeZoneOffsetEnabled;
@property(readonly, nonatomic, getter=isEventSamplingEnabled) _Bool eventSamplingEnabled;
@property(readonly, nonatomic) _Bool blacklistPublic;
@property(readonly, nonatomic) _Bool blacklistInternal;
@property(readonly, nonatomic) double uploadingRealTimeInterval;
@property(readonly, nonatomic) double uploadingDebugModeInterval;
@property(readonly, nonatomic) int maxRealtimeEventCountPerDay;
@property(readonly, nonatomic) int maxBundlesCreatedPerIteration;
@property(readonly, nonatomic) double uploadingRetryInterval;
@property(readonly, nonatomic) int uploadingRetryCount;
@property(readonly, nonatomic) long long uploadMaxSizeLimitBytes;
@property(readonly, nonatomic) long long uploadMaxEventsPerBundle;
@property(readonly, nonatomic) long long uploadMaxBundlesLimit;
@property(readonly, nonatomic) double uploadingInitialDelayInterval;
@property(readonly, nonatomic) double uploadingInterval;
@property(readonly, nonatomic) int maxEventsStored;
@property(readonly, nonatomic) int maxPublicEventParams;
@property(readonly, nonatomic) int maxEventNameCardinality;
@property(readonly, nonatomic) int maxPublicUserProperties;
@property(readonly, nonatomic) int maxTrackedCurrencies;
@property(readonly, nonatomic) int maxErrorEventsPerDay;
@property(readonly, nonatomic) int maxPublicEventsPerDay;
@property(readonly, nonatomic) int maxEventsPerDay;
@property(readonly, nonatomic) int maxConversionsPerDay;
@property(readonly, nonatomic) _Bool configurableLimitsEnabled;
@property(readonly, nonatomic) _Bool dedupePurchasesEnabled;
@property(readonly, nonatomic) _Bool parsePurchaseDataEnabled;
@property(readonly, nonatomic) _Bool uploadWhenAppInBackgroundEnabled;
@property(readonly, nonatomic) _Bool redundantEngagementRemovalEnabled;
@property(readonly, nonatomic) _Bool efficientEngagementReportingEnabled;
@property(readonly, nonatomic) double sessionEventUserEngagementInterval;
@property(readonly, nonatomic) double sessionDefaultTimeoutInterval;
@property(readonly, nonatomic) double sessionDefaultMinimumInterval;
@property(readonly, nonatomic) double networkTimeout;
@property(readonly, nonatomic, getter=isNetworkBackgroundSessionEnabled) _Bool networkBackgroundSessionEnabled;
@property(readonly, nonatomic) double monitoringSamplePeriod;
@property(readonly, nonatomic, getter=isIAPIntroductoryOfferEnabled) _Bool IAPIntroductoryOfferEnabled;
@property(readonly, nonatomic, getter=isIAPSubscriptionNonConsumableReportEnabled) _Bool IAPSubscriptionNonConsumableReportEnabled;
@property(readonly, nonatomic, getter=isIdentifierForVendorCollectionEnabled) _Bool identifierForVendorCollectionEnabled;
@property(readonly, nonatomic) double adIDCacheTime;
@property(readonly, nonatomic) NSArray *experimentIDs;
@property(readonly, nonatomic) double maxQueueTime;
@property(readonly, nonatomic) double databaseDeleteStaleBundlesInterval;
@property(readonly, nonatomic, getter=isPropertyFilterResultBundleTimestampEnabled) _Bool propertyFilterResultBundleTimestampEnabled;
@property(readonly, nonatomic, getter=isSessionScopedUserEngagementEnabled) _Bool sessionScopedUserEngagementEnabled;
@property(readonly, nonatomic, getter=isSessionScopedEventAggregatesEnabled) _Bool sessionScopedEventAggregatesEnabled;
@property(readonly, nonatomic, getter=isAudienceScopedFiltersEnabled) _Bool audienceScopedFiltersEnabled;
@property(readonly, nonatomic) int maxParametersPerFilter;
@property(readonly, nonatomic) int maxFilterResultCount;
@property(readonly, nonatomic) int maxFiltersPerAudience;
@property(readonly, nonatomic) int maxAudienceCount;
@property(readonly, nonatomic, getter=isSearchAdReporterEnabled) _Bool searchAdReporterEnabled;
@property(readonly, nonatomic) double uploadingBackoffInterval;
- (id)remoteConfigURLWithAppInstanceID:(id)arg1 platform:(id)arg2 SDKVersion:(long long)arg3;
@property(readonly, nonatomic) double lastRemoteConfigUpdateTimestamp;
@property(readonly, nonatomic) long long version;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (int)samplingRateForEvent:(id)arg1;
- (_Bool)eventHasSamplingRate:(id)arg1;
- (_Bool)isEventCustomConversion:(id)arg1;
- (_Bool)isEventBlacklisted:(id)arg1;
- (id)eventConfigWithName:(id)arg1;
- (_Bool)updateMeasurementConfig:(id)arg1;
- (void)reset;
- (_Bool)activateNewSnapshot;
- (_Bool)shouldFetchExperimentsForClient:(id)arg1;
- (void)client:(id)arg1 didReceiveFetchError:(id)arg2;
- (void)clientDidReceiveNewSnapshot:(id)arg1;
- (id)initWithAppID:(id)arg1 database:(id)arg2 measurementConfig:(id)arg3 experimentManager:(id)arg4;
- (id)initWithAppID:(id)arg1 database:(id)arg2 experimentManager:(id)arg3;
- (id)initWithAppID:(id)arg1 database:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly) Class superclass;

@end


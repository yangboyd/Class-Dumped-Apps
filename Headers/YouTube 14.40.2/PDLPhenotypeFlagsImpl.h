//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDLPhenotypeFlags.h"

@class NSString, PHTPhenotypeFlags;

@interface PDLPhenotypeFlagsImpl : NSObject <PDLPhenotypeFlags>
{
    PHTPhenotypeFlags *_allFlags;
}

@property(readonly, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
- (void).cxx_destruct;
- (unsigned long long)unsignedIntValueForFlag:(id)arg1 defaultValue:(long long)arg2;
- (long long)intValueForFlag:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)boolValueForFlag:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)fixResultPosition;
- (_Bool)filterUnnecessaryMethodFields;
- (_Bool)filterUnverifiedProfileFields;
- (_Bool)enableLookupProcessorThreadFix;
- (_Bool)populateCoreIDRequestField;
- (long long)cpuCollectInterval;
- (_Bool)logPeopleWithIDProcessCPUUsage;
- (_Bool)logCacheUpdateProcessCPUUsage;
- (_Bool)logQueryProcessCPUUsage;
- (long long)memoryCollectInterval;
- (_Bool)logCacheUpdateProcessMemoryUsage;
- (_Bool)logQueryProcessMemoryUsage;
- (_Bool)enableSeparateStarlightCacheWarmup;
- (unsigned long long)topNCacheConfigRefreshTimeMs;
- (unsigned long long)topNCacheConfigInvalidateTimeMs;
- (unsigned long long)topNCacheConfigSize;
- (void)update;
- (_Bool)enablePhotosDirect;
- (_Bool)enablePrivateNamesForDrive;
- (_Bool)passClientAgent;
- (_Bool)exposeQueryInCallback;
- (_Bool)disableEmailLookupOptionParam;
- (_Bool)enableUnknownAffinityType;
- (_Bool)logRPCDataProviderContactAdaptationLatency;
- (_Bool)logDeviceContactsCacheLoadLatency;
- (_Bool)logSessionInfoInPopulousMetrics;
- (_Bool)refactorQueryProcessor;
- (_Bool)refactorFilterAndDelivererInSeparateClass;
- (_Bool)logPhoneRegionCodes;
- (_Bool)refactorTokenizationLogic;
- (_Bool)usePrefixTreeForDeviceContacts;
- (_Bool)useDatabaseForDeviceContacts;
- (_Bool)routeUpdateDataCacheToWarmup;
- (unsigned long long)gmailAutocompleteResultCount;
- (id)initWithUserID:(id)arg1 packageName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


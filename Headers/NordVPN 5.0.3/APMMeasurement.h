//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GULNetworkLoggerDelegate-Protocol.h"
#import "GULNetworkReachabilityDelegate-Protocol.h"

@class APMAlarm, APMAudience, APMDatabase, APMIdentity, APMPersistedConfig, APMRemoteConfig, APMScheduler, APMSearchAdReporter, APMSessionReporter, GULNetwork, NSArray, NSString;

@interface APMMeasurement : NSObject <GULNetworkLoggerDelegate, GULNetworkReachabilityDelegate>
{
    NSString *_databaseName;
    long long _initializeComponentsOnce;
    APMAlarm *_alarm;
    APMAudience *_audience;
    APMDatabase *_database;
    APMIdentity *_identity;
    GULNetwork *_network;
    APMPersistedConfig *_persistedConfig;
    APMRemoteConfig *_remoteConfig;
    APMScheduler *_scheduler;
    APMSessionReporter *_sessionReporter;
    APMSearchAdReporter *_searchAdReporter;
    NSArray *_uploadingBundleIDs;
    NSString *_previousGMPAppID;
    // Error parsing type: AQ, name: _backgroundUpdateTask
    double _initTimestamp;
    double _suspendedUploadTimestamp;
    _Bool _needFirstOpenAfterReset;
    NSString *_appID;
    NSArray *_safelistedEvents;
    _Bool _enabled;
    _Bool _isNetworkRequestPending;
    _Bool _wasEnabledDuringInitialization;
    _Bool _isAnalyticsCollectionEnabled;
    _Bool _isAnalyticsCollectionDeactivated;
}

+ (void)handleAppDidFinishLaunching:(id)arg1;
+ (id)deepLinkFromUserActivity:(id)arg1;
+ (void)load;
+ (id)remoteConfig;
+ (id)monitor;
+ (id)sharedInstance;
+ (_Bool)hasSharedInstance;
+ (void)initializeSharedInstanceWithAppID:(id)arg1 isAnalyticsCollectionEnabled:(_Bool)arg2 isAnalyticsCollectionDeactivated:(_Bool)arg3 safelistedEvents:(id)arg4;
@property(nonatomic) _Bool isAnalyticsCollectionDeactivated; // @synthesize isAnalyticsCollectionDeactivated=_isAnalyticsCollectionDeactivated;
@property(nonatomic) _Bool isAnalyticsCollectionEnabled; // @synthesize isAnalyticsCollectionEnabled=_isAnalyticsCollectionEnabled;
@property(readonly, nonatomic) _Bool wasEnabledDuringInitialization; // @synthesize wasEnabledDuringInitialization=_wasEnabledDuringInitialization;
@property(readonly, nonatomic) _Bool isNetworkRequestPending; // @synthesize isNetworkRequestPending=_isNetworkRequestPending;
@property(readonly, nonatomic) APMSessionReporter *sessionReporter; // @synthesize sessionReporter=_sessionReporter;
@property(readonly, nonatomic) APMDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) APMScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) APMIdentity *identity; // @synthesize identity=_identity;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)sampleEvents:(id)arg1 error:(id *)arg2;
- (_Bool)isEventBundledAfterRoll:(int)arg1;
- (_Bool)canEventBeSampled:(id)arg1;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 contexts:(id)arg4;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3;
- (void)handleAppWillResignActiveEvent:(id)arg1;
- (void)terminateBackgroundTask;
- (void)handleAppWillEnterForegroundNotification:(id)arg1;
- (void)handleAppDidBecomeActiveEvent:(id)arg1;
- (void)swapBackgroundTaskWithNewTaskID:(unsigned long long)arg1;
- (void)filterPurchaseTransactions:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)networkRemoteConfigFetchCompletionHandler:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)fetchRemoteConfig;
- (_Bool)updateUserEngagement:(long long)arg1 bundle:(id)arg2 sessionScoped:(_Bool)arg3;
- (double)firstOpenTimestamp;
- (_Bool)removeBundlesFromDatabaseWithIDs:(id)arg1;
- (_Bool)hasDataToUpload;
- (_Bool)bundleRawEvents;
- (id)createRawEventMetadataWithUserAttributes:(id)arg1;
- (void)wipeoutAnalyticsDataAndResetComponents;
- (void)resetAnalyticsData;
- (id)shouldDisableAdPersonalization;
- (void)maxUserPropertiesForOrigin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userPropertiesIncludingInternal:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userAttributeWithName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (long long)setUserPropertyInDatabaseOnWorkerQueue:(id)arg1;
- (void)setUserAttributeOnWorkerQueue:(id)arg1;
- (void)setUserAttribute:(id)arg1;
- (void)removeUserAttributeOnWorkerQueue:(id)arg1;
- (void)removeUserAttribute:(id)arg1;
- (void)maybeAddDebugAndRealtimeParameters:(id)arg1;
- (void)writeEventOnWorkerQueue:(id)arg1;
- (void)handleEventOnWorkerQueue:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)setUploadInProgressWithBundleIDs:(id)arg1;
- (void)incrementRetryCounter;
- (void)networkUploadCompletionHandlerWithResponse:(id)arg1 error:(id)arg2;
- (id)filteredBundlesWithCompatibleAppID:(id)arg1 resettableDeviceID:(id)arg2 vendorDeviceID:(id)arg3 bundlesToUpload:(id)arg4;
- (_Bool)isNetworkReadyForRequest;
- (void)uploadData;
- (void)uploadDataOrRegisterAlarm;
- (double)nextUploadingTime;
- (void)updateSchedule;
- (void)backfillSessionNumber;
- (void)setMinimumSessionInterval:(double)arg1;
- (void)setSessionTimeoutInterval:(double)arg1;
- (_Bool)isVersionSameAsOriginalVersion;
- (id)fileAttributesForPath:(id)arg1;
- (long long)timestampMillisRoundedUpToNextHour:(long long)arg1;
- (void)setPersonalizedAdsUserPropertyOnWorkerQueue;
- (void)reportOSUpdateOnWorkerQueue;
- (void)reportAppUpdateOnWorkerQueue;
- (void)reportFirstOpenOnWorkerQueue;
- (void)reportSessionStartOnWorkerQueueWithTimestamp:(double)arg1 appInBackground:(_Bool)arg2;
- (void)reportStoredCampaignEventOnWorkerQueue:(id)arg1;
- (void)reachabilityDidChange;
- (_Bool)startMeasurementOnWorkerQueue;
- (_Bool)shouldWipeDataWithAppID:(id)arg1 appIDFromGMP:(id)arg2 appIDFromAdMob:(id)arg3 persistedAppIDFromGMP:(id)arg4 persistedAppIDFromAdMob:(id)arg5;
- (void)setEnabledOnWorkerQueue:(_Bool)arg1;
- (void)dealloc;
- (_Bool)shouldEnableMeasurement;
- (id)initWithDatabaseName:(id)arg1 persistedConfig:(id)arg2 network:(id)arg3 scheduler:(id)arg4 alarm:(id)arg5 appID:(id)arg6 isAnalyticsCollectionEnabled:(_Bool)arg7 isAnalyticsCollectionDeactivated:(_Bool)arg8 safelistedEvents:(id)arg9;
- (id)initWithAppID:(id)arg1 isAnalyticsCollectionEnabled:(_Bool)arg2 isAnalyticsCollectionDeactivated:(_Bool)arg3 safelistedEvents:(id)arg4;
- (_Bool)isValidCampaignURLParamDictionary:(id)arg1;
- (void)handleDebugModeWithURL:(id)arg1;
- (void)handleOpenURLOnWorkerQueue:(id)arg1 clickTimestampInMs:(id)arg2 eventTimestampInSeconds:(double)arg3;
- (void)handleDeepLink:(id)arg1 clickTimestampInMs:(id)arg2 eventTimestampInSeconds:(double)arg3;
- (void)handleOpenURL:(id)arg1 clickTimestampInMs:(id)arg2 eventTimestampInSeconds:(double)arg3;
- (void)handleNonFirstOpenEventURL:(id)arg1 eventTimestampInSeconds:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


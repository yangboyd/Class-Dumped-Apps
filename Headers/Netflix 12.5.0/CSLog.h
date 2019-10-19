//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCLUploadDelegate-Protocol.h"
#import "NFLXCrashManagerDelegateProtocol-Protocol.h"

@class CSLogMetricsProfiler, NCLLogger, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, QoeDataProfiler;
@protocol DataBrokerDataProviderProtocol, OS_dispatch_queue;

@interface CSLog : NSObject <NCLUploadDelegate, NFLXCrashManagerDelegateProtocol>
{
    NSObject<OS_dispatch_queue> *_loggerIdQueue;
    _Bool shouldCleanCacheFolder;
    _Bool shouldObserveSuccessfulAppStart;
    double _launchTime;
    id <DataBrokerDataProviderProtocol> _delegate;
    CSLogMetricsProfiler *_metricsProfiler;
    NSMutableArray *_navigationLevelStack;
    NCLLogger *_logger;
    NSMutableDictionary *_loggerIds;
    double _appSuspensionBegan;
    double _userIdleTimeout;
    double _userInteractionSessionStartTime;
    NSDictionary *_lastAppCrashedInfo;
    NSString *_apnsDeviceToken;
    NSNumber *_fromProcessStateSessionId;
    NSNumber *_toProcessStateSessionId;
    QoeDataProfiler *_qoeProfiler;
    NSNumber *_doNotLogDebugEvents;
}

+ (id)CSTimeFromNSTimeInterval:(double)arg1;
+ (id)clientLog;
@property(retain, nonatomic) NSNumber *doNotLogDebugEvents; // @synthesize doNotLogDebugEvents=_doNotLogDebugEvents;
@property(retain, nonatomic) QoeDataProfiler *qoeProfiler; // @synthesize qoeProfiler=_qoeProfiler;
@property(copy, nonatomic) NSNumber *toProcessStateSessionId; // @synthesize toProcessStateSessionId=_toProcessStateSessionId;
@property(copy, nonatomic) NSNumber *fromProcessStateSessionId; // @synthesize fromProcessStateSessionId=_fromProcessStateSessionId;
@property(retain, nonatomic) NSString *apnsDeviceToken; // @synthesize apnsDeviceToken=_apnsDeviceToken;
@property(retain, nonatomic) NSDictionary *lastAppCrashedInfo; // @synthesize lastAppCrashedInfo=_lastAppCrashedInfo;
@property(nonatomic) double userInteractionSessionStartTime; // @synthesize userInteractionSessionStartTime=_userInteractionSessionStartTime;
@property(nonatomic) double userIdleTimeout; // @synthesize userIdleTimeout=_userIdleTimeout;
@property(nonatomic) double appSuspensionBegan; // @synthesize appSuspensionBegan=_appSuspensionBegan;
@property(retain, nonatomic) NSMutableDictionary *loggerIds; // @synthesize loggerIds=_loggerIds;
@property(retain, nonatomic) NCLLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSMutableArray *navigationLevelStack; // @synthesize navigationLevelStack=_navigationLevelStack;
@property(retain, nonatomic) CSLogMetricsProfiler *metricsProfiler; // @synthesize metricsProfiler=_metricsProfiler;
@property(nonatomic) __weak id <DataBrokerDataProviderProtocol> delegate; // @synthesize delegate=_delegate;
@property double launchTime; // @synthesize launchTime=_launchTime;
- (void).cxx_destruct;
- (void)oldSendIdfa:(id)arg1;
- (void)logSkipRecapImpression:(id)arg1;
- (void)logBillboardEvent:(id)arg1 withToken:(id)arg2 lolomoId:(id)arg3 videoId:(id)arg4;
- (void)logBigRowEvent:(id)arg1 listId:(id)arg2 userInfo:(id)arg3;
- (void)logBigRowImpression:(id)arg1 userInfo:(id)arg2;
- (void)logBillboardImpression:(id)arg1 videoId:(id)arg2;
- (void)logBillboardActionWithToken:(id)arg1 lolomoId:(id)arg2 videoId:(id)arg3;
- (id)startSegmentPresentationSessionForView:(id)arg1 withTrackingInfo:(id)arg2 withPositionMs:(double)arg3;
- (void)endPresentationSession:(id)arg1;
- (id)startPresentationSessionForView:(id)arg1 withTrackingInfo:(id)arg2;
- (void)logPresentationObjects:(id)arg1 presentingViews:(id)arg2;
- (void)logPresentationObjects:(id)arg1 presentingView:(id)arg2;
- (id)logPresentationObject:(id)arg1 presentingView:(id)arg2;
- (void)logNetworkStatus;
- (void)logStorage;
- (void)userTookScreenshot;
- (void)logPushNotificationForPing:(CDUnknownBlockType)arg1;
- (void)logPushNotificationStatus:(_Bool)arg1;
- (void)logPushNotificationForSettingsChange;
- (void)logPushOptOutIfNeeded;
- (void)logPushNotificationStatusIfIdentity;
- (void)logPushNotificationDeviceToken:(id)arg1;
- (void)addVolumeContext;
- (void)logVolumeChangeWithMediaOffset:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (void)playbackStarted:(id)arg1;
- (void)logMLSnapshot:(id)arg1;
- (id)startMLSnapshotSession:(id)arg1;
- (id)MLSnapshotDict:(id)arg1;
- (void)startUserIdentitySession:(id)arg1 profileGuid:(id)arg2 logPush:(_Bool)arg3;
- (void)startMemberUserIdentitySession;
- (void)logAppForegroundTransitionComplete:(id)arg1;
- (void)logAppForegroundTransitionBeginFromState:(id)arg1;
- (void)logAppBackgroundTransition;
- (void)cancelInteractionMeasurement;
- (void)logAppStartupComplete:(_Bool)arg1;
- (void)logAppStartupComplete;
- (void)removeGestureContext;
- (void)addGestureContext:(id)arg1;
- (void)addLocaleContext;
- (void)addTimeZoneContext;
- (void)removeIKOMomentState;
- (void)updateIKOMomentState:(id)arg1;
- (void)removeIKOContext;
- (void)addIKOContext;
- (void)addWebpageContext:(id)arg1 referrer:(id)arg2;
- (void)removeNetworkConnectionContexts;
- (void)addNetworkConnectionContext:(id)arg1;
- (void)startMDXContext:(id)arg1;
- (void)startBackgroundNrdContext:(id)arg1;
- (void)startNrdContext:(id)arg1;
- (id)userInteractionSessionId;
- (void)startUserInteractionSession;
- (void)startUILogging;
- (void)startLaunchOrLogoutContexts:(id)arg1;
- (_Bool)isRecentCrash:(id)arg1;
- (void)lastRunCrashDetected:(id)arg1;
- (void)postNavNotificationIfNeeded;
- (void)popNavigation;
- (void)exchangeNavigationWithData:(id)arg1 navigateActionData:(id)arg2;
- (id)pushNavigationWithData:(id)arg1;
- (void)exchangeLastNavigationSessionWithData:(id)arg1;
- (void)endLastNavigationSession:(id)arg1;
- (id)startNavigationSessionWithData:(id)arg1;
- (id)resetNavigationStackWithViewStack:(id)arg1 andCommand:(id)arg2 endFocus:(_Bool)arg3;
- (void)endPerformanceTraceContext:(id)arg1;
- (void)logDebugInfo:(id)arg1 marker:(id)arg2;
- (void)logDebugInfo:(id)arg1;
- (void)logEvent:(id)arg1 withData:(id)arg2;
- (void)private_logEvent:(id)arg1 withData:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)endCommand:(id)arg1 withData:(id)arg2;
- (void)endCommand:(id)arg1;
- (void)beginCommand:(id)arg1 withData:(id)arg2;
- (void)endAction:(id)arg1 type:(id)arg2 withData:(id)arg3;
- (void)endAction:(id)arg1;
- (void)beginAction:(id)arg1 withData:(id)arg2;
- (void)attemptFlushedLogUploads;
- (id)nextLogFilename;
- (id)logFolder;
- (void)flushToDisk:(id)arg1;
- (id)libFileName;
- (void)send:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)uploadRequest;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)flushAndSave;
- (void)applicationWillBeDeactivated:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)configLoaded:(id)arg1;
- (void)configureQoeProfiling;
- (void)configureCLDebugLogging;
- (void)timeZoneChanged:(id)arg1;
- (void)severAllLogs;
- (void)handleLogout:(id)arg1;
- (id)startMetricSession:(id)arg1 color:(id)arg2 data:(id)arg3;
- (id)startMetricSession:(id)arg1;
- (void)externalRemoveContext:(id)arg1;
- (id)externalAddContext:(id)arg1 withData:(id)arg2;
- (void)removeContext:(id)arg1;
- (void)addExclusiveContext:(id)arg1 withData:(id)arg2;
- (void)addContext:(id)arg1 withData:(id)arg2;
- (void)addContext:(id)arg1;
- (void)endSession:(id)arg1 withData:(id)arg2;
- (void)endSession:(id)arg1;
- (void)startSession:(id)arg1 withData:(id)arg2;
- (void)startSession:(id)arg1;
- (id)endSessionId:(id)arg1 withData:(id)arg2;
- (id)startNonUniqueSession:(id)arg1 withData:(id)arg2;
- (void)removeLoggerIdForKey:(id)arg1;
- (void)setId:(id)arg1 forLoggerKey:(id)arg2;
- (id)loggerId:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


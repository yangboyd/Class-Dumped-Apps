//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSApiAppState-Protocol.h"

@class DYNSApiAppSequence_AppBackgroundSequence, DYNSApiAppSequence_AppForegroundSequence, DYNSApiAppStateLogger, DYNSDebugDebugManager, DYNSSyncCommonDeleteOutdatedNonMemberSyncLauncher, DYNSSyncCommonDeletePreviewedMembershipSyncLauncher, DYNSSyncUploadClientMessageFlightLogSyncLauncher, DYNSSyncV2CleanUpClearHistoryEnforcementSyncerLauncher, DYNSSyncV2CleanUpExpiredTopicsAndMessagesSyncerLauncher, DYNSSyncV2CleanUpRetentionHorizonEnforcementSyncerLauncher, DYNSSyncV2EntitiesEntityManagerUtils, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2EntitiesUserEntityManagerRegistry, JavaUtilConcurrentAtomicAtomicBoolean, JavaUtilConcurrentAtomicAtomicInteger, JavaUtilConcurrentAtomicAtomicReference, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, DYNSAnalyticsAppSessionSummaryLogger, DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsClearcutStreamzLogger, DYNSApiSyncClientStateController, DYNSApiWebChannelController, DYNSCommonAppFocusStateTracker, DYNSCommonServerTime, DYNSFlagsSharedConfiguration, DYNSNetworkConnectivityNetworkConnectionState, DYNSSyncApiSmartReplyManager, DYNSSyncPrefetchApiPrefetchManager, DYNSSyncStateUnviewedInvitedRoomsCountManager, DYNSSyncv2ApiStreamSyncManager, DYNSSyncv2ApiSyncDriver, DYNSSyncv2ApiUserDndSyncManager, DYNSSyncv2ApiWorldSyncEngine, DYNSTasksBackgroundTaskManager, DYNSTasksLowPriorityTasksController, DYNSTasksTaskThrottler, DYNSUsersApiUserReadTimestampManager, JavaUtilConcurrentExecutor;

@interface DYNSApiAppStateImpl : NSObject <DYNSApiAppState>
{
    DYNSApiAppSequence_AppForegroundSequence *appForegroundSequence_;
    DYNSApiAppSequence_AppBackgroundSequence *appBackgroundSequence_;
    id <DYNSCommonAppFocusStateTracker> appFocusStateTracker_;
    id <DYNSAnalyticsAppSessionSummaryLogger> appSessionSummaryLogger_;
    DYNSApiAppStateLogger *appStateLogger_;
    JavaUtilConcurrentAtomicAtomicInteger *foregroundCounter_;
    JavaUtilConcurrentAtomicAtomicBoolean *isInForeground_;
    id <DYNSTasksBackgroundTaskManager> backgroundTaskManager_;
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <DYNSAnalyticsClearcutStreamzLogger> clearcutStreamzLogger_;
    DYNSSyncV2CleanUpClearHistoryEnforcementSyncerLauncher *clearHistoryEnforcementSyncerLauncher_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
    DYNSDebugDebugManager *debugManager_;
    DYNSSyncCommonDeleteOutdatedNonMemberSyncLauncher *deleteOutdatedNonMemberSyncLauncher_;
    DYNSSyncCommonDeletePreviewedMembershipSyncLauncher *deletePreviewedMembershipSyncLauncher_;
    id <JavaUtilConcurrentExecutor> dataExecutor_;
    DYNSSyncV2EntitiesEntityManagerUtils *entityManagerUtils_;
    DYNSSyncV2CleanUpExpiredTopicsAndMessagesSyncerLauncher *expiredTopicsAndMessagesSyncerLauncher_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    id <DYNSTasksLowPriorityTasksController> lowPriorityTasksController_;
    id <DYNSNetworkConnectivityNetworkConnectionState> networkConnectionState_;
    id <DYNSSyncPrefetchApiPrefetchManager> prefetchManagerOnGroupsDisplay_;
    id <DYNSSyncPrefetchApiPrefetchManager> prefetchManagerOnWorldUpdate_;
    DYNSSyncV2CleanUpRetentionHorizonEnforcementSyncerLauncher *retentionHorizonEnforcementSyncerLauncher_;
    id <DYNSCommonServerTime> serverTime_;
    id <DYNSSyncApiSmartReplyManager> smartReplyManager_;
    id <DYNSSyncv2ApiStreamSyncManager> streamSyncManager_;
    id <DYNSApiSyncClientStateController> syncClientStateController_;
    id <DYNSSyncv2ApiSyncDriver> syncDriver_;
    id <DYNSTasksTaskThrottler> taskThrottler_;
    id <DYNSSyncStateUnviewedInvitedRoomsCountManager> unviewedInvitedRoomsCount_;
    DYNSSyncUploadClientMessageFlightLogSyncLauncher *uploadClientMessageFlightLogSyncLauncher_;
    id <DYNSSyncv2ApiUserDndSyncManager> userDndSyncManager_;
    DYNSSyncV2EntitiesUserEntityManagerRegistry *userEntityManagerRegistry_;
    id <DYNSUsersApiUserReadTimestampManager> userReadTimestampManager_;
    id <DYNSApiWebChannelController> webChannelController_;
    id <DYNSSyncv2ApiWorldSyncEngine> worldSyncEngine_;
    JavaUtilConcurrentAtomicAtomicReference *detailedBackgroundSyncStateRef_;
    int webChannelDisconnectDelayMs_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> allLowPriorityTasksDone_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getAllLowPriorityTasksDone;
- (void)markClientWorldViewResume;
- (void)setWebChannelDisconnectDelayMsForTestingWithInt:(int)arg1;
- (int)getTimesBroughtToForeground;
- (void)onAppOpenFromNotification;
- (_Bool)isInForeground;
- (void)startBackgroundSession;
- (void)onBackground;
- (void)onForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


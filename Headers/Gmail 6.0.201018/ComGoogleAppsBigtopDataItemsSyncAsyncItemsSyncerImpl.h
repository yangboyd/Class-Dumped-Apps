//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsSyncApiInternalItemsSyncer-Protocol.h"

@class ComGoogleAppsBigtopDataItemsChangesStorageItemChangeWriter, ComGoogleAppsBigtopDataItemsChangesStorageSyncCoordinator, ComGoogleAppsBigtopDataItemsClustersApiClientMissingClusterIdsComponent_ClientMissingClusterIdsHolder, ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue, ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueueProcessor, ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsSyncer, ComGoogleAppsBigtopDataItemsStorageChangeBatcher, ComGoogleAppsBigtopDataItemsStorageChangesCoordinator, ComGoogleAppsBigtopDataItemsStorageClustersCoordinator, ComGoogleAppsBigtopDataItemsStorageControllersClustersTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemSyncReasonsTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemsSyncStateTableController, ComGoogleAppsBigtopDataItemsStorageDefaultSyncSubscriptionMessagesLackingDetailsCalculator, ComGoogleAppsBigtopDataItemsStorageItemsEvictor, ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdatePublisher, ComGoogleAppsBigtopDataItemsStorageLabelCountsCoordinator, ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkProcessor, ComGoogleAppsBigtopDataItemsStorageSyncHealthRecorder, ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator, ComGoogleAppsBigtopDataItemsStorageSyncstatusClientSyncStateForDebuggingManager, ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsSyncStatusManager, ComGoogleAppsBigtopDataItemsSyncApiMessageFetchingOptions, ComGoogleAppsBigtopDataItemsSyncAsyncSyncTaskExecutor, ComGoogleAppsBigtopDataItemsSyncAsyncSyncToServerResponseHandler, ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController, ComGoogleAppsXplatStorageDbTransactionPromiseFactory, ComGoogleCommonBaseOptional, JBTSSyncSubscription, JavaUtilConcurrentAtomicAtomicBoolean, NSString;
@protocol ComGoogleAppsBigtopDataActiveexperimentsApiActiveExperiments, ComGoogleAppsBigtopDataItemsSyncApiInternalSyncAndBackfillScheduler, ComGoogleAppsBigtopDataItemsSyncAsyncExceptionandfailurehandlerSyncExceptionHandler, ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService, ComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesClient, ComGoogleAppsXplatDaggerAsyncProvider, ComGoogleAppsXplatObserveSettable, ComGoogleCommonTimeClock, ComGoogleCommonUtilConcurrentListenableFuture, JBTSettingsClient, JavaUtilSet, JavaxInjectProvider, XPTCountersApi;

@interface ComGoogleAppsBigtopDataItemsSyncAsyncItemsSyncerImpl : NSObject <ComGoogleAppsBigtopDataItemsSyncApiInternalItemsSyncer>
{
    id lock_;
    JavaUtilConcurrentAtomicAtomicBoolean *reregisterForNotifications_;
    ComGoogleAppsBigtopDataItemsStorageChangeBatcher *changeBatcher_;
    ComGoogleAppsBigtopDataItemsStorageChangesCoordinator *changesCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemSyncReasonsTableController *itemSyncReasonsTableController_;
    ComGoogleAppsBigtopDataItemsStorageDefaultSyncSubscriptionMessagesLackingDetailsCalculator *defaultSyncSubscriptionMessagesLackingDetailsCalculator_;
    ComGoogleAppsBigtopDataItemsStorageClustersCoordinator *clustersCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageItemsEvictor *itemsEvictor_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemsSyncStateTableController *itemsSyncStateTableController_;
    ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsSyncStatusManager *itemsSyncStatusManager_;
    ComGoogleAppsBigtopDataItemsStorageSyncstatusClientSyncStateForDebuggingManager *clientSyncStateForDebuggingManager_;
    id <ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService> itemsSyncService_;
    ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdatePublisher *itemsStorageUpdatePublisher_;
    ComGoogleAppsBigtopDataItemsStorageControllersClustersTableController *clustersTableController_;
    ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController *writeSequenceIdTableController_;
    ComGoogleAppsBigtopDataItemsStorageLabelCountsCoordinator *labelCountsCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkProcessor *localBulkOpWorkProcessor_;
    ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue *messageDetailsFetchQueue_;
    ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueueProcessor *messageDetailsFetchQueueProcessor_;
    ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsSyncer *messageDetailsSyncer_;
    ComGoogleAppsBigtopDataItemsChangesStorageSyncCoordinator *syncCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator *syncReasonsCoordinator_;
    id <JavaxInjectProvider> executor_;
    id <ComGoogleAppsBigtopDataItemsSyncApiInternalSyncAndBackfillScheduler> syncAndBackfillScheduler_;
    ComGoogleAppsBigtopDataItemsStorageSyncHealthRecorder *syncHealthRecorder_;
    ComGoogleAppsBigtopDataItemsSyncAsyncSyncTaskExecutor *syncTaskExecutor_;
    ComGoogleAppsBigtopDataItemsChangesStorageItemChangeWriter *itemChangeWriter_;
    id <ComGoogleCommonTimeClock> clock_;
    id <JavaxInjectProvider> targetItemsToSyncProvider_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> labelsToSyncProvider_;
    ComGoogleAppsBigtopDataItemsSyncApiMessageFetchingOptions *messageFetchingOptions_;
    id <ComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesClient> systemPropertiesClient_;
    ComGoogleCommonBaseOptional *starboxSyncClientId_;
    id <JavaxInjectProvider> pushNotificationConfig_;
    ComGoogleCommonBaseOptional *fetchDetailsDuringSyncListener_;
    JBTSSyncSubscription *syncSubscription_;
    id <ComGoogleAppsBigtopDataItemsSyncAsyncExceptionandfailurehandlerSyncExceptionHandler> syncExceptionHandler_;
    ComGoogleAppsBigtopDataItemsSyncAsyncSyncToServerResponseHandler *syncToServerResponseHandler_;
    id <JavaxInjectProvider> maxMailThreadsToSyncPerRequestProvider_;
    id <JavaxInjectProvider> hasPersistentStore_;
    id <ComGoogleAppsXplatObserveSettable> settableFiltersInitialSyncComplete_;
    id <JavaxInjectProvider> syncClientConfig_;
    ComGoogleAppsBigtopDataItemsClustersApiClientMissingClusterIdsComponent_ClientMissingClusterIdsHolder *clientMissingClusterIdsHolder_;
    id <ComGoogleAppsBigtopDataActiveexperimentsApiActiveExperiments> activeExperiments_;
    id <XPTCountersApi> countersApi_;
    id <ComGoogleAppsXplatObserveSettable> settableDocAttachmentsUpdated_;
    id <JBTSettingsClient> settingsClient_;
    id <JavaUtilSet> messageBodyFetchFutures_;
    ComGoogleCommonBaseOptional *preemptableCurrentSyncProgressFuture_;
    ComGoogleCommonBaseOptional *currentSyncProgressFuture_;
    ComGoogleCommonBaseOptional *currentMainSyncDataFuture_;
    ComGoogleCommonBaseOptional *currentHighestSyncedVersion_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> notifyMigrationCompletedFutureForTesting_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> deliberatelyOrphanedSyncThenExpungeStaleItemsFutureForTesting_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getDeliberatelyOrphanedSyncThenExpungeStaleItemsFutureForTesting;
- (id)getNotifyMigrationCompletedFutureForTesting;
- (id)initialSyncWithOrgJodaTimeInstant:(id)arg1 withJBTSTargetItemsToSync:(id)arg2 withComGoogleAppsBigtopDataItemsSyncConfigLabelIdsToSync:(id)arg3 withComGoogleCommonBaseSupplier:(id)arg4 withComGoogleAppsBigtopDataItemsItemsProto_RequestPriority:(id)arg5 withJBTRuntimeOptionsComponent_PushNotificationsSyncClientConfigValue:(id)arg6 withComGoogleCommonBaseOptional:(id)arg7;
- (id)getCurrentHighestSyncedVersion;
- (void)preemptForBackfill;
- (id)syncAndWaitForAllPendingChangesSyncedWithOrgJodaTimeInstant:(id)arg1 withJBTSConfigureSyncRequest_SyncMode:(id)arg2 withComGoogleAppsBigtopDataItemsItemsProto_RequestPriority:(id)arg3 withComGoogleAppsBigtopDataItemsItemsProto_SyncJoinMode:(id)arg4 withComGoogleAppsBigtopDataItemsItemsProto_SyncOptions:(id)arg5;
- (id)syncWithOrgJodaTimeInstant:(id)arg1 withJBTSConfigureSyncRequest_SyncMode:(id)arg2 withComGoogleAppsBigtopDataItemsItemsProto_RequestPriority:(id)arg3 withComGoogleAppsBigtopDataItemsItemsProto_SyncJoinMode:(id)arg4 withComGoogleAppsBigtopDataItemsItemsProto_SyncOptions:(id)arg5;
- (void)reregisterForInboxNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


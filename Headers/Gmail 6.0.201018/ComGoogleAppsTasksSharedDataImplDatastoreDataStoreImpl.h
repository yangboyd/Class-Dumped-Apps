//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedDataImplDatastoreApiDataStore-Protocol.h"

@class ComGoogleAppsTasksSharedDataImplBaseFetchConfig, ComGoogleAppsTasksSharedDataImplDatastoreDataCache, ComGoogleAppsTasksSharedDataImplDatastoreDataStoreImpl_PendingOperationsCache, ComGoogleAppsTasksSharedDataImplDatastoreUserActionsConsumer, ComGoogleCommonBaseOptional, NSString, TDLDataModelShard, TDLPlatformProtoLogger, TDLPlatformShardStorage_StorageConfig;
@protocol ComGoogleAppsTasksSharedDataImplExecutorApiTasksExecutor, ComGoogleAppsXplatUtilPerformanceclockPerformanceClock, JavaUtilSet, TDLPlatformRuntimeFlagsProvider;

@interface ComGoogleAppsTasksSharedDataImplDatastoreDataStoreImpl : NSObject <ComGoogleAppsTasksSharedDataImplDatastoreApiDataStore>
{
    ComGoogleAppsTasksSharedDataImplDatastoreDataCache *dataCache_;
    id <TDLPlatformRuntimeFlagsProvider> runtimeFlagsProvider_;
    TDLPlatformProtoLogger *protoLogger_;
    ComGoogleCommonBaseOptional *shardStorage_;
    id <ComGoogleAppsTasksSharedDataImplExecutorApiTasksExecutor> tasksExecutor_;
    ComGoogleAppsTasksSharedDataImplBaseFetchConfig *initialFetchConfig_;
    ComGoogleAppsTasksSharedDataImplDatastoreUserActionsConsumer *userActionsConsumer_;
    id <ComGoogleAppsXplatUtilPerformanceclockPerformanceClock> performanceClock_;
    TDLDataModelShard *shard_;
    TDLPlatformShardStorage_StorageConfig *initialStorageConfig_;
    ComGoogleAppsTasksSharedDataImplDatastoreDataStoreImpl_PendingOperationsCache *pendingOperationsCache_;
    id <JavaUtilSet> listeners_;
    _Bool isInitialized_;
    _Bool released_;
}

+ (void)initialize;
- (void)dealloc;
- (id)updateStoreWithTDLPlatformWriteContext:(id)arg1 withComGoogleAppsTasksSharedDataOperationUserAction:(id)arg2;
- (id)release__;
- (id)getPendingOperationsCache;
- (id)getDataCache;
- (void)registerListenerWithComGoogleAppsTasksSharedDataImplDatastoreApiDataStoreListener:(id)arg1;
- (id)clearEntitiesAndSyncWatermark;
- (id)clear;
- (id)updateClientSyncStateWithGTSClientSyncState:(id)arg1;
- (id)updateStoreWithTDLPlatformWriteContext:(id)arg1 withJavaUtilList:(id)arg2;
- (id)updateWithSyncedDataWithGTSClientSyncState:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withTDLTaskListId:(id)arg3;
- (id)loadDataFromStorage;
- (_Bool)isInitialized;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


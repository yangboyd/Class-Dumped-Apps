//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8ArgoCore13ACFDataSource_-Protocol.h"
#import "_TtP8ArgoCore17ACFLoggerDelegate_-Protocol.h"

@class NSMutableDictionary, NSString, PrimingModel;
@protocol OS_dispatch_group, OS_dispatch_queue, _TtP8ArgoCore8ACFModel_;

@interface DataBrokerObjectContext : NSObject <_TtP8ArgoCore17ACFLoggerDelegate_, _TtP8ArgoCore13ACFDataSource_>
{
    _Bool _isTest;
    NSString *_profileGuid;
    id <_TtP8ArgoCore8ACFModel_> _falcorModel;
    PrimingModel *_primingModel;
    NSString *_endpointPath;
    NSObject<OS_dispatch_group> *_listRefreshGroup;
    NSMutableDictionary *_falcorOperations;
    NSObject<OS_dispatch_queue> *_falcorOperationsAccessQueue;
}

+ (id)storageLocation;
+ (id)fileManagerQueue;
+ (_Bool)saveData:(id)arg1 toFilePath:(id)arg2 error:(inout id *)arg3;
+ (id)storageLocationForProfileGuid:(id)arg1 isTest:(_Bool)arg2;
+ (_Bool)entityIsShow:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *falcorOperationsAccessQueue; // @synthesize falcorOperationsAccessQueue=_falcorOperationsAccessQueue;
@property(retain, nonatomic) NSMutableDictionary *falcorOperations; // @synthesize falcorOperations=_falcorOperations;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *listRefreshGroup; // @synthesize listRefreshGroup=_listRefreshGroup;
@property(copy, nonatomic) NSString *endpointPath; // @synthesize endpointPath=_endpointPath;
@property(readonly, nonatomic) PrimingModel *primingModel; // @synthesize primingModel=_primingModel;
@property(readonly, nonatomic) id <_TtP8ArgoCore8ACFModel_> falcorModel; // @synthesize falcorModel=_falcorModel;
@property(nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(copy, nonatomic) NSString *profileGuid; // @synthesize profileGuid=_profileGuid;
- (void).cxx_destruct;
- (void)primingModel:(id)arg1 mergeEntities:(id)arg2;
- (id)fetchData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)mapQueryDict:(id)arg1 forPrimingDataType:(unsigned long long)arg2;
- (void)removeFalcorOperationForKey:(id)arg1;
- (id)falcorOperationForKey:(id)arg1;
- (void)cancelAndRemoveFalcorOperationForKey:(id)arg1;
- (void)addFalcorOperation:(id)arg1 forKey:(id)arg2;
- (void)dispatchSyncCleanup;
- (void)dealloc;
- (id)init;
- (id)cellForNonMemberTest:(id)arg1;
- (id)falcor:(id)arg1 callWithParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)falcor:(id)arg1 prePOSTWithPQLPathSets:(id)arg2;
- (id)falcor:(id)arg1 preCallWithKeyPaths:(id)arg2;
- (id)falcor:(id)arg1 getWithParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)falcor:(id)arg1 preGETWithPQLPathSets:(id)arg2;
- (id)falcor:(id)arg1 preGetWithKeyPaths:(id)arg2;
- (void)falcor:(id)arg1 logDebugUserInfo:(id)arg2;
- (void)falcor:(id)arg1 logDebug:(id)arg2;
- (void)falcor:(id)arg1 logInfo:(id)arg2;
- (void)falcor:(id)arg1 logError:(id)arg2;
- (_Bool)enableExNetworkLoggingInFalcor:(id)arg1;
- (_Bool)enableLoggingInFalcor:(id)arg1;
- (void)setupFalcor;
- (void)queueModified:(id)arg1;
- (void)playbackFinished:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)registerForNotificationsToImplicitlyRefreshLists;
- (void)deleteAllSavedModelDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllSavedModelData;
- (void)deleteSavedModelData;
- (_Bool)saveModelData:(inout id *)arg1;
- (void)saveModelDataForUpdatedBookmark;
- (void)saveModelData:(id)arg1 isTest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveModelDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreModelData:(id)arg1 isTest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)restoreModelData:(id)arg1 isTest:(_Bool)arg2 error:(id *)arg3;
- (id)primingModelStorageLocation;
- (id)falcorModelStorageLocation;
- (void)savePrimingModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)savePrimingModel:(id)arg1 error:(inout id *)arg2;
- (void)saveFalcorModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)saveFalcorModel:(id)arg1 error:(inout id *)arg2;
- (void)migrateFalcorModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)serializedFalcorModel:(id)arg1 error:(inout id *)arg2;
- (id)migrateFalcor:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (_Bool)forceClearCacheIfNecessary:(id)arg1;
- (void)setOnRampTasteInputs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerOnRampCompletion:(CDUnknownBlockType)arg1;
- (id)updateShowOperationForEntityId:(id)arg1 completionDetails:(CDUnknownBlockType)arg2;
- (void)updateShowForEntityId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)lolomoIdByRequest:(id)arg1;
- (void)myListAction:(id)arg1 entityId:(id)arg2 trackId:(id)arg3 requestId:(id)arg4;
- (void)removeFromMyList:(id)arg1 trackId:(id)arg2 requestId:(id)arg3;
- (void)remindMe:(id)arg1 trackId:(id)arg2 requestId:(id)arg3;
- (void)addToMyList:(id)arg1 trackId:(id)arg2 requestId:(id)arg3;
- (unsigned long long)myListStatus:(id)arg1;
- (void)getYellowSquareProperty:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setYellowSquareProperty:(id)arg1 keyValues:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setYellowSquareProperty:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)videoEntityOfClass:(Class)arg1 withId:(id)arg2;
- (id)renewOperationForObject:(id)arg1 updateKeys:(id)arg2 option:(long long)arg3 completionDetails:(CDUnknownBlockType)arg4;
- (id)updateObject:(id)arg1 updateKeys:(id)arg2 option:(long long)arg3 errorHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateObject:(id)arg1 updateKeys:(id)arg2 option:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateObject:(id)arg1 option:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatedObjectOfClass:(Class)arg1 baseFalcorKeyPath:(id)arg2 updateKeys:(id)arg3 option:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updatedObjectOfClass:(Class)arg1 baseFalcorKeyPath:(id)arg2 option:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updatedObjectOfClass:(Class)arg1 baseFalcorKeyPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)objectOfClass:(Class)arg1 baseFalcorKeyPathFormat:(id)arg2;
- (id)objectOfClass:(Class)arg1 baseFalcorKeyPath:(id)arg2;
- (id)shareSheetForEntityId:(id)arg1 trackId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)shareSheetToWatchForId:(id)arg1 trackId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)mutableSharePropertiesForId:(id)arg1 trackId:(id)arg2 toWatch:(_Bool)arg3;
- (id)shareSheetForEntityId:(id)arg1 trackId:(id)arg2 toWatch:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)localBoxartFilePathForEntityId:(id)arg1;
- (_Bool)isPreReleaseVideoId:(id)arg1;

@end


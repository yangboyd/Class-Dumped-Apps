//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, TMAKVStorage;

@interface BDPStorageManager : NSObject
{
    _Bool _usageTableExist;
    _Bool _inuseTableExist;
    _Bool _updateTableExist;
    _Bool _extensionTableExist;
    _Bool _usageRecordTableExist;
    TMAKVStorage *_storage;
    TMAKVStorage *_subsribeHistoryStorage;
    FMDatabaseQueue *_dbQueue;
    FMDatabaseQueue *_oldDBQueue;
}

+ (void)clearSharedManager;
+ (id)sharedManager;
+ (id)modelExtensionDataFromAppModel:(id)arg1;
+ (id)appModelExtensionFromData:(id)arg1;
+ (id)modelDataFromAppModel:(id)arg1;
+ (id)appModelFromData:(id)arg1;
+ (id)dateFromTimestamp:(long long)arg1;
+ (long long)currentTimestamp;
@property(nonatomic) _Bool usageRecordTableExist; // @synthesize usageRecordTableExist=_usageRecordTableExist;
@property(nonatomic) _Bool extensionTableExist; // @synthesize extensionTableExist=_extensionTableExist;
@property(nonatomic) _Bool updateTableExist; // @synthesize updateTableExist=_updateTableExist;
@property(nonatomic) _Bool inuseTableExist; // @synthesize inuseTableExist=_inuseTableExist;
@property(nonatomic) _Bool usageTableExist; // @synthesize usageTableExist=_usageTableExist;
@property(retain, nonatomic) FMDatabaseQueue *oldDBQueue; // @synthesize oldDBQueue=_oldDBQueue;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(retain, nonatomic) TMAKVStorage *subsribeHistoryStorage; // @synthesize subsribeHistoryStorage=_subsribeHistoryStorage;
@property(retain, nonatomic) TMAKVStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)clearAllTable;
- (void)updateProtection:(id)arg1 withAppId:(id)arg2;
- (id)queryProtectionWithAppId:(id)arg1;
- (void)batchInsertProtections:(id)arg1 updateProtections:(id)arg2;
- (void)batchDeleteProtectionRecordNotInAppIds:(id)arg1;
- (id)selectAllProtectedAppIds;
- (void)removeAllMetaAndPkgInfoWithAppId:(id)arg1;
- (void)clearPkgInfoTable;
- (id)appIdsOfPkgBeyondLimit:(unsigned long long)arg1 withReadType:(unsigned long long)arg2 isExcluded:(_Bool)arg3;
- (id)appIdsOfPkgBeyondLimit:(unsigned long long)arg1 withExcludedReadType:(unsigned long long)arg2;
- (id)appIdsOfPkgBeyondLimit:(unsigned long long)arg1 withReadType:(unsigned long long)arg2;
- (id)appIdsOfPkgReadType:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
- (void)deletePkgInfosOfAppId:(id)arg1;
- (void)deletePkgInfoOfAppId:(id)arg1 pkgName:(id)arg2;
- (void)updatePkgInfoAcessTimeWithStatus:(unsigned long long)arg1 ofAppId:(id)arg2 pkgName:(id)arg3 readType:(unsigned long long)arg4;
- (void)updatePkgInfoStatus:(unsigned long long)arg1 withAppId:(id)arg2 pkgName:(id)arg3 readType:(unsigned long long)arg4;
- (void)replaceInToPkgInfoWithStatus:(unsigned long long)arg1 withAppId:(id)arg2 pkgName:(id)arg3 readType:(unsigned long long)arg4;
- (long long)queryCountOfPkgInfoWithAppId:(id)arg1 readType:(unsigned long long)arg2;
- (id)queryPkgReadTypeOfAppId:(id)arg1 pkgName:(id)arg2;
- (unsigned long long)queryPkgInfoStatusOfAppId:(id)arg1 pkgName:(id)arg2;
- (double)queryRecentAccessTimeOfAppId:(id)arg1;
- (void)clearDebugAppTable;
- (void)deleteDebugAppModelOfAppId:(id)arg1;
- (void)updateDebugAppModel:(id)arg1;
- (id)queryDebugAppModelOfAppId:(id)arg1;
- (void)clearExtensionInfoTable;
- (id)getExtensionAppModelForAppID:(id)arg1;
- (void)setExtensionAppModel:(id)arg1 forAppID:(id)arg2;
- (id)allExtensionAppModel;
- (void)clearUpdateInfoTable;
- (id)getUpdateAppModelForAppID:(id)arg1;
- (void)setUpdateAppModel:(id)arg1 forAppID:(id)arg2;
- (id)allUpdateAppModel;
- (void)removeAllMetaModelForAppId:(id)arg1;
- (void)clearInuseInfoTable;
- (_Bool)hasInUseAppModelWithId:(id)arg1;
- (id)getInuseAppModelForAppID:(id)arg1;
- (void)setBatchInuseAppModels:(id)arg1;
- (void)setInuseAppModel:(id)arg1 forAppID:(id)arg2;
- (id)allInuseAppIDs;
- (id)allInuseAppModel;
- (void)clearUsageInfoTable;
- (long long)getLastLaunchTimeForAppID:(id)arg1;
- (void)setLastLaunchTime:(long long)arg1 forAppID:(id)arg2;
- (id)installedAppIds;
- (void)closeStorage;
- (void)updateToPkgV2TableIfNeeded:(id)arg1;
- (_Bool)createAllTables;
- (void)dealloc;
- (void)buildStorageManager;
- (id)init;
- (void)deleteOldUsageTableIfNeed;
- (void)deleteExpireUsageRecordByStartTime:(long long)arg1;
- (id)getUsageRecordByAppIDs:(id)arg1;
- (void)createUsageRecordWithAppID:(id)arg1 startTime:(long long)arg2 duration:(long long)arg3 scene:(id)arg4 subScene:(id)arg5;
- (void)deleteOldUpdatedModelWithAppId:(id)arg1;
- (id)queryOldUpdatedModels;
- (void)deleteOldInUsedModelWithAppId:(id)arg1;
- (id)queryOldInUsedModels;
- (void)removeOldVersionDB;
- (_Bool)isExistedOldVersionDB;
- (void)createOldDBQueueIfNeeded;

@end


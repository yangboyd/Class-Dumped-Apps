//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCacheClearing-Protocol.h"
#import "SCManagedDatastore-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL, SCCacheSizePolicy, SCCloudFSDiskUsedListenerAnnouncer, SCCloudFSLRUQueue, SCDataObjectContext, SCExperimentManager, SCMediaDownload;
@protocol OS_dispatch_semaphore, SCPerforming, SCSyncFileResolver;

@interface SCCloudFS : NSObject <SCManagedDatastore, SCCacheClearing>
{
    NSObject<OS_dispatch_semaphore> *_leaseSemaphore;
    NSMutableDictionary *_fileLeaseSetHashMap;
    SCCloudFSLRUQueue *_expiringQueues[4];
    NSMutableDictionary *_fileAttributesHashMap;
    NSMutableDictionary *_downloadRequestGroups;
    NSURL *_cacheURL;
    NSURL *_driveURL;
    long long _backingDiskUsedSize;
    NSMutableDictionary *_detailedDiskUsagePerEntity;
    id <SCPerforming> _performer;
    SCCloudFSDiskUsedListenerAnnouncer *_announcer;
    SCExperimentManager *_experimentManager;
    NSSet *_initialUnsyncedHashStrings;
    SCCacheSizePolicy *_cacheSizePolicy;
    _Bool _useTTL;
    long long _diskUsedSize;
    NSDictionary *_detailedDiskUsage;
    long long _diskSizeLimit;
    long long _recommendedSmallFileRestoreSize;
    long long _recommendedLargeFileRestoreSize;
}

@property(readonly, nonatomic) long long recommendedLargeFileRestoreSize; // @synthesize recommendedLargeFileRestoreSize=_recommendedLargeFileRestoreSize;
@property(readonly, nonatomic) long long recommendedSmallFileRestoreSize; // @synthesize recommendedSmallFileRestoreSize=_recommendedSmallFileRestoreSize;
@property(readonly, nonatomic) long long diskSizeLimit; // @synthesize diskSizeLimit=_diskSizeLimit;
@property(retain) NSDictionary *detailedDiskUsage; // @synthesize detailedDiskUsage=_detailedDiskUsage;
@property long long diskUsedSize; // @synthesize diskUsedSize=_diskUsedSize;
- (void).cxx_destruct;
- (id)reportMetrics;
- (void)handleEmergencyDiskConditionWithDispatchGroup:(id)arg1;
- (void)removeAllUserSessionDataAsync:(id)arg1;
- (void)removeExpiredContentAsync:(id)arg1 reason:(unsigned long long)arg2 dispatchGroup:(id)arg3;
- (id)kindName;
- (_Bool)_shouldEvictBasedOnTime:(double)arg1;
- (void)_subtractDiskUsageDetail:(unsigned long long)arg1 forEntityName:(id)arg2;
- (void)_addDiskUsageDetail:(unsigned long long)arg1 forEntityName:(id)arg2;
- (id)_baseURLForHashString:(id)arg1;
- (id)_hashSuffix:(id)arg1;
- (id)_hashPrefix:(id)arg1;
- (_Bool)_takeLeaseToken:(id)arg1 forHashString:(id)arg2 isSynced:(_Bool *)arg3;
- (void)_updateRecencyForEntity:(id)arg1;
- (id)_insertToExpiringQueueForHashString:(id)arg1 fileAttributes:(id)arg2;
- (long long)_storageSizeForHashString:(id)arg1;
- (void)_invalidateEntity:(id)arg1;
- (void)_markAsSyncedForEntity:(id)arg1;
- (_Bool)_evictForHashStringIfNoLease:(id)arg1 fileAttributes:(id)arg2;
- (void)_checkLRUIsInSyncWithFileAttributes;
- (void)_persistFileAttributes:(id)arg1 forHashString:(id)arg2;
- (void)_setFileAttributes:(id)arg1 forHashString:(id)arg2;
- (void)_setAndPersistFileAttributes:(id)arg1 forHashString:(id)arg2;
- (_Bool)_checkAndExpireItemsFromLRU;
- (void)_readStatsFromDrive;
- (void)_addToDriveForUUID:(id)arg1 storageSize:(long long)arg2 isSynced:(_Bool)arg3 entityName:(id)arg4 ttl:(double)arg5;
- (long long)_moveRepresentations:(id)arg1 forEntity:(id)arg2;
- (_Bool)_isAvailableLocallyForAllRepresentations:(id)arg1 baseURL:(id)arg2;
- (void)_setAndAnnounceDiskUsedSize:(long long)arg1;
- (long long)_cleanUpEntityAtHashString:(id)arg1;
- (void)_setRecommendedFileRestoreSize:(unsigned long long)arg1;
- (void)scrubDanglingEntitiesExcept:(id)arg1;
- (id)experimentManager;
- (id)downloadWithEntity:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2 performer:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)invalidateEntity:(id)arg1;
- (void)markAsSyncedForEntity:(id)arg1;
- (void)updateRecencyForEntity:(id)arg1;
- (void)revokeLeaseToken:(id)arg1 forUUID:(id)arg2;
- (void)cleanUpCacheWithMode:(unsigned long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)destroyCacheWithQueue_DO_NOT_USE:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)cleanUpCacheWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)totalSizeOfCacheFilesWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addEntity:(id)arg1 representations:(id)arg2 isSynced:(_Bool)arg3 synchronous:(_Bool)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (_Bool)addEntity:(id)arg1 representations:(id)arg2 isSynced:(_Bool)arg3;
- (id)resolveFileForEntity:(id)arg1;
- (id)temporaryFileURL;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDriveURL:(id)arg1 diskSizePolicy:(id)arg2 experimentManager:(id)arg3 useTTL:(_Bool)arg4 performer:(id)arg5;
- (void)showDiskSizeStats;
- (id)resolveSnapOverlayFileForSnap:(id)arg1;
- (id)resolveRenderedLowresMediaFileForSnap:(id)arg1;
- (id)renderedLowresMediaForSnap:(id)arg1 detail:(id)arg2;
- (id)resolveFileForSnap:(id)arg1;
- (id)resolveFileForSnapId_DO_NOT_USE:(id)arg1;
- (_Bool)addSnap:(id)arg1 mediaURL:(id)arg2 mediaOverlayURL:(id)arg3 isSnapSynced:(_Bool)arg4;
- (id)initWithDriveURL:(id)arg1 diskSizePolicy:(id)arg2 mediaDownload:(id)arg3 experimentManager:(id)arg4 useTTL:(_Bool)arg5 fileResolver:(id)arg6 dataObjectContext:(id)arg7;
@property(readonly, nonatomic) SCDataObjectContext *dataObjectContext;
- (void)setDataObjectContext:(id)arg1;
@property(readonly, nonatomic) id <SCSyncFileResolver> fileResolver;
- (void)setFileResolver:(id)arg1;
@property(readonly, nonatomic) SCMediaDownload *mediaDownload;
- (void)setMediaDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


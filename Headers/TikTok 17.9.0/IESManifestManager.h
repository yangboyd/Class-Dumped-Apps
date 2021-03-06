//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, IESEffectConfig, NSDictionary, NSMutableArray, NSMutableDictionary, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface IESManifestManager : NSObject
{
    _Bool _loadingOnlineAlgorithmModels;
    IESEffectConfig *_config;
    NSMutableDictionary *_effectRecords;
    NSRecursiveLock *_effectRecordsLock;
    NSMutableDictionary *_algorithmRecords;
    NSRecursiveLock *_algorithmRecordsLock;
    NSDictionary *_builtinAlgorithmRecords;
    NSDictionary *_onlineAlgorithmModels;
    NSRecursiveLock *_onlineAlgorithmModelsLock;
    NSMutableArray *_onlineAlgorithmModelsCallbacks;
    FMDatabaseQueue *_dbQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(retain, nonatomic) NSMutableArray *onlineAlgorithmModelsCallbacks; // @synthesize onlineAlgorithmModelsCallbacks=_onlineAlgorithmModelsCallbacks;
@property(nonatomic, getter=isLoadingOnlineAlgorithmModels) _Bool loadingOnlineAlgorithmModels; // @synthesize loadingOnlineAlgorithmModels=_loadingOnlineAlgorithmModels;
@property(retain, nonatomic) NSRecursiveLock *onlineAlgorithmModelsLock; // @synthesize onlineAlgorithmModelsLock=_onlineAlgorithmModelsLock;
@property(copy, nonatomic) NSDictionary *onlineAlgorithmModels; // @synthesize onlineAlgorithmModels=_onlineAlgorithmModels;
@property(copy, nonatomic) NSDictionary *builtinAlgorithmRecords; // @synthesize builtinAlgorithmRecords=_builtinAlgorithmRecords;
@property(retain, nonatomic) NSRecursiveLock *algorithmRecordsLock; // @synthesize algorithmRecordsLock=_algorithmRecordsLock;
@property(retain, nonatomic) NSMutableDictionary *algorithmRecords; // @synthesize algorithmRecords=_algorithmRecords;
@property(retain, nonatomic) NSRecursiveLock *effectRecordsLock; // @synthesize effectRecordsLock=_effectRecordsLock;
@property(retain, nonatomic) NSMutableDictionary *effectRecords; // @synthesize effectRecords=_effectRecords;
@property(retain, nonatomic) IESEffectConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)logForAlgorithmList:(id)arg1 startTime:(double)arg2;
- (void)vacuumDatabaseFileWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAlgorithmRecordsWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllAlgorithmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllEffectsNotLockedWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllEffectsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)totalSizeOfAlgorithmAllocated;
- (unsigned long long)totalSizeOfEffectsAllocated;
- (_Bool)isOnlineAlgorithmModelsLoaded;
- (void)loadOnlineAlgorithmModelsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadBuiltinAlgorithmRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)onlineAlgorithmRecordForName:(id)arg1;
- (id)builtinAlgorithmRecordForName:(id)arg1;
- (id)downloadedAlgorithmRecordForName:(id)arg1 version:(id)arg2;
- (id)effectRecordForEffectMD5:(id)arg1;
- (void)insertAlgorithmModel:(id)arg1 size:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertEffectModel:(id)arg1 effectSize:(unsigned long long)arg2 NSData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setupDatabaseCompletion:(CDUnknownBlockType)arg1;
- (_Bool)p_isAlgorithmRecordValid:(id)arg1;
- (_Bool)p_isEffectRecordValid:(id)arg1;
- (void)p_handleAlgorithmListResponse:(id)arg1 error:(id)arg2;
- (void)p_preloadAlgorithmsList;
- (void)p_preloadEffectList;
- (_Bool)p_createTable;
- (id)initWithConfig:(id)arg1;
- (void)updateRefCountForEffect:(id)arg1 byValue:(long long)arg2;
- (void)updateUseCountForEffect:(id)arg1 byValue:(long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBARAssetsStoring-Protocol.h>

@class NSFileManager, NSNumber, NSString;

@interface FBARFileCacheARAssetsStorage : NSObject <FBARAssetsStoring>
{
    struct mutex _fileCacheMutex;
    shared_ptr_232d0224 _fileCache;
    NSFileManager *_fileManager;
    unsigned long long _cacheMaxSize;
    NSString *_cacheBasePath;
    NSNumber *_latestCacheSizeUsageValue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_queryUsageWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_moveIntoStorageAssetWithIdentifier:(id)arg1 assetFileURL:(id)arg2 error:(id *)arg3 needsLock:(_Bool)arg4;
- (void)_removeAllAssetsSynchronous;
- (_Bool)_unsafeEnsureMigrationToCacheKey:(id)arg1 error:(id *)arg2;
- (_Bool)_ensureFileCacheAvailableForIdentifier:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryUsageWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isAssetStoredForIdentifier:(id)arg1;
- (void)storedAssetFileResourceForIdentifier:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveAssetWithIdentifierIntoStorage:(id)arg1 fromLocalFileResource:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithFileCache:(shared_ptr_232d0224)arg1 fileManager:(id)arg2 cacheMaxSize:(unsigned long long)arg3 cacheBasePath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


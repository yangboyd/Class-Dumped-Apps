//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDImageCache-Protocol.h"

@class NSString, SDImageCacheConfig;
@protocol OS_dispatch_queue, SDDiskCache, SDMemoryCache;

@interface SDImageCache : NSObject <SDImageCache>
{
    SDImageCacheConfig *_config;
    id <SDMemoryCache> _memoryCache;
    id <SDDiskCache> _diskCache;
    NSString *_diskCachePath;
    CDUnknownBlockType _additionalCachePathBlock;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (unsigned long long)imageOptionsFromCacheOptions:(unsigned long long)arg1;
+ (id)sharedImageCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(copy, nonatomic) CDUnknownBlockType additionalCachePathBlock; // @synthesize additionalCachePathBlock=_additionalCachePathBlock;
@property(copy, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) id <SDDiskCache> diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) id <SDMemoryCache> memoryCache; // @synthesize memoryCache=_memoryCache;
@property(copy, nonatomic) SDImageCacheConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)calculateSizeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)totalDiskCount;
- (unsigned long long)totalDiskSize;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)deleteOldFilesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearDiskOnCompletion:(CDUnknownBlockType)arg1;
- (void)clearMemory;
- (void)_removeImageFromDiskForKey:(id)arg1;
- (void)removeImageFromDiskForKey:(id)arg1;
- (void)removeImageFromMemoryForKey:(id)arg1;
- (void)removeImageForKey:(id)arg1 fromMemory:(_Bool)arg2 fromDisk:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)removeImageForKey:(id)arg1 fromDisk:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removeImageForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)queryCacheOperationForKey:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3 done:(CDUnknownBlockType)arg4;
- (id)queryCacheOperationForKey:(id)arg1 options:(unsigned long long)arg2 done:(CDUnknownBlockType)arg3;
- (id)queryCacheOperationForKey:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)diskImageForKey:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 context:(struct NSDictionary *)arg4;
- (id)diskImageForKey:(id)arg1 data:(id)arg2;
- (id)diskImageForKey:(id)arg1;
- (id)diskImageDataBySearchingAllPathsForKey:(id)arg1;
- (id)imageFromCacheForKey:(id)arg1;
- (id)imageFromDiskCacheForKey:(id)arg1;
- (id)imageFromMemoryCacheForKey:(id)arg1;
- (id)diskImageDataForKey:(id)arg1;
- (_Bool)_diskImageDataExistsWithKey:(id)arg1;
- (_Bool)diskImageDataExistsWithKey:(id)arg1;
- (void)diskImageExistsWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_storeImageDataToDisk:(id)arg1 forKey:(id)arg2;
- (void)storeImageDataToDisk:(id)arg1 forKey:(id)arg2;
- (void)storeImageToMemory:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 toMemory:(_Bool)arg4 toDisk:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)storeImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 toDisk:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)storeImage:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)migrateDiskCacheDirectory;
- (id)userCacheDirectory;
- (id)cachePathForKey:(id)arg1;
- (void)dealloc;
- (id)initWithNamespace:(id)arg1 diskCacheDirectory:(id)arg2 config:(id)arg3;
- (id)initWithNamespace:(id)arg1 diskCacheDirectory:(id)arg2;
- (id)initWithNamespace:(id)arg1;
- (id)init;
- (void)clearWithCacheType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)containsImageForKey:(id)arg1 cacheType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeImageForKey:(id)arg1 cacheType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)storeImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 cacheType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)queryImageForKey:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


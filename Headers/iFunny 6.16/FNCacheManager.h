//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FNCacheManager : NSObject
{
    NSMutableArray *contentCache;
    NSMutableArray *thumbCache;
    NSMutableArray *rageFaceCache;
    NSMutableDictionary *cacheInfo;
    NSString *cachePath;
    NSString *cacheInfoPath;
    _Bool _shouldCache;
}

+ (void)loadImageWithPath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)instance;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
- (void)clearCache;
- (id)pathForURL:(id)arg1 cacheMode:(int)arg2;
- (void)removeDataWithoutThreadFromCacheForUrl:(id)arg1 cacheMode:(int)arg2;
- (void)removeDataFromCacheForUrl:(id)arg1 cacheMode:(int)arg2;
- (void)removeDataFromCacheForRageFace:(id)arg1;
- (id)dataPathForUrl:(id)arg1 forRageFace:(id)arg2 cacheMode:(int)arg3 completed:(id *)arg4;
- (id)dataPathForUrl:(id)arg1 cacheMode:(int)arg2 completed:(id *)arg3;
- (id)dataPathForUrl:(id)arg1 cacheMode:(int)arg2;
- (id)dataPathForRageFace:(id)arg1;
- (void)cacheDataInCurrentThread:(id)arg1 forUrl:(id)arg2 cacheMode:(int)arg3;
- (void)cacheData:(id)arg1 forUrl:(id)arg2 forRageFace:(id)arg3 cacheMode:(int)arg4 completed:(_Bool)arg5 inMainThread:(_Bool)arg6;
- (void)cacheData:(id)arg1 forUrl:(id)arg2 cacheMode:(int)arg3 completed:(_Bool)arg4;
- (void)cacheData:(id)arg1 forUrl:(id)arg2 cacheMode:(int)arg3;
- (void)cacheData:(id)arg1 forRageFace:(id)arg2;
- (void)saveCacheInfo;
- (id)init;

@end


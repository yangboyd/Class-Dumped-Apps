//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTCacheItem-Protocol.h"

@class GBTCacheItemDownload, GBTCacheItemFile, NSDate, NSString, NSURL;

@interface GBTCacheItemImpl : NSObject <GBTCacheItem>
{
    NSString *_cacheKey;
    NSDate *_lastAccessed;
    GBTCacheItemDownload *_download;
    GBTCacheItemFile *_file;
}

+ (id)errorWithCode:(long long)arg1;
+ (id)itemInDirectory:(id)arg1 withFileManager:(id)arg2 error:(id *)arg3;
+ (void)writeCacheKey:(id)arg1 forFile:(id)arg2;
+ (id)findCacheItemsInDirectory:(id)arg1 withFileManager:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) GBTCacheItemFile *file; // @synthesize file=_file;
@property(readonly, nonatomic) GBTCacheItemDownload *download; // @synthesize download=_download;
@property(retain, nonatomic) NSDate *lastAccessed; // @synthesize lastAccessed=_lastAccessed;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void)cachedWithFile:(id)arg1;
@property(readonly, nonatomic) NSURL *itemDirectory;
@property(readonly, nonatomic) NSDate *cachedDate;
@property(readonly, nonatomic) unsigned long long sizeInBytes;
@property(readonly, nonatomic) NSURL *fileURL;
- (id)initWithCacheKey:(id)arg1 lastAccessed:(id)arg2;
- (id)initWithCacheKey:(id)arg1 file:(id)arg2 lastAccessed:(id)arg3;
- (id)initWithCacheKey:(id)arg1 download:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


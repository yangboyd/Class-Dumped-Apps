//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PXImageFileCache : NSObject
{
    NSString *_cacheDirectory;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _jpegCompressionQuality;
}

+ (id)defaultCacheDirectoryPathWithName:(id)arg1;
@property double jpegCompressionQuality; // @synthesize jpegCompressionQuality=_jpegCompressionQuality;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, copy, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
- (void).cxx_destruct;
- (id)imagePathForURL:(id)arg1;
- (void)sync;
- (void)performBlockSync:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)cachedImageForURL:(id)arg1;
- (void)removeAllCachedImages;
- (void)removeCachedImageForURL:(id)arg1;
- (void)cachedImageForURLAsync:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setCachedImageData:(id)arg1 forURL:(id)arg2;
- (void)setCachedImage:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (id)initWithCacheDirectoryPath:(id)arg1;

@end


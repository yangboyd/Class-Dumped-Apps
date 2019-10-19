//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTImageService.h"

#import "ELMImageDownloader-Protocol.h"

@class GIMMe, NSHashTable, NSString, YTImageDiskCache, YTImageMemoryCache, YTVolatileCache;
@protocol YTImageSelectionStrategy, YTThumbnailLatencyLogger;

@interface YTImageServiceImpl : YTImageService <ELMImageDownloader>
{
    id <YTImageSelectionStrategy> _imageSelectionStrategy;
    NSHashTable *_metricsObservers;
    YTImageMemoryCache *_memoryDecodedCache;
    YTImageDiskCache *_diskDataCache;
    _Bool _enforceCacheControlHeaders;
    id <YTThumbnailLatencyLogger> _latencyLogger;
    YTVolatileCache *_fileFetchDates;
}

+ (void)clearImageCacheAsyncWithGimme:(id)arg1;
- (void).cxx_destruct;
- (int)ytiLatencyImageTypeFromCacheType:(long long)arg1;
- (void)logLatencyInfoFromByteSize:(unsigned long long)arg1 loggingNonce:(id)arg2;
- (void)logLatencyInfoFromImageMetrics:(id)arg1 loggingNonce:(id)arg2;
- (void)retryCacheErrorForURL:(id)arg1 metrics:(id)arg2 cacheType:(int)arg3 loggingNonce:(id)arg4 options:(unsigned long long)arg5 responseBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (id)imageWithData:(id)arg1 options:(unsigned long long)arg2;
- (void)notifyImageServiceRequestDidCompleteWithMetrics:(id)arg1;
- (CDUnknownBlockType)wrappedErrorBlockWithMetrics:(id)arg1 loggingNonce:(id)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)wrappedResponseBlockWithMetrics:(id)arg1 loggingNonce:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)wrappedNoMetricsResponseBlock:(CDUnknownBlockType)arg1;
- (void)setCacheByCacheKey:(id)arg1 cachedImage:(id)arg2 cachedData:(id)arg3;
- (void)performNetworkImageRequestWithURL:(id)arg1 cachedImage:(id)arg2 cachedData:(id)arg3 loggingNonce:(id)arg4 options:(unsigned long long)arg5 responseBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7 metrics:(id)arg8;
- (_Bool)shouldUseCachedImage:(id)arg1 forURL:(id)arg2;
- (void)makeImageRequestWithURL:(id)arg1 metrics:(id)arg2 loggingNonce:(id)arg3 options:(unsigned long long)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)removeAllImages;
- (void)removeMetricsObserver:(id)arg1;
- (void)addMetricsObserver:(id)arg1;
- (void)refreshImageCacheEntries:(id)arg1 image:(id)arg2;
- (void)invalidateImageCacheEntries:(id)arg1;
- (id)cachedImageWithURL:(id)arg1;
- (_Bool)isCachedImageRequestWithURLs:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)makeImageRequestWithURLs:(id)arg1 targetSize:(struct CGSize)arg2 options:(unsigned long long)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeImageRequestWithURLs:(id)arg1 targetSize:(struct CGSize)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)makeImageRequestWithURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (unsigned long long)imageServiceOptions;
- (id)animatedImageWithData:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 targetSize:(struct CGSize)arg2 callbackQueue:(id)arg3 downloadProgress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelImageDownloadForIdentifier:(id)arg1;
- (void)cachedImageWithURL:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


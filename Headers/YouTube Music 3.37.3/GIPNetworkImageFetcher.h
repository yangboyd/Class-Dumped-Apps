//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPPersistentCache, GTMSessionFetcherService, NSMutableDictionary;

@interface GIPNetworkImageFetcher : NSObject
{
    _Bool _shouldValidateImageData;
    _Bool _retryEnabled;
    Class _imageClass;
    double _scale;
    GIPPersistentCache *_cache;
    NSMutableDictionary *_fetchesInProgress;
    GTMSessionFetcherService *_fetcherService;
}

+ (void)dispatchSync:(CDUnknownBlockType)arg1;
+ (void)dispatchAsync:(CDUnknownBlockType)arg1;
+ (id)sharedDispatchQueue;
@property(retain, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(retain, nonatomic) NSMutableDictionary *fetchesInProgress; // @synthesize fetchesInProgress=_fetchesInProgress;
@property(retain, nonatomic) GIPPersistentCache *cache; // @synthesize cache=_cache;
@property(nonatomic, getter=isRetryEnabled) _Bool retryEnabled; // @synthesize retryEnabled=_retryEnabled;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool shouldValidateImageData; // @synthesize shouldValidateImageData=_shouldValidateImageData;
@property(nonatomic) Class imageClass; // @synthesize imageClass=_imageClass;
- (void).cxx_destruct;
- (_Bool)isFetcherInProgress:(id)arg1 forOwner:(id)arg2;
- (void)removeFetcherInProgress:(id)arg1 forOwner:(id)arg2;
- (void)addFetcherInProgress:(id)arg1 forOwner:(id)arg2;
- (void)cancelAllFetchesForOwner:(id)arg1;
- (void)invokeHandlerForFetcher:(id)arg1;
- (void)bridgeInvokeHandlerForFetcher:(id)arg1 withImage:(id)arg2 error:(id)arg3;
- (id)imageWithData:(id)arg1;
- (_Bool)isValidByteArray:(id)arg1 firstTwoBytes:(const char *)arg2 lastTwoBytes:(const char *)arg3;
- (_Bool)isPNGImageValid:(id)arg1;
- (_Bool)isJPEGImageValid:(id)arg1;
- (void)beginFetch:(id)arg1;
- (_Bool)fetchImageURL:(id)arg1 callbackQueue:(id)arg2 owner:(id)arg3 authorizer:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)fetchImageURLOnMainQueue:(id)arg1 owner:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fetchImageURL:(id)arg1 owner:(id)arg2 authorizer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchImageURL:(id)arg1 owner:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)backgroundCachedLengthForURL:(id)arg1;
- (long long)cachedFetchedLengthForURL:(id)arg1;
- (id)backgroundCachedImageForURL:(id)arg1;
- (id)cachedImageForURL:(id)arg1;
- (id)initWithCacheName:(id)arg1 fetcherService:(id)arg2;
- (id)initWithCacheName:(id)arg1;
- (id)init;

@end


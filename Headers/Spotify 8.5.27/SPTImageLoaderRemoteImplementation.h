//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTImageLoaderRemote-Protocol.h"
#import "SPTImageLoaderRequestDelegate-Protocol.h"

@class NSMutableArray, NSString, SPTDataLoader, SPTImageLoaderCache, SPTImageLoaderRegistry, SPTPersistentCache;

@interface SPTImageLoaderRemoteImplementation : NSObject <SPTDataLoaderDelegate, SPTImageLoaderRequestDelegate, SPTImageLoaderRemote>
{
    _Bool _offline;
    CDUnknownBlockType _persistentKeyBlock;
    SPTPersistentCache *_persistentCache;
    SPTImageLoaderCache *_sharedImageCache;
    NSMutableArray *_requests;
    SPTDataLoader *_dataLoader;
    SPTImageLoaderRegistry *_imageLoaderRegistry;
    struct CGSize _maximumImageSize;
}

@property(readonly, nonatomic) SPTImageLoaderRegistry *imageLoaderRegistry; // @synthesize imageLoaderRegistry=_imageLoaderRegistry;
@property(nonatomic) struct CGSize maximumImageSize; // @synthesize maximumImageSize=_maximumImageSize;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(nonatomic) __weak SPTImageLoaderCache *sharedImageCache; // @synthesize sharedImageCache=_sharedImageCache;
@property(nonatomic) __weak SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(readonly, copy, nonatomic) CDUnknownBlockType persistentKeyBlock; // @synthesize persistentKeyBlock=_persistentKeyBlock;
@property(getter=isOffline) _Bool offline; // @synthesize offline=_offline;
- (void).cxx_destruct;
- (id)init;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)imageLoaderRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)imageLoaderRequest:(id)arg1 didLoadImageData:(id)arg2;
- (id)persistentKeyPrefixForURL:(id)arg1;
- (id)extractImageRequestFromRequest:(id)arg1;
- (id)nsErrorWithCode:(long long)arg1;
- (id)decodeImage:(id)arg1 toSize:(struct CGSize)arg2 allowUpscaling:(_Bool)arg3;
- (void)loadRequest:(id)arg1;
- (void)removeRequest:(id)arg1;
- (id)provideImageLoaderRequestForURL:(id)arg1 sourceIdentifier:(id)arg2 downloadSize:(struct CGSize)arg3 requestedSize:(struct CGSize)arg4 allowUpscaling:(_Bool)arg5 context:(id)arg6 callback:(id)arg7 imageLoaderRegistry:(id)arg8;
- (void)imageLoaded:(id)arg1 forRequest:(id)arg2;
- (void)doExtendedCacheLookup:(id)arg1;
- (id)persistentKeyForURL:(id)arg1 size:(struct CGSize)arg2;
- (void)cancelAllLoads;
- (void)downloadImageWithURL:(id)arg1 sourceIdentifier:(id)arg2 size:(struct CGSize)arg3 allowUpscaling:(_Bool)arg4 persistKey:(id)arg5 context:(id)arg6 callback:(id)arg7;
- (id)loadImageForURL:(id)arg1 sourceIdentifier:(id)arg2 size:(struct CGSize)arg3 allowUpscaling:(_Bool)arg4 context:(id)arg5 callback:(id)arg6 persistenceKey:(id)arg7;
- (id)initWithDataLoader:(id)arg1 persistentCache:(id)arg2 memoryCache:(id)arg3 imageLoaderRegistry:(id)arg4 persistentKeyBlock:(CDUnknownBlockType)arg5 maximumImageSize:(struct CGSize)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


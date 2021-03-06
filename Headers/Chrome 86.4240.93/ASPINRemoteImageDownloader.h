//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/ASImageCacheProtocol-Protocol.h>
#import <ChromeInternal/ASImageDownloaderProtocol-Protocol.h>
#import <ChromeInternal/ELMImageDownloader-Protocol.h>
#import <ChromeInternal/PINRemoteImageManagerAlternateRepresentationProvider-Protocol.h>

@class NSString;

@interface ASPINRemoteImageDownloader : NSObject <ELMImageDownloader, PINRemoteImageManagerAlternateRepresentationProvider, ASImageCacheProtocol, ASImageDownloaderProtocol>
{
}

+ (void)_performWithCallbackQueue:(id)arg1 work:(CDUnknownBlockType)arg2;
+ (id)PINRemoteImageManagerWithConfiguration:(id)arg1 imageCache:(id)arg2;
+ (void)setSharedPreconfiguredRemoteImageManager:(id)arg1;
+ (void)setSharedImageManagerWithConfiguration:(id)arg1 imageCache:(id)arg2;
+ (void)setSharedImageManagerWithConfiguration:(id)arg1;
+ (id)sharedDownloader;
- (id)alternateRepresentationWithData:(id)arg1 options:(unsigned long long)arg2;
- (void)setPriority:(unsigned long long)arg1 withDownloadIdentifier:(id)arg2;
- (void)setProgressImageBlock:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2 withDownloadIdentifier:(id)arg3;
- (void)cancelImageDownloadWithResumePossibilityForIdentifier:(id)arg1;
- (void)cancelImageDownloadForIdentifier:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 priority:(unsigned long long)arg2 callbackQueue:(id)arg3 downloadProgress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)downloadImageWithURL:(id)arg1 callbackQueue:(id)arg2 downloadProgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clearFetchedImageFromCacheWithURL:(id)arg1;
- (void)cachedImageWithURL:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)synchronouslyFetchedCachedImageWithURL:(id)arg1;
- (id)animatedImageWithData:(id)arg1;
- (_Bool)sharedImageManagerSupportsMemoryRemoval;
- (id)sharedPINRemoteImageManager;
- (id)downloadImageWithURL:(id)arg1 targetSize:(struct CGSize)arg2 callbackQueue:(id)arg3 downloadProgress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


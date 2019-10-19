//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSURL;
@protocol ASAnimatedImageProtocol, OS_dispatch_queue;

@protocol ASImageDownloaderProtocol <NSObject>
- (void)cancelImageDownloadForIdentifier:(id)arg1;
- (id)downloadImageWithURL:(NSURL *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 downloadProgress:(void (^)(double))arg3 completion:(void (^)(id <ASImageContainerProtocol>, NSError *, id, id))arg4;

@optional
- (void)setPriority:(unsigned long long)arg1 withDownloadIdentifier:(id)arg2;
- (void)setProgressImageBlock:(void (^)(UIImage *, double, id))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 withDownloadIdentifier:(id)arg3;
- (id <ASAnimatedImageProtocol>)animatedImageWithData:(NSData *)arg1;
- (void)cancelImageDownloadWithResumePossibilityForIdentifier:(id)arg1;
- (id)downloadImageWithURL:(NSURL *)arg1 priority:(unsigned long long)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 downloadProgress:(void (^)(double))arg4 completion:(void (^)(id <ASImageContainerProtocol>, NSError *, id, id))arg5;
@end


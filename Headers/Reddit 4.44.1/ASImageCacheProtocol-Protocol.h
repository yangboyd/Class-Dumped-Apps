//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, OS_dispatch_queue;
@protocol ASImageContainerProtocol;

@protocol ASImageCacheProtocol <NSObject>
- (void)cachedImageWithURL:(NSURL *)arg1 callbackQueue:(OS_dispatch_queue *)arg2 completion:(void (^)(id <ASImageContainerProtocol>))arg3;

@optional
- (void)clearFetchedImageFromCacheWithURL:(NSURL *)arg1;
- (id <ASImageContainerProtocol>)synchronouslyFetchedCachedImageWithURL:(NSURL *)arg1;
@end


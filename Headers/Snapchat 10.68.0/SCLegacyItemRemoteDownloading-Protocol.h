//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol NSCopying, OS_dispatch_queue;

@protocol SCLegacyItemRemoteDownloading <NSObject>
- (void)downloadItem:(NSObject<NSCopying> *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSData *, NSError *))arg3 retryCount:(unsigned long long)arg4;
@end


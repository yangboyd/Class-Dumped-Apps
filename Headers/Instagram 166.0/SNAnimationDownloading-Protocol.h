//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSObject, SNAnalyticsData, SNPlaybackItem;
@protocol NSObject, OS_dispatch_queue;

@protocol SNAnimationDownloading <NSObject>
- (void)cancelAnimationDownload:(id <NSObject>)arg1;
- (id <NSObject>)downloadAnimationWithPlaybackItem:(SNPlaybackItem *)arg1 analyticsData:(SNAnalyticsData *)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(SNAnimationDownloadingResponseModel *, NSError *, NSString *))arg4;
@end


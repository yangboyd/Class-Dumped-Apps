//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSError, NSString;

@protocol YTOfflineVideoStreamsDownloadControllerDelegate <NSObject>
- (void)fetchVideoWithID:(NSString *)arg1 responseBlock:(void (^)(YTOfflineVideoStreamsDownloadRequest *))arg2 errorBlock:(void (^)(NSError *))arg3;
- (void)backgroundTaskDidRestoreWithVideoID:(NSString *)arg1;
- (void)downloadDidFailWithVideoID:(NSString *)arg1 shouldAttemptRetry:(_Bool)arg2 offliningFailureReason:(int)arg3 error:(NSError *)arg4;
- (void)downloadDidCancelWithVideoID:(NSString *)arg1;
- (void)downloadDidCompleteWithVideoID:(NSString *)arg1 bytesDownloaded:(unsigned long long)arg2;
- (void)downloadDidPauseWithVideoID:(NSString *)arg1;
- (void)downloadDidProgressWithVideoID:(NSString *)arg1 bytesDownloaded:(unsigned long long)arg2 estimatedTotalBytes:(unsigned long long)arg3;
- (void)downloadDidStartWithVideoID:(NSString *)arg1;
@end


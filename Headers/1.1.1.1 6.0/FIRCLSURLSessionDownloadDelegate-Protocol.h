//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRCLSURLSessionDataDelegate-Protocol.h"

@class FIRCLSURLSessionDownloadTask, NSURL;

@protocol FIRCLSURLSessionDownloadDelegate <FIRCLSURLSessionDataDelegate>
- (void)downloadTask:(FIRCLSURLSessionDownloadTask *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
@end


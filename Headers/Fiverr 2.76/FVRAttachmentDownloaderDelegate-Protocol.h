//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FVRAttachmentDownloader, NSError, NSString;

@protocol FVRAttachmentDownloaderDelegate <NSObject>
- (void)attachmentDownloader:(FVRAttachmentDownloader *)arg1 didFinishDownloadWithData:(NSString *)arg2;
- (void)attachmentDownloader:(FVRAttachmentDownloader *)arg1 didFailWithError:(NSError *)arg2;

@optional
- (void)attachmentDownloaderDidStartDownloading:(FVRAttachmentDownloader *)arg1;
@end


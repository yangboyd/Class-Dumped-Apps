//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShortsPhotoLibraryAssetAlertController-Protocol.h"

@class NSString, YTEditDownloadDialogController, YTEditRetryDownloadDialogController;

@interface YTShortsDefaultPhotoLibraryAssetAlertController : NSObject <YTShortsPhotoLibraryAssetAlertController>
{
    YTEditDownloadDialogController *_downloadDialogController;
    YTEditRetryDownloadDialogController *_retryDialogController;
}

- (void).cxx_destruct;
- (void)presentRetryDialogWithRetryBlock:(CDUnknownBlockType)arg1 cancellationBlock:(CDUnknownBlockType)arg2;
- (void)presentAlertForError:(id)arg1;
- (void)dismissDownloadDialog;
- (void)setDownloadDialogProgress:(double)arg1;
- (void)presentDownloadDialogWithCancellationBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool isShowingDownloadDialog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


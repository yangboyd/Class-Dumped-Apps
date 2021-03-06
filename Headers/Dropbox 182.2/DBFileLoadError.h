//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBGenericAPIError.h>

@class DBFILESDownloadError, DBFILESDownloadZipError, DBFILESGetThumbnailBatchError, DBFILESPreviewError, DBFILESThumbnailError;

@interface DBFileLoadError : DBGenericAPIError
{
    DBFILESDownloadError *_v2DownloadError;
    DBFILESDownloadZipError *_v2DownloadZipError;
    DBFILESPreviewError *_v2PreviewError;
    DBFILESThumbnailError *_v2ThumbnailError;
    DBFILESGetThumbnailBatchError *_v2ThumbnailBatchError;
}

+ (id)errorWithThumbnailBatchRouteError:(id)arg1 requestError:(id)arg2;
+ (id)errorWithThumbnailRouteError:(id)arg1 requestError:(id)arg2;
+ (id)errorWithPreviewRouteError:(id)arg1 requestError:(id)arg2;
+ (id)errorWithDownloadZipRouteError:(id)arg1 requestError:(id)arg2;
+ (id)errorWithDownloadRouteError:(id)arg1 requestError:(id)arg2;
+ (id)errorWithV1Error:(id)arg1;
+ (id)errorWithMetadataError:(id)arg1;
- (void).cxx_destruct;
- (id)v1ErrorEquivalent;
- (id)localizedDescription;
@property(readonly, nonatomic) _Bool isRetryable;
@property(readonly, nonatomic) _Bool isUnsupportedWebKitFileError;
@property(readonly, nonatomic) _Bool isOpenWithError;
@property(readonly, nonatomic) _Bool isPreviewPendingError;
@property(readonly, nonatomic) _Bool isNonPreviewableCloudDocError;
@property(readonly, nonatomic) _Bool isGenericNotPreviewableError;
@property(readonly, nonatomic) _Bool isFileTooBigToPreviewError;
@property(readonly, nonatomic) _Bool isFileLoadFailedError;
@property(readonly, nonatomic) _Bool isFileViewerUnableToLoadError;
@property(readonly, nonatomic) _Bool isInsufficientDiskSpaceError;
@property(readonly, nonatomic) _Bool isUnthumbnailableError;
@property(readonly, nonatomic) _Bool isPathNotFoundError;
- (id)initForUnsupportedWebKitFile;
- (id)initForOpenWith;
- (id)initForNonPreviewableCloudDoc;
- (id)initForGenericNotPreviewable;
- (id)initForFileTooBigToPreview;
- (id)initForFileLoadFailed;
- (id)initForFileViewerUnableToLoad;
- (id)initForInsufficientDiskSpace;
- (id)initWithThumbnailBatchRouteError:(id)arg1 requestError:(id)arg2;
- (id)initWithThumbnailRouteError:(id)arg1 requestError:(id)arg2;
- (id)initWithPreviewRouteError:(id)arg1 requestError:(id)arg2;
- (id)initWithDownloadZipRouteError:(id)arg1 requestError:(id)arg2;
- (id)initWithDownloadRouteError:(id)arg1 requestError:(id)arg2;
@property(readonly, nonatomic) _Bool isPSPDFUnableToOpenError;
- (id)initForPSPDFUnableToOpen;

@end


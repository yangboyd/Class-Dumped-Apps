//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface YTIOfflineColdConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool androidAccessTransferDataFromOfflineStore; // @dynamic androidAccessTransferDataFromOfflineStore;
@property(nonatomic) _Bool androidDisablePlaylistAutoSyncOnStartupWhenStale; // @dynamic androidDisablePlaylistAutoSyncOnStartupWhenStale;
@property(nonatomic) _Bool androidEnableFreemiumDownload; // @dynamic androidEnableFreemiumDownload;
@property(nonatomic) _Bool androidEnableOfflineAsyncApi; // @dynamic androidEnableOfflineAsyncApi;
@property(nonatomic) _Bool androidEnableOfflineDatabaseWalMode; // @dynamic androidEnableOfflineDatabaseWalMode;
@property(nonatomic) _Bool androidEnablePartialPlayback; // @dynamic androidEnablePartialPlayback;
@property(nonatomic) _Bool androidEnablePartialPlaybackWithoutOutOfBufferSeek; // @dynamic androidEnablePartialPlaybackWithoutOutOfBufferSeek;
@property(nonatomic) _Bool androidFixPlayerResponseInvalidation; // @dynamic androidFixPlayerResponseInvalidation;
@property(nonatomic) _Bool androidFixedRefreshActions; // @dynamic androidFixedRefreshActions;
@property(nonatomic) int androidFreemiumDownloadDefaultQuota; // @dynamic androidFreemiumDownloadDefaultQuota;
@property(nonatomic) _Bool androidHandleTransferSqlException; // @dynamic androidHandleTransferSqlException;
@property(nonatomic) long long androidOfflineResumePlaybackSyncDeadlineSeconds; // @dynamic androidOfflineResumePlaybackSyncDeadlineSeconds;
@property(nonatomic) long long androidOfflineResumePlaybackSyncThrottleSeconds; // @dynamic androidOfflineResumePlaybackSyncThrottleSeconds;
@property(nonatomic) _Bool androidResumeOfflinePlayback; // @dynamic androidResumeOfflinePlayback;
@property(nonatomic) _Bool androidResumeOfflinePlaybackSetStartPosition; // @dynamic androidResumeOfflinePlaybackSetStartPosition;
@property(nonatomic) _Bool androidResumeOfflinePlaybackShowProgressBar; // @dynamic androidResumeOfflinePlaybackShowProgressBar;
@property(nonatomic) long long androidTransferRestoreFreeSpaceThresholdBytes; // @dynamic androidTransferRestoreFreeSpaceThresholdBytes;
@property(nonatomic) _Bool androidUseAsyncCacheInOfflinePlayerServiceController; // @dynamic androidUseAsyncCacheInOfflinePlayerServiceController;
@property(nonatomic) _Bool androidUseOrchestrationApi; // @dynamic androidUseOrchestrationApi;
@property(nonatomic) _Bool androidUseSyncSchedulerDuringStoreInitialization; // @dynamic androidUseSyncSchedulerDuringStoreInitialization;
@property(nonatomic) long long autoFixVerificationFailureThresholdBytes; // @dynamic autoFixVerificationFailureThresholdBytes;
@property(nonatomic) _Bool downloadProgressiveStreamOnly; // @dynamic downloadProgressiveStreamOnly;
@property(nonatomic) _Bool enableRelaxedDownloadApprovalsForPlaylistSync; // @dynamic enableRelaxedDownloadApprovalsForPlaylistSync;
@property(nonatomic) _Bool hasAndroidAccessTransferDataFromOfflineStore; // @dynamic hasAndroidAccessTransferDataFromOfflineStore;
@property(nonatomic) _Bool hasAndroidDisablePlaylistAutoSyncOnStartupWhenStale; // @dynamic hasAndroidDisablePlaylistAutoSyncOnStartupWhenStale;
@property(nonatomic) _Bool hasAndroidEnableFreemiumDownload; // @dynamic hasAndroidEnableFreemiumDownload;
@property(nonatomic) _Bool hasAndroidEnableOfflineAsyncApi; // @dynamic hasAndroidEnableOfflineAsyncApi;
@property(nonatomic) _Bool hasAndroidEnableOfflineDatabaseWalMode; // @dynamic hasAndroidEnableOfflineDatabaseWalMode;
@property(nonatomic) _Bool hasAndroidEnablePartialPlayback; // @dynamic hasAndroidEnablePartialPlayback;
@property(nonatomic) _Bool hasAndroidEnablePartialPlaybackWithoutOutOfBufferSeek; // @dynamic hasAndroidEnablePartialPlaybackWithoutOutOfBufferSeek;
@property(nonatomic) _Bool hasAndroidFixPlayerResponseInvalidation; // @dynamic hasAndroidFixPlayerResponseInvalidation;
@property(nonatomic) _Bool hasAndroidFixedRefreshActions; // @dynamic hasAndroidFixedRefreshActions;
@property(nonatomic) _Bool hasAndroidFreemiumDownloadDefaultQuota; // @dynamic hasAndroidFreemiumDownloadDefaultQuota;
@property(nonatomic) _Bool hasAndroidHandleTransferSqlException; // @dynamic hasAndroidHandleTransferSqlException;
@property(nonatomic) _Bool hasAndroidOfflineResumePlaybackSyncDeadlineSeconds; // @dynamic hasAndroidOfflineResumePlaybackSyncDeadlineSeconds;
@property(nonatomic) _Bool hasAndroidOfflineResumePlaybackSyncThrottleSeconds; // @dynamic hasAndroidOfflineResumePlaybackSyncThrottleSeconds;
@property(nonatomic) _Bool hasAndroidResumeOfflinePlayback; // @dynamic hasAndroidResumeOfflinePlayback;
@property(nonatomic) _Bool hasAndroidResumeOfflinePlaybackSetStartPosition; // @dynamic hasAndroidResumeOfflinePlaybackSetStartPosition;
@property(nonatomic) _Bool hasAndroidResumeOfflinePlaybackShowProgressBar; // @dynamic hasAndroidResumeOfflinePlaybackShowProgressBar;
@property(nonatomic) _Bool hasAndroidTransferRestoreFreeSpaceThresholdBytes; // @dynamic hasAndroidTransferRestoreFreeSpaceThresholdBytes;
@property(nonatomic) _Bool hasAndroidUseAsyncCacheInOfflinePlayerServiceController; // @dynamic hasAndroidUseAsyncCacheInOfflinePlayerServiceController;
@property(nonatomic) _Bool hasAndroidUseOrchestrationApi; // @dynamic hasAndroidUseOrchestrationApi;
@property(nonatomic) _Bool hasAndroidUseSyncSchedulerDuringStoreInitialization; // @dynamic hasAndroidUseSyncSchedulerDuringStoreInitialization;
@property(nonatomic) _Bool hasAutoFixVerificationFailureThresholdBytes; // @dynamic hasAutoFixVerificationFailureThresholdBytes;
@property(nonatomic) _Bool hasDownloadProgressiveStreamOnly; // @dynamic hasDownloadProgressiveStreamOnly;
@property(nonatomic) _Bool hasEnableRelaxedDownloadApprovalsForPlaylistSync; // @dynamic hasEnableRelaxedDownloadApprovalsForPlaylistSync;
@property(nonatomic) _Bool hasIosDisableOfflineWorkersNoOfflineVideos; // @dynamic hasIosDisableOfflineWorkersNoOfflineVideos;
@property(nonatomic) _Bool hasIosEnableCacheImageDirectory; // @dynamic hasIosEnableCacheImageDirectory;
@property(nonatomic) _Bool hasIosEnableFreemiumDownload; // @dynamic hasIosEnableFreemiumDownload;
@property(nonatomic) _Bool hasIosEnableMainappPlaylistSyncWorker; // @dynamic hasIosEnableMainappPlaylistSyncWorker;
@property(nonatomic) _Bool hasIosEnableOfflineRefreshImprovements; // @dynamic hasIosEnableOfflineRefreshImprovements;
@property(nonatomic) _Bool hasIosEnableSuspendedStateLogging; // @dynamic hasIosEnableSuspendedStateLogging;
@property(nonatomic) _Bool hasIosEnableThumbnailDownloadOrder; // @dynamic hasIosEnableThumbnailDownloadOrder;
@property(nonatomic) _Bool hasIosEnableThumbnailFileOperationsOnBackgroundThread; // @dynamic hasIosEnableThumbnailFileOperationsOnBackgroundThread;
@property(nonatomic) _Bool hasIosEnableThumbnailWorkerDuringPlayback; // @dynamic hasIosEnableThumbnailWorkerDuringPlayback;
@property(nonatomic) _Bool hasIosEnableVolatileCacheOfflinePlayerServiceCoordinator; // @dynamic hasIosEnableVolatileCacheOfflinePlayerServiceCoordinator;
@property(nonatomic) _Bool hasIosEnableVolatileCacheVideoDeletionWorker; // @dynamic hasIosEnableVolatileCacheVideoDeletionWorker;
@property(nonatomic) _Bool hasIosFallbackNextLargestThumbnailWidthWhenDownloaded; // @dynamic hasIosFallbackNextLargestThumbnailWidthWhenDownloaded;
@property(nonatomic) _Bool hasIosFreemiumDownloadDefaultQuota; // @dynamic hasIosFreemiumDownloadDefaultQuota;
@property(nonatomic) _Bool hasIosKidsEnableAutoOfflineInterleaving; // @dynamic hasIosKidsEnableAutoOfflineInterleaving;
@property(nonatomic) _Bool hasIosResumeOfflinePlayback; // @dynamic hasIosResumeOfflinePlayback;
@property(nonatomic) _Bool hasIosThumbnailDownloadWorkerConcurrentTaskCount; // @dynamic hasIosThumbnailDownloadWorkerConcurrentTaskCount;
@property(nonatomic) _Bool hasIosThumbnailRemoteURLFallback; // @dynamic hasIosThumbnailRemoteURLFallback;
@property(nonatomic) _Bool hasOfflineAndroidStreamDirectoryPrivacyMigration; // @dynamic hasOfflineAndroidStreamDirectoryPrivacyMigration;
@property(nonatomic) _Bool hasShouldOfflineWatchNextResponse; // @dynamic hasShouldOfflineWatchNextResponse;
@property(nonatomic) _Bool hasStreamVerificationStrategy; // @dynamic hasStreamVerificationStrategy;
@property(nonatomic) _Bool hasUserVisibleVerificationFailure; // @dynamic hasUserVisibleVerificationFailure;
@property(nonatomic) _Bool hasVerifyOfflineStreamOnDailyState; // @dynamic hasVerifyOfflineStreamOnDailyState;
@property(nonatomic) _Bool hasVerifyOfflineStreamOnDownload; // @dynamic hasVerifyOfflineStreamOnDownload;
@property(nonatomic) _Bool hasYtbTransferEcatcherSampleRate; // @dynamic hasYtbTransferEcatcherSampleRate;
@property(nonatomic) _Bool iosDisableOfflineWorkersNoOfflineVideos; // @dynamic iosDisableOfflineWorkersNoOfflineVideos;
@property(nonatomic) _Bool iosEnableCacheImageDirectory; // @dynamic iosEnableCacheImageDirectory;
@property(nonatomic) _Bool iosEnableFreemiumDownload; // @dynamic iosEnableFreemiumDownload;
@property(nonatomic) _Bool iosEnableMainappPlaylistSyncWorker; // @dynamic iosEnableMainappPlaylistSyncWorker;
@property(nonatomic) _Bool iosEnableOfflineRefreshImprovements; // @dynamic iosEnableOfflineRefreshImprovements;
@property(nonatomic) _Bool iosEnableSuspendedStateLogging; // @dynamic iosEnableSuspendedStateLogging;
@property(nonatomic) _Bool iosEnableThumbnailDownloadOrder; // @dynamic iosEnableThumbnailDownloadOrder;
@property(nonatomic) _Bool iosEnableThumbnailFileOperationsOnBackgroundThread; // @dynamic iosEnableThumbnailFileOperationsOnBackgroundThread;
@property(nonatomic) _Bool iosEnableThumbnailWorkerDuringPlayback; // @dynamic iosEnableThumbnailWorkerDuringPlayback;
@property(nonatomic) _Bool iosEnableVolatileCacheOfflinePlayerServiceCoordinator; // @dynamic iosEnableVolatileCacheOfflinePlayerServiceCoordinator;
@property(nonatomic) _Bool iosEnableVolatileCacheVideoDeletionWorker; // @dynamic iosEnableVolatileCacheVideoDeletionWorker;
@property(nonatomic) _Bool iosFallbackNextLargestThumbnailWidthWhenDownloaded; // @dynamic iosFallbackNextLargestThumbnailWidthWhenDownloaded;
@property(nonatomic) int iosFreemiumDownloadDefaultQuota; // @dynamic iosFreemiumDownloadDefaultQuota;
@property(nonatomic) _Bool iosKidsEnableAutoOfflineInterleaving; // @dynamic iosKidsEnableAutoOfflineInterleaving;
@property(nonatomic) _Bool iosResumeOfflinePlayback; // @dynamic iosResumeOfflinePlayback;
@property(nonatomic) long long iosThumbnailDownloadWorkerConcurrentTaskCount; // @dynamic iosThumbnailDownloadWorkerConcurrentTaskCount;
@property(nonatomic) _Bool iosThumbnailRemoteURLFallback; // @dynamic iosThumbnailRemoteURLFallback;
@property(nonatomic) _Bool offlineAndroidStreamDirectoryPrivacyMigration; // @dynamic offlineAndroidStreamDirectoryPrivacyMigration;
@property(nonatomic) _Bool shouldOfflineWatchNextResponse; // @dynamic shouldOfflineWatchNextResponse;
@property(nonatomic) int streamVerificationStrategy; // @dynamic streamVerificationStrategy;
@property(retain, nonatomic) GPBInt32Array *thumbnailDesiredWidthPixelsArray; // @dynamic thumbnailDesiredWidthPixelsArray;
@property(readonly, nonatomic) unsigned long long thumbnailDesiredWidthPixelsArray_Count; // @dynamic thumbnailDesiredWidthPixelsArray_Count;
@property(nonatomic) _Bool userVisibleVerificationFailure; // @dynamic userVisibleVerificationFailure;
@property(nonatomic) _Bool verifyOfflineStreamOnDailyState; // @dynamic verifyOfflineStreamOnDailyState;
@property(nonatomic) _Bool verifyOfflineStreamOnDownload; // @dynamic verifyOfflineStreamOnDownload;
@property(nonatomic) double ytbTransferEcatcherSampleRate; // @dynamic ytbTransferEcatcherSampleRate;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEMediaDownloaderBanner-Protocol.h"
#import "AWEMediaDownloaderCore-Protocol.h"
#import "AWEMediaDownloaderLegacy-Protocol.h"
#import "AWEMediaDownloaderMusic-Protocol.h"
#import "HTSService-Protocol.h"

@class NSString;

@interface AWEMediaDownloader : NSObject <AWEMediaDownloaderBanner, AWEMediaDownloaderCore, AWEMediaDownloaderMusic, AWEMediaDownloaderLegacy, HTSService>
{
}

+ (void)initialize;
+ (void)showRetryDownloadBubble;
+ (void)changeDownloadBarViewMode:(long long)arg1;
+ (void)updateDownloadBarProgress;
+ (void)updateDownloadProgress:(double)arg1;
+ (void)dismissRetryDownloadBubble;
+ (void)failBubbleDismissOnTimer:(id)arg1;
+ (void)downloadBarDismissOnTimer:(id)arg1;
+ (id)createDownloadBarView;
+ (id)getDownloadContext;
+ (id)downloadContext;
+ (id)downloadWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 resultBlock:(CDUnknownBlockType)arg3;
+ (id)downloadWithOptions:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (_Bool)checkIfCanDownloadWithOptions:(id)arg1;
+ (void)showMuteDownloadAlertWithConfirmHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2 logParams:(id)arg3;
+ (_Bool)shouldMuteDownloadWithMusic:(id)arg1;
+ (void)downloadVideoWithURLGoup:(id)arg1 seed:(long long)arg2 destinationURL:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)downloadVideoWithURLGoup:(id)arg1 destinationURL:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)downloadVideoWithURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)downloadVideoToAlbumWithURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)gotoPhotoLibrarySetting;
+ (void)_dismissLoadingView;
+ (void)_showLoadingView;
+ (id)loadingView;
+ (_Bool)needSaveToAlbumWithSharePlatforms:(long long)arg1;
+ (_Bool)needsAssetWithSharePlatform:(long long)arg1 model:(id)arg2;
+ (void)legacyShowToastWithMessage:(id)arg1;
+ (void)downloadImageAndAddSWatermarkWithAweme:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)p_resultWithResult:(id)arg1;
+ (void)shareAwemeForSaveVideo:(id)arg1 forBTDShareType:(long long)arg2 preprocess:(CDUnknownBlockType)arg3 delegateType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


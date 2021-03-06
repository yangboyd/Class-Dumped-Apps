//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTOfflineVideoEntityGeneratorProtocol-Protocol.h"

@class NSString;

@interface YTOfflineDefaultVideoEntityGenerator : NSObject <YTOfflineVideoEntityGeneratorProtocol>
{
}

- (void)didSetLastPlaybackPositionSecondsForVideo:(id)arg1;
- (void)didDeleteOfflineVideosForUserID:(id)arg1 deletedVideoIDs:(id)arg2;
- (void)didDeleteAllOfflineVideosWithIDs:(id)arg1;
- (void)didDeleteOfflineVideoWithID:(id)arg1;
- (void)downloadDidWaitForStorageWithVideo:(id)arg1;
- (void)downloadDidWaitForConnectionWithVideo:(id)arg1;
- (void)downloadDidWaitForWiFiWithVideo:(id)arg1;
- (void)downloadDidPauseWithVideo:(id)arg1;
- (void)downloadDidCancelWithVideo:(id)arg1;
- (void)didUpdateOfflineStateActionsForVideo:(id)arg1;
- (void)didUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideo:(id)arg3;
- (void)downloadDidCompleteWithVideo:(id)arg1;
- (void)downloadDidProgressWithVideo:(id)arg1 progress:(float)arg2;
- (void)downloadDidFailWithOfflineVideo:(id)arg1;
- (void)didFailToSaveOfflineVideoWithID:(id)arg1;
- (void)downloadDidStartWithVideo:(id)arg1;
- (void)didSaveThumbnailWithVideo:(id)arg1;
- (void)didSaveOfflineVideo:(id)arg1;
- (id)updatesForDidSetLastPlaybackPositionSecondsForVideo:(id)arg1;
- (id)updatesForDidDeleteOfflineVideosForUserID:(id)arg1 deletedVideoIDs:(id)arg2;
- (id)updatesForDidDeleteAllOfflineVideosWithIDs:(id)arg1;
- (id)updatesForDidDeleteOfflineVideoWithID:(id)arg1;
- (id)updatesForDownloadDidWaitForStorageWithVideo:(id)arg1;
- (id)updatesForDownloadDidWaitForConnectionWithVideo:(id)arg1;
- (id)updatesForDownloadDidWaitForWiFiWithVideo:(id)arg1;
- (id)updatesForDownloadDidPauseWithVideo:(id)arg1;
- (id)updatesForDownloadDidCancelWithVideo:(id)arg1;
- (id)updatesForDidUpdateOfflineStateActionsForVideo:(id)arg1;
- (id)updatesForDidUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideo:(id)arg3;
- (id)updatesForDownloadDidCompleteWithVideo:(id)arg1;
- (id)updatesForDownloadDidProgressWithVideo:(id)arg1 progress:(float)arg2;
- (id)updatesForDownloadDidFailWithOfflineVideo:(id)arg1;
- (id)updatesForDidFailToSaveOfflineVideoWithID:(id)arg1;
- (id)updatesForDownloadDidStartWithVideo:(id)arg1;
- (id)updatesForDidSaveOfflineVideo:(id)arg1;
- (id)updatesForDidSaveThumbnailWithVideo:(id)arg1;
- (id)generateInitialEntitiesForVideos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTOfflinePlaylistProgress-Protocol.h"

@class NSString, YTMOfflinePlaylistMetadata, YTMOfflinePlaylistStatusController;

@protocol YTMOfflinePlaylistStatusControllerObserver <YTOfflinePlaylistProgress>

@optional
- (void)offlinePlaylistStatusController:(YTMOfflinePlaylistStatusController *)arg1 didSaveThumbnailWithPlaylistID:(NSString *)arg2;
- (void)offlinePlaylistStatusController:(YTMOfflinePlaylistStatusController *)arg1 didDeleteVideoID:(NSString *)arg2 fromPlaylistID:(NSString *)arg3;
- (void)offlinePlaylistStatusController:(YTMOfflinePlaylistStatusController *)arg1 didDeleteOfflinePlaylistWithPlaylistID:(NSString *)arg2;
- (void)offlinePlaylistStatusController:(YTMOfflinePlaylistStatusController *)arg1 didUpdateOfflinePlaylistMetadata:(YTMOfflinePlaylistMetadata *)arg2;
@end


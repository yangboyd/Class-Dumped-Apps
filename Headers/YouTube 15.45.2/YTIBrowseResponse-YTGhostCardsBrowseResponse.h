//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTIBrowseResponse.h>

@interface YTIBrowseResponse (YTGhostCardsBrowseResponse)
+ (id)videoListReloadResponseWithOfflinePlaylist:(id)arg1 offlineVideos:(id)arg2 offlineMode:(_Bool)arg3 shouldBadgeWatchPercent:(_Bool)arg4 videoListReloadToken:(id)arg5 addVideoBindingIDs:(_Bool)arg6 andEndpointParams:(id)arg7 isOfflineVideoEndpointOverrideEnabled:(_Bool)arg8;
+ (id)browseResponseForEmptyOfflinePlaylistWithBrowseID:(id)arg1;
+ (id)browseResponseWithOfflinePlaylist:(id)arg1 offlineVideos:(id)arg2 footerSection:(id)arg3 offlineMode:(_Bool)arg4 shouldBadgeWatchPercent:(_Bool)arg5 browseID:(id)arg6 videoListReloadToken:(id)arg7 addVideoBindingIDs:(_Bool)arg8 andEndpointParams:(id)arg9 isOfflineVideoEndpointOverrideEnabled:(_Bool)arg10;
@property(nonatomic) _Bool yt_containsGhostCards;
@end


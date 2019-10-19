//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTWatchNextCommand-Protocol.h"

@class GIMMe, GPBMessage, NSString, YTILockScreenRenderer, YTIPlaylistPanelRenderer, YTIWatchNextRequest, YTOfflinePlaylist, YTOfflineVideo;
@protocol YTWatchNextCommandDelegate;

@interface YTMOfflineWatchNextCommand : NSObject <YTWatchNextCommand>
{
    YTIWatchNextRequest *_request;
    CDUnknownBlockType _responseBlock;
    CDUnknownBlockType _errorBlock;
    _Bool _videoFetchCompleted;
    _Bool _playlistFetchCompleted;
    YTOfflinePlaylist *_playlist;
    YTOfflineVideo *_video;
    GPBMessage *_videoMetadataRenderer;
    YTIPlaylistPanelRenderer *_playlistPanelRenderer;
    YTILockScreenRenderer *_lockScreenRenderer;
    id <YTWatchNextCommandDelegate> _delegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWatchNextCommandDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inflatePlaylistRenderer;
- (void)inflateVideoMetadataRendererWithOfflineVideo:(id)arg1;
- (void)maybeHandleWatchNextResponse;
- (void)updateShuffleStateForVideoList:(id)arg1;
- (id)playlistPanelRendererWithOfflinePlaylist:(id)arg1 offlineVideos:(id)arg2 currentIndex:(unsigned long long)arg3 offlineMode:(_Bool)arg4;
- (void)requestPlaylistWithID:(id)arg1;
- (void)inflatePlaylistRendererWithVideoList:(id)arg1;
- (void)requestVideoWithID:(id)arg1;
- (void)makeRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


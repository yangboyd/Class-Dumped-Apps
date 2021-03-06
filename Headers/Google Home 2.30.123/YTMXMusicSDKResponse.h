//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTMXContentRequiresRefreshResponse, YTMXGetImagesResponse, YTMXGetMediaItemsResponse, YTMXGetPlaybackRouteStatusResponse, YTMXGetPlayerInfoResponse, YTMXSetActivePlaybackRouteResponse, YTMXSetCurrentLikeStatusResponse, YTMXSetPlaybackStateResponse, YTMXUpdatesResponse;

@interface YTMXMusicSDKResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int apiVersion; // @dynamic apiVersion;
@property(retain, nonatomic) YTMXContentRequiresRefreshResponse *contentRequiresRefreshResponse; // @dynamic contentRequiresRefreshResponse;
@property(retain, nonatomic) YTMXGetImagesResponse *getImagesResponse; // @dynamic getImagesResponse;
@property(retain, nonatomic) YTMXGetMediaItemsResponse *getMediaItemsResponse; // @dynamic getMediaItemsResponse;
@property(retain, nonatomic) YTMXGetPlaybackRouteStatusResponse *getPlaybackRouteStatusResponse; // @dynamic getPlaybackRouteStatusResponse;
@property(retain, nonatomic) YTMXGetPlayerInfoResponse *getPlayerInfoResponse; // @dynamic getPlayerInfoResponse;
@property(readonly, nonatomic) int responseOneOfCase; // @dynamic responseOneOfCase;
@property(retain, nonatomic) YTMXSetActivePlaybackRouteResponse *setActivePlaybackRouteResponse; // @dynamic setActivePlaybackRouteResponse;
@property(retain, nonatomic) YTMXSetCurrentLikeStatusResponse *setCurrentLikeStatusResponse; // @dynamic setCurrentLikeStatusResponse;
@property(retain, nonatomic) YTMXSetPlaybackStateResponse *setPlaybackStateResponse; // @dynamic setPlaybackStateResponse;
@property(retain, nonatomic) YTMXUpdatesResponse *updatesResponse; // @dynamic updatesResponse;

@end


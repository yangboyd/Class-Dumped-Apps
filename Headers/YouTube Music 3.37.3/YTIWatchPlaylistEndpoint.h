//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTWatchEndpointProtocol-Protocol.h"

@class NSString, YTICommand, YTIPlayerResponse, YTIWatchEndpointRemotePlaybackSupportedConfigs, YTIWatchEndpointSupportedAuthorizationTokenConfig, YTIWatchEndpointSupportedOnesieConfig, YTIWatchPlaylistEndpointMusicConfig;

@interface YTIWatchPlaylistEndpoint : GPBMessage <YTWatchEndpointProtocol>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTIWatchEndpointSupportedOnesieConfig *watchEndpointSupportedOnesieConfig;
@property(readonly, nonatomic) _Bool hasWatchEndpointSupportedOnesieConfig;
@property(readonly, nonatomic) YTIPlayerResponse *playerResponse;
@property(readonly, nonatomic) _Bool hasPlayerResponse;
@property(readonly, nonatomic) _Bool hasPlayerParams;
@property(readonly, nonatomic) NSString *playerParams;
@property(readonly, nonatomic, getter=isMDXPreviewDisabled) _Bool MDXPreviewDisabled;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
@property(readonly, nonatomic) _Bool hasVideoId;
@property(readonly, nonatomic) NSString *videoId;
@property(readonly, nonatomic) float endTimeSeconds;
@property(readonly, nonatomic) _Bool hasEndTimeSeconds;
@property(readonly, nonatomic) float startTimeSeconds;
@property(readonly, nonatomic) _Bool hasStartTimeSeconds;

// Remaining properties
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasIndex; // @dynamic hasIndex;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasWatchEndpointRemotePlaybackSupportedConfigs; // @dynamic hasWatchEndpointRemotePlaybackSupportedConfigs;
@property(nonatomic) _Bool hasWatchEndpointSupportedAuthorizationTokenConfig; // @dynamic hasWatchEndpointSupportedAuthorizationTokenConfig;
@property(nonatomic) _Bool hasWatchPlaylistEndpointMusicConfig; // @dynamic hasWatchPlaylistEndpointMusicConfig;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int index; // @dynamic index;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIWatchEndpointRemotePlaybackSupportedConfigs *watchEndpointRemotePlaybackSupportedConfigs; // @dynamic watchEndpointRemotePlaybackSupportedConfigs;
@property(retain, nonatomic) YTIWatchEndpointSupportedAuthorizationTokenConfig *watchEndpointSupportedAuthorizationTokenConfig; // @dynamic watchEndpointSupportedAuthorizationTokenConfig;
@property(retain, nonatomic) YTIWatchPlaylistEndpointMusicConfig *watchPlaylistEndpointMusicConfig; // @dynamic watchPlaylistEndpointMusicConfig;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIDownloadsPagePlaylistEntity_CollageThumbnail, YTIThumbnailDetails;

@interface YTIDownloadsPagePlaylistEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *channelOwnerName; // @dynamic channelOwnerName;
@property(copy, nonatomic) NSString *downloadStatus; // @dynamic downloadStatus;
@property(nonatomic) _Bool hasChannelOwnerName; // @dynamic hasChannelOwnerName;
@property(nonatomic) _Bool hasDownloadStatus; // @dynamic hasDownloadStatus;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasLastSyncedTimeText; // @dynamic hasLastSyncedTimeText;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasShareText; // @dynamic hasShareText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUiType; // @dynamic hasUiType;
@property(nonatomic) _Bool hasVideoCount; // @dynamic hasVideoCount;
@property(nonatomic) _Bool hasVideoCountText; // @dynamic hasVideoCountText;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *lastSyncedTimeText; // @dynamic lastSyncedTimeText;
@property(retain, nonatomic) YTIDownloadsPagePlaylistEntity_CollageThumbnail *playlistCollageThumbnail; // @dynamic playlistCollageThumbnail;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) YTIThumbnailDetails *playlistThumbnail; // @dynamic playlistThumbnail;
@property(copy, nonatomic) NSString *shareText; // @dynamic shareText;
@property(readonly, nonatomic) int thumbnailOneOfCase; // @dynamic thumbnailOneOfCase;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int uiType; // @dynamic uiType;
@property(nonatomic) int videoCount; // @dynamic videoCount;
@property(copy, nonatomic) NSString *videoCountText; // @dynamic videoCountText;

@end


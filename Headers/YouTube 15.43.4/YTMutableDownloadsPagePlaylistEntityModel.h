//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTDownloadsPagePlaylistEntityModel.h>

#import <Module_Framework/YTMutableEntity-Protocol.h>

@class NSData, NSDictionary, NSString, YTDownloadStatusEntityModel, YTThumbnailDetailsModel;

@interface YTMutableDownloadsPagePlaylistEntityModel : YTDownloadsPagePlaylistEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @dynamic entityMetadata;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) int uiType; // @dynamic uiType;
@property(retain, nonatomic) NSString *shareText; // @dynamic shareText;
@property(retain, nonatomic) YTThumbnailDetailsModel *playlistThumbnail; // @dynamic playlistThumbnail;
@property(nonatomic) int videoCount; // @dynamic videoCount;
@property(retain, nonatomic) NSString *videoCountText; // @dynamic videoCountText;
@property(retain, nonatomic) NSString *channelOwnerName; // @dynamic channelOwnerName;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) YTDownloadStatusEntityModel *downloadStatus; // @dynamic downloadStatus;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


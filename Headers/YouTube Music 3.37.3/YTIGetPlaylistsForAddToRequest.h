//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTIGetPlaylistsForAddToRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) NSMutableArray *excludePlaylistIdsArray; // @dynamic excludePlaylistIdsArray;
@property(readonly, nonatomic) unsigned long long excludePlaylistIdsArray_Count; // @dynamic excludePlaylistIdsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasShowWatchLater; // @dynamic hasShowWatchLater;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(nonatomic) _Bool showWatchLater; // @dynamic showWatchLater;
@property(retain, nonatomic) NSMutableArray *videoIdsArray; // @dynamic videoIdsArray;
@property(readonly, nonatomic) unsigned long long videoIdsArray_Count; // @dynamic videoIdsArray_Count;

@end


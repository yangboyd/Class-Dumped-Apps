//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAddToPlaylistEndpoint, YTIBrowseEndpoint, YTIFeedbackEndpoint, YTILikeEndpoint, YTIModalEndpoint, YTIMusicEntityReference, YTIMusicLibraryEditCommand, YTIOfflinePlaylistEndpoint, YTIOfflineVideoEndpoint, YTIQueueAddEndpoint, YTIShareEntityEndpoint, YTISharePlaylistEndpoint, YTIShareVideoEndpoint, YTIWatchEndpoint, YTIWatchPlaylistEndpoint;

@interface YTIMusicDataBoundEndpointMold : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAddToPlaylistEndpoint *addToPlaylistEndpoint; // @dynamic addToPlaylistEndpoint;
@property(retain, nonatomic) YTIBrowseEndpoint *browseEndpointArtist; // @dynamic browseEndpointArtist;
@property(readonly, nonatomic) int endpointOneOfCase; // @dynamic endpointOneOfCase;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(retain, nonatomic) YTIFeedbackEndpoint *feedbackEndpoint; // @dynamic feedbackEndpoint;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(retain, nonatomic) YTILikeEndpoint *likeEndpoint; // @dynamic likeEndpoint;
@property(retain, nonatomic) YTIModalEndpoint *modalEndpoint; // @dynamic modalEndpoint;
@property(retain, nonatomic) YTIMusicLibraryEditCommand *musicLibraryEditCommand; // @dynamic musicLibraryEditCommand;
@property(retain, nonatomic) YTIOfflinePlaylistEndpoint *offlinePlaylistEndpoint; // @dynamic offlinePlaylistEndpoint;
@property(retain, nonatomic) YTIOfflineVideoEndpoint *offlineVideoEndpoint; // @dynamic offlineVideoEndpoint;
@property(retain, nonatomic) YTIQueueAddEndpoint *queueAddEndpoint; // @dynamic queueAddEndpoint;
@property(retain, nonatomic) YTIShareEntityEndpoint *shareEntityEndpoint; // @dynamic shareEntityEndpoint;
@property(retain, nonatomic) YTISharePlaylistEndpoint *sharePlaylistEndpoint; // @dynamic sharePlaylistEndpoint;
@property(retain, nonatomic) YTIShareVideoEndpoint *shareVideoEndpoint; // @dynamic shareVideoEndpoint;
@property(retain, nonatomic) YTIWatchEndpoint *watchEndpoint; // @dynamic watchEndpoint;
@property(retain, nonatomic) YTIWatchEndpoint *watchEndpointRadio; // @dynamic watchEndpointRadio;
@property(retain, nonatomic) YTIWatchPlaylistEndpoint *watchPlaylistEndpoint; // @dynamic watchPlaylistEndpoint;

@end


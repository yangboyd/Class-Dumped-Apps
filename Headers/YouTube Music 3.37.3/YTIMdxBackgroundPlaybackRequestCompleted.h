//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIMdxBackgroundPlaybackRequestCompleted : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int disconnectCause; // @dynamic disconnectCause;
@property(nonatomic) _Bool hasDisconnectCause; // @dynamic hasDisconnectCause;
@property(nonatomic) _Bool hasPlaybackResult; // @dynamic hasPlaybackResult;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasRetry; // @dynamic hasRetry;
@property(nonatomic) _Bool hasSessionType; // @dynamic hasSessionType;
@property(nonatomic) int playbackResult; // @dynamic playbackResult;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(nonatomic) _Bool retry; // @dynamic retry;
@property(nonatomic) int sessionType; // @dynamic sessionType;

@end


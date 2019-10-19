//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString, YTIUrlEndpoint;

@interface YTIAudioTrackRowRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *artist; // @dynamic artist;
@property(copy, nonatomic) NSString *audioswapId; // @dynamic audioswapId;
@property(retain, nonatomic) YTIUrlEndpoint *downloadURL; // @dynamic downloadURL;
@property(nonatomic) int durationMs; // @dynamic durationMs;
@property(retain, nonatomic) YTIFormattedString *genre; // @dynamic genre;
@property(nonatomic) _Bool hasArtist; // @dynamic hasArtist;
@property(nonatomic) _Bool hasAudioswapId; // @dynamic hasAudioswapId;
@property(nonatomic) _Bool hasDownloadURL; // @dynamic hasDownloadURL;
@property(nonatomic) _Bool hasDurationMs; // @dynamic hasDurationMs;
@property(nonatomic) _Bool hasGenre; // @dynamic hasGenre;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedPlayerStatsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasPlayerName; // @dynamic hasPlayerName;
@property(nonatomic) _Bool hasPlayerThumbnail; // @dynamic hasPlayerThumbnail;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(nonatomic) _Bool hasTeamColor; // @dynamic hasTeamColor;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTIFormattedString *playerName; // @dynamic playerName;
@property(retain, nonatomic) NSMutableArray *playerStatsArray; // @dynamic playerStatsArray;
@property(readonly, nonatomic) unsigned long long playerStatsArray_Count; // @dynamic playerStatsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *playerThumbnail; // @dynamic playerThumbnail;
@property(retain, nonatomic) YTIFormattedString *secondaryText; // @dynamic secondaryText;
@property(copy, nonatomic) NSString *teamColor; // @dynamic teamColor;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


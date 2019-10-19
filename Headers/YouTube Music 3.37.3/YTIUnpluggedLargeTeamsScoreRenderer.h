//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIFormattedString, YTINamedValue, YTIRenderer, YTIUnpluggedSportsTeamMatchupSupportedRenderers;

@interface YTIUnpluggedLargeTeamsScoreRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedSportsTeamMatchupSupportedRenderers *endTeam; // @dynamic endTeam;
@property(retain, nonatomic) YTINamedValue *endTeamScore; // @dynamic endTeamScore;
@property(nonatomic) _Bool hasEndTeam; // @dynamic hasEndTeam;
@property(nonatomic) _Bool hasEndTeamScore; // @dynamic hasEndTeamScore;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasScoreTable; // @dynamic hasScoreTable;
@property(nonatomic) _Bool hasSecondaryTextDelimiter; // @dynamic hasSecondaryTextDelimiter;
@property(nonatomic) _Bool hasStartTeam; // @dynamic hasStartTeam;
@property(nonatomic) _Bool hasStartTeamScore; // @dynamic hasStartTeamScore;
@property(nonatomic) _Bool hasTertiaryText; // @dynamic hasTertiaryText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpdateablePossessionIndicator; // @dynamic hasUpdateablePossessionIndicator;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTIRenderer *scoreTable; // @dynamic scoreTable;
@property(retain, nonatomic) YTIFormattedString *secondaryTextDelimiter; // @dynamic secondaryTextDelimiter;
@property(retain, nonatomic) NSMutableArray *secondaryTextsArray; // @dynamic secondaryTextsArray;
@property(readonly, nonatomic) unsigned long long secondaryTextsArray_Count; // @dynamic secondaryTextsArray_Count;
@property(retain, nonatomic) YTIUnpluggedSportsTeamMatchupSupportedRenderers *startTeam; // @dynamic startTeam;
@property(retain, nonatomic) YTINamedValue *startTeamScore; // @dynamic startTeamScore;
@property(retain, nonatomic) YTINamedValue *tertiaryText; // @dynamic tertiaryText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTINamedValue *updateablePossessionIndicator; // @dynamic updateablePossessionIndicator;

@end


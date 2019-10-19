//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIAccessibilitySupportedDatas, YTIAssociatedGameSupportedRenderers, YTICommand, YTIFormattedString, YTIGamingSubscribeButtonSupportedRenderers, YTIThumbnailDetails;

@interface YTICompactGameRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIAssociatedGameSupportedRenderers *game; // @dynamic game;
@property(retain, nonatomic) YTIFormattedString *genre; // @dynamic genre;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasGame; // @dynamic hasGame;
@property(nonatomic) _Bool hasGenre; // @dynamic hasGenre;
@property(nonatomic) _Bool hasHasOfficialBoxArt; // @dynamic hasHasOfficialBoxArt;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfficialBoxArt; // @dynamic hasOfficialBoxArt;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasSubscriberCountText; // @dynamic hasSubscriberCountText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIGamingSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *subscriberCountText; // @dynamic subscriberCountText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


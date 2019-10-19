//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString, YTILikeButtonSupportedRenderers, YTIThumbnailDetails;

@interface YTIMinimalVideoMetadataRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasOwnerChannelNavigationEndpoint; // @dynamic hasOwnerChannelNavigationEndpoint;
@property(nonatomic) _Bool hasOwnerChannelThumbnail; // @dynamic hasOwnerChannelThumbnail;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTICommand *ownerChannelNavigationEndpoint; // @dynamic ownerChannelNavigationEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *ownerChannelThumbnail; // @dynamic ownerChannelThumbnail;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end


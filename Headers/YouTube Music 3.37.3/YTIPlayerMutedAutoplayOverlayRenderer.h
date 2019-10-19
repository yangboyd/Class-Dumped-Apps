//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString, YTIRenderer;

@interface YTIPlayerMutedAutoplayOverlayRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *endScreen; // @dynamic endScreen;
@property(nonatomic) _Bool hasEndScreen; // @dynamic hasEndScreen;
@property(nonatomic) _Bool hasOnTapEndpoint; // @dynamic hasOnTapEndpoint;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasYoutubeWatermark; // @dynamic hasYoutubeWatermark;
@property(retain, nonatomic) YTICommand *onTapEndpoint; // @dynamic onTapEndpoint;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIRenderer *youtubeWatermark; // @dynamic youtubeWatermark;

@end


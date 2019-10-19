//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIMusicTunederEducationPageStateRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *bottomThumbnail; // @dynamic bottomThumbnail;
@property(retain, nonatomic) YTIRenderer *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasBottomThumbnail; // @dynamic hasBottomThumbnail;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasProceedButton; // @dynamic hasProceedButton;
@property(nonatomic) _Bool hasTopThumbnail; // @dynamic hasTopThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasWelcomeText; // @dynamic hasWelcomeText;
@property(retain, nonatomic) YTIFormattedString *header; // @dynamic header;
@property(retain, nonatomic) YTIRenderer *proceedButton; // @dynamic proceedButton;
@property(retain, nonatomic) YTIThumbnailDetails *topThumbnail; // @dynamic topThumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *welcomeText; // @dynamic welcomeText;

@end


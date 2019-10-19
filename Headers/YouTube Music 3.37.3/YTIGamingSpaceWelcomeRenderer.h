//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIRenderer;

@interface YTIGamingSpaceWelcomeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *body; // @dynamic body;
@property(retain, nonatomic) YTIRenderer *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasLearnMore; // @dynamic hasLearnMore;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *learnMore; // @dynamic learnMore;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


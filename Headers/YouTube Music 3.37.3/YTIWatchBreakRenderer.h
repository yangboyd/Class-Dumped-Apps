//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIRenderer;

@interface YTIWatchBreakRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasHeading; // @dynamic hasHeading;
@property(nonatomic) _Bool hasNotice; // @dynamic hasNotice;
@property(nonatomic) _Bool hasSettingsButton; // @dynamic hasSettingsButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *heading; // @dynamic heading;
@property(retain, nonatomic) YTIFormattedString *notice; // @dynamic notice;
@property(retain, nonatomic) YTIRenderer *settingsButton; // @dynamic settingsButton;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


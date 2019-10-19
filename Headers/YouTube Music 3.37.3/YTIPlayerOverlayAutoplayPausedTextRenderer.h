//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString;

@interface YTIPlayerOverlayAutoplayPausedTextRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPausedText; // @dynamic hasPausedText;
@property(nonatomic) _Bool hasPausedThresholdMinutes; // @dynamic hasPausedThresholdMinutes;
@property(nonatomic) _Bool hasPausedThresholdMobileNetworkMinutes; // @dynamic hasPausedThresholdMobileNetworkMinutes;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *pausedText; // @dynamic pausedText;
@property(nonatomic) int pausedThresholdMinutes; // @dynamic pausedThresholdMinutes;
@property(nonatomic) int pausedThresholdMobileNetworkMinutes; // @dynamic pausedThresholdMobileNetworkMinutes;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


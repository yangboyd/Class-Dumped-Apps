//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonSupportedRenderers, YTIFormattedString;

@interface YTIChannelViewAsNotificationRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *button; // @dynamic button;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasNotificationText; // @dynamic hasNotificationText;
@property(retain, nonatomic) YTIFormattedString *notificationText; // @dynamic notificationText;

@end


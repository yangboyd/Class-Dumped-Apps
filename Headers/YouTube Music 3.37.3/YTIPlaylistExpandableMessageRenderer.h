//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIPlaylistExpandableMessageButtonSupportedRenderers;

@interface YTIPlaylistExpandableMessageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPlaylistExpandableMessageButtonSupportedRenderers *button; // @dynamic button;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasIsExpanded; // @dynamic hasIsExpanded;
@property(nonatomic) _Bool hasLongMessage; // @dynamic hasLongMessage;
@property(nonatomic) _Bool hasShortMessage; // @dynamic hasShortMessage;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool isExpanded; // @dynamic isExpanded;
@property(retain, nonatomic) YTIFormattedString *longMessage; // @dynamic longMessage;
@property(retain, nonatomic) YTIFormattedString *shortMessage; // @dynamic shortMessage;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


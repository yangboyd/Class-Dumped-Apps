//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIButtonSupportedRenderers, YTIFormattedString, YTIMessageStyle, YTIMessageSubtextSupportedRenderers, YTIMessageThumbnailSupportedRenderers, YTISupportedMessageRendererIcons;

@interface YTIMessageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *button; // @dynamic button;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasSubtext; // @dynamic hasSubtext;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTISupportedMessageRendererIcons *icon; // @dynamic icon;
@property(readonly, nonatomic) int imageOneOfCase; // @dynamic imageOneOfCase;
@property(retain, nonatomic) YTIMessageStyle *style; // @dynamic style;
@property(retain, nonatomic) YTIMessageSubtextSupportedRenderers *subtext; // @dynamic subtext;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(retain, nonatomic) YTIMessageThumbnailSupportedRenderers *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


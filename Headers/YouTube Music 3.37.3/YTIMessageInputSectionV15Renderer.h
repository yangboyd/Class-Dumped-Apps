//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails;

@interface YTIMessageInputSectionV15Renderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasInputHint; // @dynamic hasInputHint;
@property(nonatomic) _Bool hasMaxInputLength; // @dynamic hasMaxInputLength;
@property(nonatomic) _Bool hasSendButton; // @dynamic hasSendButton;
@property(nonatomic) _Bool hasSharerThumbnail; // @dynamic hasSharerThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *inputHint; // @dynamic inputHint;
@property(nonatomic) long long maxInputLength; // @dynamic maxInputLength;
@property(retain, nonatomic) YTIButtonSupportedRenderers *sendButton; // @dynamic sendButton;
@property(retain, nonatomic) YTIThumbnailDetails *sharerThumbnail; // @dynamic sharerThumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


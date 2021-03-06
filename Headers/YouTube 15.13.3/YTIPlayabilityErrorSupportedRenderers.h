//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIConfirmDialogRenderer, YTIPlayerErrorMessageRenderer, YTIPlayerKavRenderer, YTIPlayerLegacyDesktopYpcOfferRenderer, YTIPlayerLegacyDesktopYpcTrailerRenderer, YTIPlayerSpotlightStoryRenderer, YTIYpcTrailerRenderer;

@interface YTIPlayabilityErrorSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIConfirmDialogRenderer *confirmDialogRenderer; // @dynamic confirmDialogRenderer;
@property(retain, nonatomic) YTIPlayerErrorMessageRenderer *playerErrorMessageRenderer; // @dynamic playerErrorMessageRenderer;
@property(retain, nonatomic) YTIPlayerKavRenderer *playerKavRenderer; // @dynamic playerKavRenderer;
@property(retain, nonatomic) YTIPlayerLegacyDesktopYpcOfferRenderer *playerLegacyDesktopYpcOfferRenderer; // @dynamic playerLegacyDesktopYpcOfferRenderer;
@property(retain, nonatomic) YTIPlayerLegacyDesktopYpcTrailerRenderer *playerLegacyDesktopYpcTrailerRenderer; // @dynamic playerLegacyDesktopYpcTrailerRenderer;
@property(retain, nonatomic) YTIPlayerSpotlightStoryRenderer *playerSpotlightStoryRenderer; // @dynamic playerSpotlightStoryRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIYpcTrailerRenderer *ypcTrailerRenderer; // @dynamic ypcTrailerRenderer;

@end


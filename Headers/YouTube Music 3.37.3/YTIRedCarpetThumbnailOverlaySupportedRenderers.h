//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMenuRenderer, YTIStandaloneRedBadgeRenderer, YTIThumbnailOverlayBottomGradientRenderer, YTIThumbnailOverlayCenterBadgeRenderer, YTIThumbnailOverlayResumePlaybackRenderer, YTIThumbnailOverlayScrimRenderer, YTIThumbnailOverlayTimeStatusRenderer;

@interface YTIRedCarpetThumbnailOverlaySupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMenuRenderer *menuRenderer; // @dynamic menuRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIStandaloneRedBadgeRenderer *standaloneRedBadgeRenderer; // @dynamic standaloneRedBadgeRenderer;
@property(retain, nonatomic) YTIThumbnailOverlayBottomGradientRenderer *thumbnailOverlayBottomGradientRenderer; // @dynamic thumbnailOverlayBottomGradientRenderer;
@property(retain, nonatomic) YTIThumbnailOverlayCenterBadgeRenderer *thumbnailOverlayCenterBadgeRenderer; // @dynamic thumbnailOverlayCenterBadgeRenderer;
@property(retain, nonatomic) YTIThumbnailOverlayResumePlaybackRenderer *thumbnailOverlayResumePlaybackRenderer; // @dynamic thumbnailOverlayResumePlaybackRenderer;
@property(retain, nonatomic) YTIThumbnailOverlayScrimRenderer *thumbnailOverlayScrimRenderer; // @dynamic thumbnailOverlayScrimRenderer;
@property(retain, nonatomic) YTIThumbnailOverlayTimeStatusRenderer *thumbnailOverlayTimeStatusRenderer; // @dynamic thumbnailOverlayTimeStatusRenderer;

@end


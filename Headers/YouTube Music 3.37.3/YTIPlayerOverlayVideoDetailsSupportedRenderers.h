//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIEmbeddedPlayerOverlayVideoDetailsRenderer, YTIPlayerOverlayVideoDetailsRenderer;

@interface YTIPlayerOverlayVideoDetailsSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIEmbeddedPlayerOverlayVideoDetailsRenderer *embeddedPlayerOverlayVideoDetailsRenderer; // @dynamic embeddedPlayerOverlayVideoDetailsRenderer;
@property(retain, nonatomic) YTIPlayerOverlayVideoDetailsRenderer *playerOverlayVideoDetailsRenderer; // @dynamic playerOverlayVideoDetailsRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;

@end


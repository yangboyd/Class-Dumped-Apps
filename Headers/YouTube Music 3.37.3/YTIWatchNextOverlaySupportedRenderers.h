//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIDismissableClingRenderer, YTIGamingEventPromoOverlayRenderer, YTIMealbarPromoRenderer, YTITooltipRenderer;

@interface YTIWatchNextOverlaySupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDismissableClingRenderer *dismissableClingRenderer; // @dynamic dismissableClingRenderer;
@property(retain, nonatomic) YTIGamingEventPromoOverlayRenderer *gamingEventPromoOverlayRenderer; // @dynamic gamingEventPromoOverlayRenderer;
@property(retain, nonatomic) YTIMealbarPromoRenderer *mealbarPromoRenderer; // @dynamic mealbarPromoRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTITooltipRenderer *tooltipRenderer; // @dynamic tooltipRenderer;

@end


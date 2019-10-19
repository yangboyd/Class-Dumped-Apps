//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAppPromoCompanionAdRenderer, YTICompanionAdRenderer, YTIElementRenderer, YTIMultiItemCompanionAdRenderer, YTIShoppingCompanionAdRenderer;

@interface YTIPlayerCompanionAdsSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)hasShoppingCompanionAdRenderer;
- (_Bool)hasCompanionAdRenderer;
- (_Bool)hasAppPromoCompanionAdRenderer;

// Remaining properties
@property(retain, nonatomic) YTIAppPromoCompanionAdRenderer *appPromoCompanionAdRenderer; // @dynamic appPromoCompanionAdRenderer;
@property(retain, nonatomic) YTICompanionAdRenderer *companionAdRenderer; // @dynamic companionAdRenderer;
@property(retain, nonatomic) YTIElementRenderer *elementRenderer; // @dynamic elementRenderer;
@property(retain, nonatomic) YTIMultiItemCompanionAdRenderer *multiItemCompanionAdRenderer; // @dynamic multiItemCompanionAdRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIShoppingCompanionAdRenderer *shoppingCompanionAdRenderer; // @dynamic shoppingCompanionAdRenderer;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonRenderer, YTILikeButtonRenderer, YTIPlayerChatOverlayActionRenderer, YTIPlayerOverlayActionRenderer;

@interface YTIPlayerOverlayActionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPlayerOverlayActionRenderer *action; // @dynamic action;
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @dynamic buttonRenderer;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasButtonRenderer; // @dynamic hasButtonRenderer;
@property(nonatomic) _Bool hasLikeButtonRenderer; // @dynamic hasLikeButtonRenderer;
@property(nonatomic) _Bool hasPlayerChatOverlayActionRenderer; // @dynamic hasPlayerChatOverlayActionRenderer;
@property(retain, nonatomic) YTILikeButtonRenderer *likeButtonRenderer; // @dynamic likeButtonRenderer;
@property(retain, nonatomic) YTIPlayerChatOverlayActionRenderer *playerChatOverlayActionRenderer; // @dynamic playerChatOverlayActionRenderer;

@end


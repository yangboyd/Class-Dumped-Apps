//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonRenderer, YTISearchBoxRenderer, YTIToggleButtonRenderer;

@interface YTIBrowseFeedActionsSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionsOneOfCase; // @dynamic actionsOneOfCase;
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @dynamic buttonRenderer;
@property(retain, nonatomic) YTISearchBoxRenderer *searchBoxRenderer; // @dynamic searchBoxRenderer;
@property(retain, nonatomic) YTIToggleButtonRenderer *toggleButtonRenderer; // @dynamic toggleButtonRenderer;

@end


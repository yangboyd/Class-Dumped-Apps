//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIVideoCardRenderer, YTIVideoWithContextRenderer;

@interface YTIGhostCardSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;
@property(retain, nonatomic) YTIVideoCardRenderer *videoCardRenderer; // @dynamic videoCardRenderer;
@property(retain, nonatomic) YTIVideoWithContextRenderer *videoWithContextRenderer; // @dynamic videoWithContextRenderer;

@end


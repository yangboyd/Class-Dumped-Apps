//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIContactSectionRenderer, YTIRecentSharesSectionRenderer;

@interface YTIContactSectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIContactSectionRenderer *contactSectionRenderer; // @dynamic contactSectionRenderer;
@property(nonatomic) _Bool hasContactSectionRenderer; // @dynamic hasContactSectionRenderer;
@property(nonatomic) _Bool hasRecentSharesSectionRenderer; // @dynamic hasRecentSharesSectionRenderer;
@property(retain, nonatomic) YTIRecentSharesSectionRenderer *recentSharesSectionRenderer; // @dynamic recentSharesSectionRenderer;

@end


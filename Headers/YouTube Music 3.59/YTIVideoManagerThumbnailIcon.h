//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIIcon, YTIThumbnailDetails, YTIVideoManagerIconSupportedAccessibilityDatas;

@interface YTIVideoManagerThumbnailIcon : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIVideoManagerIconSupportedAccessibilityDatas *accessibility; // @dynamic accessibility;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;

@end


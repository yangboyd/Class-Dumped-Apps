//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIThumbnailDetails;

@interface YTIThumbnailLandscapePortraitRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLandscape; // @dynamic hasLandscape;
@property(nonatomic) _Bool hasPortrait; // @dynamic hasPortrait;
@property(retain, nonatomic) YTIThumbnailDetails *landscape; // @dynamic landscape;
@property(retain, nonatomic) YTIThumbnailDetails *portrait; // @dynamic portrait;

@end


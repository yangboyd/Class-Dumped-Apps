//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIKidsPromoEventRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImage; // @dynamic backgroundImage;
@property(nonatomic) _Bool hasBackgroundImage; // @dynamic hasBackgroundImage;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(nonatomic) _Bool hasVideo; // @dynamic hasVideo;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTIFormattedString *secondaryText; // @dynamic secondaryText;
@property(retain, nonatomic) YTIRenderer *video; // @dynamic video;

@end


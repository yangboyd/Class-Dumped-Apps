//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIRenderer;

@interface YTIExpandAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) int clickTargetMode; // @dynamic clickTargetMode;
@property(retain, nonatomic) YTIRenderer *ctaButton; // @dynamic ctaButton;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasClickTargetMode; // @dynamic hasClickTargetMode;
@property(nonatomic) _Bool hasCtaButton; // @dynamic hasCtaButton;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;

@end


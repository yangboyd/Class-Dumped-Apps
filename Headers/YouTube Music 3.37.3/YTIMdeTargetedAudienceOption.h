//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIRenderer;

@interface YTIMdeTargetedAudienceOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int audienceType; // @dynamic audienceType;
@property(nonatomic) _Bool hasAudienceType; // @dynamic hasAudienceType;
@property(nonatomic) _Bool hasHelpButton; // @dynamic hasHelpButton;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUpdateOperation; // @dynamic hasUpdateOperation;
@property(retain, nonatomic) YTIRenderer *helpButton; // @dynamic helpButton;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(nonatomic) int updateOperation; // @dynamic updateOperation;

@end


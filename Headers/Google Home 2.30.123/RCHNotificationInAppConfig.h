//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface RCHNotificationInAppConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *actionButtonText; // @dynamic actionButtonText;
@property(nonatomic) int badgeType; // @dynamic badgeType;
@property(nonatomic) _Bool enableApdRingAnimation; // @dynamic enableApdRingAnimation;
@property(nonatomic) _Bool hasActionButtonText; // @dynamic hasActionButtonText;
@property(nonatomic) _Bool hasBadgeType; // @dynamic hasBadgeType;
@property(nonatomic) _Bool hasEnableApdRingAnimation; // @dynamic hasEnableApdRingAnimation;
@property(nonatomic) _Bool hasSubtitleText; // @dynamic hasSubtitleText;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(copy, nonatomic) NSString *subtitleText; // @dynamic subtitleText;
@property(copy, nonatomic) NSString *titleText; // @dynamic titleText;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMdxNotificationTriggerCondition_Range;

@interface YTIMdxNotificationTriggerCondition_DependentNotificationCondition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNotificationType; // @dynamic hasNotificationType;
@property(nonatomic) _Bool hasQuietPeriodSeconds; // @dynamic hasQuietPeriodSeconds;
@property(nonatomic) _Bool hasShownCount; // @dynamic hasShownCount;
@property(nonatomic) int notificationType; // @dynamic notificationType;
@property(nonatomic) int quietPeriodSeconds; // @dynamic quietPeriodSeconds;
@property(retain, nonatomic) YTIMdxNotificationTriggerCondition_Range *shownCount; // @dynamic shownCount;

@end


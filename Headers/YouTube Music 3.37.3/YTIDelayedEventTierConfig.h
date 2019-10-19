//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIDelayedEventScheduleConfig;

@interface YTIDelayedEventTierConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDelayedEventScheduleConfig *defaultTier; // @dynamic defaultTier;
@property(nonatomic) _Bool delayedEventTierEnabled; // @dynamic delayedEventTierEnabled;
@property(retain, nonatomic) YTIDelayedEventScheduleConfig *dispatchToEmptyTier; // @dynamic dispatchToEmptyTier;
@property(retain, nonatomic) YTIDelayedEventScheduleConfig *fastTier; // @dynamic fastTier;
@property(nonatomic) _Bool hasDefaultTier; // @dynamic hasDefaultTier;
@property(nonatomic) _Bool hasDelayedEventTierEnabled; // @dynamic hasDelayedEventTierEnabled;
@property(nonatomic) _Bool hasDispatchToEmptyTier; // @dynamic hasDispatchToEmptyTier;
@property(nonatomic) _Bool hasFastTier; // @dynamic hasFastTier;
@property(nonatomic) _Bool hasImmediateTier; // @dynamic hasImmediateTier;
@property(retain, nonatomic) YTIDelayedEventScheduleConfig *immediateTier; // @dynamic immediateTier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, GPBInt32Array, NSString;

@interface GRWPromoEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appBundleIdentifier; // @dynamic appBundleIdentifier;
@property(retain, nonatomic) GPBEnumArray *conditionsNotMetArray; // @dynamic conditionsNotMetArray;
@property(readonly, nonatomic) unsigned long long conditionsNotMetArray_Count; // @dynamic conditionsNotMetArray_Count;
@property(nonatomic) int displayBlockReason; // @dynamic displayBlockReason;
@property(nonatomic) _Bool failedTriggeringCondition; // @dynamic failedTriggeringCondition;
@property(nonatomic) _Bool hasAppBundleIdentifier; // @dynamic hasAppBundleIdentifier;
@property(nonatomic) _Bool hasDisplayBlockReason; // @dynamic hasDisplayBlockReason;
@property(nonatomic) _Bool hasFailedTriggeringCondition; // @dynamic hasFailedTriggeringCondition;
@property(nonatomic) _Bool hasImpressionCappingId; // @dynamic hasImpressionCappingId;
@property(nonatomic) _Bool hasPromoNotShownReason; // @dynamic hasPromoNotShownReason;
@property(nonatomic) _Bool hasPromotedAppId; // @dynamic hasPromotedAppId;
@property(nonatomic) _Bool hasTargetingRuleNotSatisfied; // @dynamic hasTargetingRuleNotSatisfied;
@property(nonatomic) _Bool hasTriggeringEventIndex; // @dynamic hasTriggeringEventIndex;
@property(nonatomic) _Bool hasUserAction; // @dynamic hasUserAction;
@property(nonatomic) int impressionCappingId; // @dynamic impressionCappingId;
@property(retain, nonatomic) GPBInt32Array *mendelIdsArray; // @dynamic mendelIdsArray;
@property(readonly, nonatomic) unsigned long long mendelIdsArray_Count; // @dynamic mendelIdsArray_Count;
@property(nonatomic) int promoNotShownReason; // @dynamic promoNotShownReason;
@property(copy, nonatomic) NSString *promotedAppId; // @dynamic promotedAppId;
@property(nonatomic) _Bool targetingRuleNotSatisfied; // @dynamic targetingRuleNotSatisfied;
@property(nonatomic) int triggeringEventIndex; // @dynamic triggeringEventIndex;
@property(nonatomic) int userAction; // @dynamic userAction;

@end


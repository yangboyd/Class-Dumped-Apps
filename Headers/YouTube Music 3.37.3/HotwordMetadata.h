//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSMutableArray, NSString;

@interface HotwordMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool cleanerLowThresholdTrigger; // @dynamic cleanerLowThresholdTrigger;
@property(nonatomic) int detectionLatencyMs; // @dynamic detectionLatencyMs;
@property(nonatomic) int finalProcessingLagMs; // @dynamic finalProcessingLagMs;
@property(nonatomic) _Bool hasCleanerLowThresholdTrigger; // @dynamic hasCleanerLowThresholdTrigger;
@property(nonatomic) _Bool hasDetectionLatencyMs; // @dynamic hasDetectionLatencyMs;
@property(nonatomic) _Bool hasFinalProcessingLagMs; // @dynamic hasFinalProcessingLagMs;
@property(nonatomic) _Bool hasHotwordDurationMs; // @dynamic hasHotwordDurationMs;
@property(nonatomic) _Bool hasHotwordFiredAfterNearMiss; // @dynamic hasHotwordFiredAfterNearMiss;
@property(nonatomic) _Bool hasHotwordModel; // @dynamic hasHotwordModel;
@property(nonatomic) _Bool hasHotwordScore; // @dynamic hasHotwordScore;
@property(nonatomic) _Bool hasHotwordSpeakeridScore; // @dynamic hasHotwordSpeakeridScore;
@property(nonatomic) _Bool hasHotwordStartTimeMs; // @dynamic hasHotwordStartTimeMs;
@property(nonatomic) _Bool hasIsMagicMicBargedInByHotword; // @dynamic hasIsMagicMicBargedInByHotword;
@property(nonatomic) _Bool hasLowConfidenceTrigger; // @dynamic hasLowConfidenceTrigger;
@property(nonatomic) _Bool hasNearMissMaxScore; // @dynamic hasNearMissMaxScore;
@property(nonatomic) _Bool hasTriggeredHotwordIndex; // @dynamic hasTriggeredHotwordIndex;
@property(nonatomic) int hotwordDurationMs; // @dynamic hotwordDurationMs;
@property(nonatomic) _Bool hotwordFiredAfterNearMiss; // @dynamic hotwordFiredAfterNearMiss;
@property(copy, nonatomic) NSString *hotwordModel; // @dynamic hotwordModel;
@property(nonatomic) float hotwordScore; // @dynamic hotwordScore;
@property(retain, nonatomic) GPBInt32Array *hotwordScoreHistoryArray; // @dynamic hotwordScoreHistoryArray;
@property(readonly, nonatomic) unsigned long long hotwordScoreHistoryArray_Count; // @dynamic hotwordScoreHistoryArray_Count;
@property(nonatomic) float hotwordSpeakeridScore; // @dynamic hotwordSpeakeridScore;
@property(nonatomic) int hotwordStartTimeMs; // @dynamic hotwordStartTimeMs;
@property(nonatomic) _Bool isMagicMicBargedInByHotword; // @dynamic isMagicMicBargedInByHotword;
@property(nonatomic) _Bool lowConfidenceTrigger; // @dynamic lowConfidenceTrigger;
@property(nonatomic) float nearMissMaxScore; // @dynamic nearMissMaxScore;
@property(nonatomic) int triggeredHotwordIndex; // @dynamic triggeredHotwordIndex;
@property(retain, nonatomic) NSMutableArray *triggeredPhraseArray; // @dynamic triggeredPhraseArray;
@property(readonly, nonatomic) unsigned long long triggeredPhraseArray_Count; // @dynamic triggeredPhraseArray_Count;

@end


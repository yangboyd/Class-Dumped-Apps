//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32FloatDictionary;

@interface SCSUPSectionEngagement_EngagementScores : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32FloatDictionary *sectionContentNormalizedScores; // @dynamic sectionContentNormalizedScores;
@property(readonly, nonatomic) unsigned long long sectionContentNormalizedScores_Count; // @dynamic sectionContentNormalizedScores_Count;
@property(retain, nonatomic) GPBInt32FloatDictionary *sectionContentPercentileScores; // @dynamic sectionContentPercentileScores;
@property(readonly, nonatomic) unsigned long long sectionContentPercentileScores_Count; // @dynamic sectionContentPercentileScores_Count;
@property(retain, nonatomic) GPBInt32FloatDictionary *sectionContentRawScores; // @dynamic sectionContentRawScores;
@property(readonly, nonatomic) unsigned long long sectionContentRawScores_Count; // @dynamic sectionContentRawScores_Count;
@property(nonatomic) float totalEngagementScore; // @dynamic totalEngagementScore;
@property(nonatomic) float totalEngagementScorePercentile; // @dynamic totalEngagementScorePercentile;

@end


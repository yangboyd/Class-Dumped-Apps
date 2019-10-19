//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GRCPartialResult, GRCRecognitionResult;

@interface GRCRecognitionEvent : GPBMessage
{
}

+ (id)descriptor;
- (id)partialPartsRankedByStability;
- (id)partialResultString;
- (id)stringByAppendingResultToPrefix:(id)arg1;

// Remaining properties
@property(retain, nonatomic) GRCRecognitionResult *combinedResult; // @dynamic combinedResult;
@property(nonatomic) long long endOfPreambleFrame; // @dynamic endOfPreambleFrame;
@property(nonatomic) long long endOfPreambleMs; // @dynamic endOfPreambleMs;
@property(nonatomic) long long endOfSegmentFlushMs; // @dynamic endOfSegmentFlushMs;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) long long generationTimeMs; // @dynamic generationTimeMs;
@property(nonatomic) _Bool hasCombinedResult; // @dynamic hasCombinedResult;
@property(nonatomic) _Bool hasEndOfPreambleFrame; // @dynamic hasEndOfPreambleFrame;
@property(nonatomic) _Bool hasEndOfPreambleMs; // @dynamic hasEndOfPreambleMs;
@property(nonatomic) _Bool hasEndOfSegmentFlushMs; // @dynamic hasEndOfSegmentFlushMs;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasGenerationTimeMs; // @dynamic hasGenerationTimeMs;
@property(nonatomic) _Bool hasPartialResult; // @dynamic hasPartialResult;
@property(nonatomic) _Bool hasPrefetchResult; // @dynamic hasPrefetchResult;
@property(nonatomic) _Bool hasResult; // @dynamic hasResult;
@property(retain, nonatomic) GRCPartialResult *partialResult; // @dynamic partialResult;
@property(retain, nonatomic) GRCRecognitionResult *prefetchResult; // @dynamic prefetchResult;
@property(retain, nonatomic) GRCRecognitionResult *result; // @dynamic result;

@end


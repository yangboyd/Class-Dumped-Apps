//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsXplatTracingTracingProto_AbortReason, ComGoogleAppsXplatTracingTracingProto_Attribute, ComGoogleAppsXplatTracingTracingProto_EventIntegrity, ComGoogleAppsXplatTracingTracingProto_Level, ComGoogleAppsXplatTracingTracingProto_TraceEvent, ComGoogleAppsXplatTracingTracingProto_TraceId, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsXplatTracingTracingProto_TraceOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsXplatTracingTracingProto_Attribute *)getAttributesWithInt:(int)arg1;
- (id <JavaUtilList>)getAttributesList;
- (int)getAttributesCount;
- (ComGoogleAppsXplatTracingTracingProto_AbortReason *)getAbortReason;
- (_Bool)hasAbortReason;
- (ComGoogleAppsXplatTracingTracingProto_EventIntegrity *)getEventIntegrity;
- (_Bool)hasEventIntegrity;
- (int)getTotalEventsDropped;
- (_Bool)hasTotalEventsDropped;
- (int)getTotalEventsPruned;
- (_Bool)hasTotalEventsPruned;
- (ComGoogleAppsXplatTracingTracingProto_Level *)getLevel;
- (_Bool)hasLevel;
- (int)getInverseSamplingProbability;
- (_Bool)hasInverseSamplingProbability;
- (double)getBaseTimestamp;
- (_Bool)hasBaseTimestamp;
- (ComGoogleAppsXplatTracingTracingProto_TraceEvent *)getEventsWithInt:(int)arg1;
- (id <JavaUtilList>)getEventsList;
- (int)getEventsCount;
- (NSString *)getTraceKey;
- (_Bool)hasTraceKey;
- (ComGoogleAppsXplatTracingTracingProto_TraceId *)getId;
- (_Bool)hasId;
@end


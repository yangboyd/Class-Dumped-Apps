//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGooglePersonalizationAssistAnnotateApiAnnotation, ComGooglePersonalizationAssistAnnotateApiEventInfo, ComGooglePersonalizationAssistAnnotateApiFlexScheduleInfo, ComGooglePersonalizationAssistAnnotateApiFormattedText, ComGooglePersonalizationAssistAnnotateApiRenderingData, ComGooglePersonalizationAssistAnnotateApiSuggestionClick, ComGooglePersonalizationAssistAnnotateApiTime, ComGoogleProtosSuggestCompletionFragmentsProto_CompletionFragments, NSString;

@protocol ComGooglePersonalizationAssistAnnotateApiAnnotatedSuggestionOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGooglePersonalizationAssistAnnotateApiFlexScheduleInfo *)getFlexScheduleInfo;
- (_Bool)hasFlexScheduleInfo;
- (ComGooglePersonalizationAssistAnnotateApiEventInfo *)getEventInfo;
- (_Bool)hasEventInfo;
- (ComGooglePersonalizationAssistAnnotateApiTime *)getDueTime;
- (_Bool)hasDueTime;
- (NSString *)getDisplayString;
- (_Bool)hasDisplayString;
- (ComGooglePersonalizationAssistAnnotateApiSuggestionClick *)getSuggestionClick;
- (_Bool)hasSuggestionClick;
- (ComGooglePersonalizationAssistAnnotateApiFormattedText *)getSubsubtext;
- (_Bool)hasSubsubtext;
- (NSString *)getSubtext;
- (_Bool)hasSubtext;
- (ComGoogleProtosSuggestCompletionFragmentsProto_CompletionFragments *)getCompletionFragments;
- (_Bool)hasCompletionFragments;
- (NSString *)getHtmlSuggestion;
- (_Bool)hasHtmlSuggestion;
- (ComGooglePersonalizationAssistAnnotateApiRenderingData *)getRenderingData;
- (_Bool)hasRenderingData;
- (ComGooglePersonalizationAssistAnnotateApiAnnotation *)getAnnotation;
- (_Bool)hasAnnotation;
- (NSString *)getAnnotationHint;
- (_Bool)hasAnnotationHint;
- (NSString *)getQuery;
- (_Bool)hasQuery;
@end


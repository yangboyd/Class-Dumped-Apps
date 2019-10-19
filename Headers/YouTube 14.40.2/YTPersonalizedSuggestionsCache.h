//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe, NSArray, NSDictionary, YTMonotonicDate, YTUserDefaults;

@interface YTPersonalizedSuggestionsCache : NSObject
{
    YTUserDefaults *_userDefaults;
    GIMMe *_gimme;
    NSArray *_suggestions;
    NSDictionary *_groupedSuggestions;
    NSArray *_allHeaders;
    YTMonotonicDate *_lastUpdateTime;
}

@property(retain, nonatomic) YTMonotonicDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(copy, nonatomic) NSArray *allHeaders; // @synthesize allHeaders=_allHeaders;
@property(copy, nonatomic) NSDictionary *groupedSuggestions; // @synthesize groupedSuggestions=_groupedSuggestions;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isValidIndexPath:(id)arg1;
- (id)allSuggestions;
- (long long)indexFromIndexPath:(id)arg1;
- (id)suggestionForIndexPath:(id)arg1;
- (id)suggestionsForSection:(long long)arg1;
- (void)removeSuggestionAtIndexPath:(id)arg1;
- (id)suggestionAtRow:(long long)arg1;
- (void)removeSuggestion:(id)arg1;
- (_Bool)needsUpdate;
- (_Bool)hasExpired;
- (void)clearCache;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PisaResponse.h"

@class NSArray, NSDictionary;

@interface PisaSearchResponse : PisaResponse
{
    unsigned long long _totalCount;
    unsigned long long _availableCount;
    NSArray *_results;
    NSArray *_scSearchResults;
    NSArray *_freshSearchResults;
    NSDictionary *_refinements;
    NSArray *_sortOptions;
}

@property(readonly, nonatomic) NSArray *sortOptions; // @synthesize sortOptions=_sortOptions;
@property(readonly, nonatomic) NSDictionary *refinements; // @synthesize refinements=_refinements;
@property(readonly, nonatomic) NSArray *freshSearchResults; // @synthesize freshSearchResults=_freshSearchResults;
@property(readonly, nonatomic) NSArray *scSearchResults; // @synthesize scSearchResults=_scSearchResults;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) unsigned long long availableCount; // @synthesize availableCount=_availableCount;
@property(readonly, nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (id)description;
- (id)initFromJsonDictionary:(id)arg1;

@end


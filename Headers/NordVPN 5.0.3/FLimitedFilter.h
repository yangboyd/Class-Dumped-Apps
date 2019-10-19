//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNodeFilter-Protocol.h"

@class FRangedFilter, NSString;
@protocol FIndex, FNodeFilter;

@interface FLimitedFilter : NSObject <FNodeFilter>
{
    _Bool _reverse;
    FRangedFilter *_rangedFilter;
    id <FIndex> _index;
    long long _limit;
}

@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) id <FIndex> index; // @synthesize index=_index;
@property(retain, nonatomic) FRangedFilter *rangedFilter; // @synthesize rangedFilter=_rangedFilter;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FNodeFilter> indexedFilter;
- (_Bool)filtersNodes;
- (id)updatePriority:(id)arg1 forNode:(id)arg2;
- (id)updateFullNode:(id)arg1 withNewNode:(id)arg2 accumulator:(id)arg3;
- (id)fullLimitUpdateNode:(id)arg1 forChildKey:(id)arg2 newChild:(id)arg3 fromSource:(id)arg4 accumulator:(id)arg5;
- (id)updateChildIn:(id)arg1 forChildKey:(id)arg2 newChild:(id)arg3 affectedPath:(id)arg4 fromSource:(id)arg5 accumulator:(id)arg6;
- (id)initWithQueryParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


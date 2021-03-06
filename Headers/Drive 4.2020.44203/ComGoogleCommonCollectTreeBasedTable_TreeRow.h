//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectStandardTable_Row.h"

#import "JavaUtilSortedMap-Protocol.h"

@class ComGoogleCommonCollectTreeBasedTable, NSString;
@protocol JavaUtilSortedMap;

@interface ComGoogleCommonCollectTreeBasedTable_TreeRow : ComGoogleCommonCollectStandardTable_Row <JavaUtilSortedMap>
{
    ComGoogleCommonCollectTreeBasedTable *this$1_;
    id lowerBound_;
    id upperBound_;
    id <JavaUtilSortedMap> wholeRow_;
}

- (void)dealloc;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsKeyWithId:(id)arg1;
- (void)maintainEmptyInvariant;
- (id)computeBackingRowMap;
- (id)backingRowMap;
- (id)wholeRow;
- (id)lastKey;
- (id)firstKey;
- (id)tailMapWithId:(id)arg1;
- (id)headMapWithId:(id)arg1;
- (id)subMapWithId:(id)arg1 withId:(id)arg2;
- (_Bool)rangeContainsWithId:(id)arg1;
- (int)compareWithId:(id)arg1 withId:(id)arg2;
- (id)comparator;
- (id)keySet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


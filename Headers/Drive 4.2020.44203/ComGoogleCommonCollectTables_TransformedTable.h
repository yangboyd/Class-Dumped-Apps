//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractTable.h"

@protocol ComGoogleCommonBaseFunction, ComGoogleCommonCollectTable;

@interface ComGoogleCommonCollectTables_TransformedTable : ComGoogleCommonCollectAbstractTable
{
    id <ComGoogleCommonCollectTable> fromTable_;
    id <ComGoogleCommonBaseFunction> function_;
}

- (void)dealloc;
- (id)columnMap;
- (id)rowMap;
- (id)createValues;
- (id)columnKeySet;
- (id)rowKeySet;
- (id)cellSpliterator;
- (id)cellIterator;
- (id)cellFunction;
- (id)columnWithId:(id)arg1;
- (id)rowWithId:(id)arg1;
- (id)removeWithId:(id)arg1 withId:(id)arg2;
- (void)putAllWithComGoogleCommonCollectTable:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (void)clear;
- (int)size;
- (id)getWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsWithId:(id)arg1 withId:(id)arg2;

@end


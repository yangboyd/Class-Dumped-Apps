//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractIterator.h"

@class ComGoogleCommonCollectImmutableRangeSet_AsSet;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectImmutableRangeSet_AsSet_2 : ComGoogleCommonCollectAbstractIterator
{
    ComGoogleCommonCollectImmutableRangeSet_AsSet *this$0_;
    id <JavaUtilIterator> rangeItr_;
    id <JavaUtilIterator> elemItr_;
}

- (void)dealloc;
- (id)computeNext;

@end


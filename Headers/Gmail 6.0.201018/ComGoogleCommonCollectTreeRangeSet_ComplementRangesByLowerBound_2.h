//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractIterator.h"

@class ComGoogleCommonCollectCut, ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound;
@protocol ComGoogleCommonCollectPeekingIterator;

@interface ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_2 : ComGoogleCommonCollectAbstractIterator
{
    ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound *this$0_;
    id <ComGoogleCommonCollectPeekingIterator> val$positiveItr_;
    ComGoogleCommonCollectCut *nextComplementRangeUpperBound_;
}

- (void)dealloc;
- (id)computeNext;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectUnmodifiableIterator.h"

@class ComGoogleCommonCollectTreeTraverser;
@protocol JavaUtilDeque;

@interface ComGoogleCommonCollectTreeTraverser_PreOrderIterator : ComGoogleCommonCollectUnmodifiableIterator
{
    ComGoogleCommonCollectTreeTraverser *this$0_;
    id <JavaUtilDeque> stack_;
}

- (void)dealloc;
- (id)next;
- (_Bool)hasNext;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractIterator.h"

@protocol JavaUtilQueue;

@interface ComGoogleCommonCollectConsumingQueueIterator : ComGoogleCommonCollectAbstractIterator
{
    id <JavaUtilQueue> queue_;
}

- (void)dealloc;
- (id)computeNext;
- (id)initPackagePrivateWithJavaUtilQueue:(id)arg1;
- (id)initPackagePrivateWithNSObjectArray:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncCallable-Protocol.h"

@class ComGoogleCommonUtilConcurrentClosingFuture_Combiner, NSString;
@protocol ComGoogleCommonUtilConcurrentClosingFuture_Combiner_AsyncCombiningCallable;

@interface ComGoogleCommonUtilConcurrentClosingFuture_Combiner_2 : NSObject <ComGoogleCommonUtilConcurrentAsyncCallable>
{
    ComGoogleCommonUtilConcurrentClosingFuture_Combiner *this$0_;
    id <ComGoogleCommonUtilConcurrentClosingFuture_Combiner_AsyncCombiningCallable> val$combiningCallable_;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


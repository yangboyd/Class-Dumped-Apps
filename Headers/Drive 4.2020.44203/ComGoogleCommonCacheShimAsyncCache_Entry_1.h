//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangRunnable-Protocol.h"

@class ComGoogleCommonBaseStopwatch, ComGoogleCommonCacheShimAsyncCache_Entry, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@interface ComGoogleCommonCacheShimAsyncCache_Entry_1 : NSObject <JavaLangRunnable>
{
    ComGoogleCommonCacheShimAsyncCache_Entry *this$0_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> val$future_;
    ComGoogleCommonBaseStopwatch *val$timer_;
}

- (void)dealloc;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


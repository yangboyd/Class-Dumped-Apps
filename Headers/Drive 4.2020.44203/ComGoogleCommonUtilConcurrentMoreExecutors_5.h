//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilConcurrentExecutor-Protocol.h"

@class ComGoogleCommonUtilConcurrentAbstractFuture, NSString;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentMoreExecutors_5 : NSObject <JavaUtilConcurrentExecutor>
{
    id <JavaUtilConcurrentExecutor> val$delegate_;
    ComGoogleCommonUtilConcurrentAbstractFuture *val$future_;
}

- (void)dealloc;
- (void)executeWithJavaLangRunnable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


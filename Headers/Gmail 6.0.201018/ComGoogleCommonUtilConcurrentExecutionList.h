//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair;

@interface ComGoogleCommonUtilConcurrentExecutionList : NSObject
{
    ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair *runnables_;
    _Bool executed_;
}

+ (void)initialize;
- (void)dealloc;
- (void)execute;
- (void)addWithJavaLangRunnable:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilConcurrentExecutorService-Protocol.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable, JavaUtilConcurrentCallable, JavaUtilConcurrentScheduledFuture;

@protocol JavaUtilConcurrentScheduledExecutorService <JavaUtilConcurrentExecutorService, JavaObject>
- (id <JavaUtilConcurrentScheduledFuture>)scheduleWithFixedDelayWithJavaLangRunnable:(id <JavaLangRunnable>)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg4;
- (id <JavaUtilConcurrentScheduledFuture>)scheduleAtFixedRateWithJavaLangRunnable:(id <JavaLangRunnable>)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg4;
- (id <JavaUtilConcurrentScheduledFuture>)scheduleWithJavaUtilConcurrentCallable:(id <JavaUtilConcurrentCallable>)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg3;
- (id <JavaUtilConcurrentScheduledFuture>)scheduleWithJavaLangRunnable:(id <JavaLangRunnable>)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg3;
@end


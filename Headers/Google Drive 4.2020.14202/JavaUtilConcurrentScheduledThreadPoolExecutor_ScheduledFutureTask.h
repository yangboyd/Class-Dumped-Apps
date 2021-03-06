//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentFutureTask.h"

#import "JavaUtilConcurrentRunnableScheduledFuture-Protocol.h"

@class JavaUtilConcurrentScheduledThreadPoolExecutor, NSString;
@protocol JavaUtilConcurrentRunnableScheduledFuture;

@interface JavaUtilConcurrentScheduledThreadPoolExecutor_ScheduledFutureTask : JavaUtilConcurrentFutureTask <JavaUtilConcurrentRunnableScheduledFuture>
{
    JavaUtilConcurrentScheduledThreadPoolExecutor *this$0_;
    long long sequenceNumber_;
    // Error parsing type: Aq, name: time_
    long long period_;
    id <JavaUtilConcurrentRunnableScheduledFuture> outerTask_;
    int heapIndex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (void)run;
- (_Bool)cancelWithBoolean:(_Bool)arg1;
- (void)setNextRunTime;
- (_Bool)isPeriodic;
- (int)compareToWithId:(id)arg1;
- (long long)getDelayWithJavaUtilConcurrentTimeUnit:(id)arg1;
- (id)initWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1 withJavaUtilConcurrentCallable:(id)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)initWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1 withJavaLangRunnable:(id)arg2 withId:(id)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6;
- (id)initWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1 withJavaLangRunnable:(id)arg2 withId:(id)arg3 withLong:(long long)arg4 withLong:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


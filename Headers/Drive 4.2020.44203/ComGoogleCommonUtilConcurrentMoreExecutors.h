//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ComGoogleCommonUtilConcurrentMoreExecutors : NSObject
{
}

+ (id)rejectionPropagatingExecutorWithJavaUtilConcurrentExecutor:(id)arg1 withComGoogleCommonUtilConcurrentAbstractFuture:(id)arg2;
+ (_Bool)shutdownAndAwaitTerminationWithJavaUtilConcurrentExecutorService:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
+ (_Bool)shutdownAndAwaitTerminationWithJavaUtilConcurrentExecutorService:(id)arg1 withJavaTimeDuration:(id)arg2;
+ (id)rateLimitingExecutorServiceWithComGoogleCommonUtilConcurrentRateLimiter:(id)arg1 withComGoogleCommonUtilConcurrentListeningScheduledExecutorService:(id)arg2 withInt:(int)arg3;
+ (id)rateLimitingExecutorServiceWithComGoogleCommonUtilConcurrentRateLimiter:(id)arg1 withComGoogleCommonUtilConcurrentListeningScheduledExecutorService:(id)arg2;
+ (id)renamingDecoratorWithJavaUtilConcurrentScheduledExecutorService:(id)arg1 withComGoogleCommonBaseSupplier:(id)arg2;
+ (id)renamingDecoratorWithJavaUtilConcurrentExecutorService:(id)arg1 withComGoogleCommonBaseSupplier:(id)arg2;
+ (id)renamingDecoratorWithJavaUtilConcurrentExecutor:(id)arg1 withComGoogleCommonBaseSupplier:(id)arg2;
+ (id)newThreadWithNSString:(id)arg1 withJavaLangRunnable:(id)arg2;
+ (id)platformThreadFactory;
+ (id)invokeAnyImplWithComGoogleCommonUtilConcurrentListeningExecutorService:(id)arg1 withJavaUtilCollection:(id)arg2 withBoolean:(_Bool)arg3 withLong:(long long)arg4 withJavaUtilConcurrentTimeUnit:(id)arg5;
+ (id)invokeAnyImplWithComGoogleCommonUtilConcurrentListeningExecutorService:(id)arg1 withJavaUtilCollection:(id)arg2 withBoolean:(_Bool)arg3 withJavaTimeDuration:(id)arg4;
+ (id)listeningDecoratorWithJavaUtilConcurrentScheduledExecutorService:(id)arg1;
+ (id)listeningDecoratorWithJavaUtilConcurrentExecutorService:(id)arg1;
+ (id)newSequentialExecutorWithJavaUtilConcurrentExecutor:(id)arg1;
+ (id)directExecutor;
+ (id)newDirectExecutorService;
+ (void)addDelayedShutdownHookWithJavaUtilConcurrentExecutorService:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
+ (void)addDelayedShutdownHookWithJavaUtilConcurrentExecutorService:(id)arg1 withJavaTimeDuration:(id)arg2;
+ (id)getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1;
+ (id)getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
+ (id)getExitingScheduledExecutorServiceWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1 withJavaTimeDuration:(id)arg2;
+ (id)getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor:(id)arg1;
+ (id)getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
+ (id)getExitingExecutorServiceWithJavaUtilConcurrentThreadPoolExecutor:(id)arg1 withJavaTimeDuration:(id)arg2;

@end


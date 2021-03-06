//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonUtilConcurrentService_Listener, ComGoogleCommonUtilConcurrentService_State, JavaLangThrowable, JavaTimeDuration, JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentService, JavaUtilConcurrentExecutor;

@protocol ComGoogleCommonUtilConcurrentService <JavaObject>
- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(ComGoogleCommonUtilConcurrentService_Listener *)arg1 withJavaUtilConcurrentExecutor:(id <JavaUtilConcurrentExecutor>)arg2;
- (JavaLangThrowable *)failureCause;
- (void)awaitTerminatedWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg2;
- (void)awaitTerminatedWithJavaTimeDuration:(JavaTimeDuration *)arg1;
- (void)awaitTerminated;
- (void)awaitRunningWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg2;
- (void)awaitRunningWithJavaTimeDuration:(JavaTimeDuration *)arg1;
- (void)awaitRunning;
- (id <ComGoogleCommonUtilConcurrentService>)stopAsync;
- (ComGoogleCommonUtilConcurrentService_State *)state;
- (_Bool)isRunning;
- (id <ComGoogleCommonUtilConcurrentService>)startAsync;
@end


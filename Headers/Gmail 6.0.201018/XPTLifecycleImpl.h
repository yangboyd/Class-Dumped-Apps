//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XPTLifecycle.h"

@class ComGoogleCommonUtilConcurrentSettableFuture, NSString;
@protocol JavaUtilSet, XPTLifecycle_OnStartCallable, XPTLifecycle_OnStopCallable;

@interface XPTLifecycleImpl : XPTLifecycle
{
    NSString *name_;
    id owner_;
    id <JavaUtilSet> startDependencies_;
    id <JavaUtilSet> startedDependencies_;
    id <JavaUtilSet> stopDependencies_;
    id <XPTLifecycle_OnStartCallable> onStartCallable_;
    id <XPTLifecycle_OnStopCallable> onStopCallable_;
    ComGoogleCommonUtilConcurrentSettableFuture *startedFuture_;
    ComGoogleCommonUtilConcurrentSettableFuture *stoppedFuture_;
    unsigned long long whenRunning_;
    _Bool startCalled_;
    _Bool stopCalled_;
}

+ (void)initialize;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)toDot;
- (id)getName;
- (id)checkSuccessfullyStarted;
- (id)checkRunning;
- (_Bool)isStopped;
- (_Bool)isRunning;
- (_Bool)wasStopCalled;
- (_Bool)wasStartCalled;
- (id)whenRunning;
- (id)stopWithJavaUtilConcurrentExecutor:(id)arg1;
- (id)startWithJavaUtilConcurrentExecutor:(id)arg1;
- (void)removeStopDependencyWithXPTLifecycle:(id)arg1;
- (void)addStopDependencyWithXPTLifecycle:(id)arg1;
- (_Bool)isCallableOnStopNull;
- (_Bool)isCallableOnStartNull;
- (id)copyOfStopDependencies;
- (id)getStartDependencies;
- (id)getLifecycle;
- (id)owner;

@end


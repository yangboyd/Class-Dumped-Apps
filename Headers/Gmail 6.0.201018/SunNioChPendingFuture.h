//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilConcurrentFuture-Protocol.h"

@class JavaUtilConcurrentCountDownLatch, NSString;
@protocol JavaNioChannelsAsynchronousChannel, JavaNioChannelsCompletionHandler, JavaUtilConcurrentFuture;

@interface SunNioChPendingFuture : NSObject <JavaUtilConcurrentFuture>
{
    id <JavaNioChannelsAsynchronousChannel> channel_;
    id <JavaNioChannelsCompletionHandler> handler_;
    id attachment_;
    // Error parsing type: AB, name: haveResult_
    unsigned long long result_;
    unsigned long long exc_;
    JavaUtilConcurrentCountDownLatch *latch_;
    id <JavaUtilConcurrentFuture> timeoutTask_;
    unsigned long long context_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (_Bool)cancelWithBoolean:(_Bool)arg1;
- (_Bool)isDone;
- (_Bool)isCancelled;
- (id)value;
- (id)exception;
- (id)getWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (id)get;
- (void)setResultWithId:(id)arg1 withJavaLangThrowable:(id)arg2;
- (void)setFailureWithJavaLangThrowable:(id)arg1;
- (void)setResultWithId:(id)arg1;
- (_Bool)prepareForWait;
- (void)setTimeoutTaskWithJavaUtilConcurrentFuture:(id)arg1;
- (id)getContext;
- (void)setContextWithId:(id)arg1;
- (id)attachment;
- (id)handler;
- (id)channel;
- (id)initPackagePrivateWithJavaNioChannelsAsynchronousChannel:(id)arg1 withId:(id)arg2;
- (id)initPackagePrivateWithJavaNioChannelsAsynchronousChannel:(id)arg1;
- (id)initPackagePrivateWithJavaNioChannelsAsynchronousChannel:(id)arg1 withJavaNioChannelsCompletionHandler:(id)arg2 withId:(id)arg3;
- (id)initPackagePrivateWithJavaNioChannelsAsynchronousChannel:(id)arg1 withJavaNioChannelsCompletionHandler:(id)arg2 withId:(id)arg3 withId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


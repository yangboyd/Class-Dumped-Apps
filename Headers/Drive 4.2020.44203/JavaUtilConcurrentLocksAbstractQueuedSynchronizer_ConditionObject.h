//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilConcurrentLocksCondition-Protocol.h"

@class JavaUtilConcurrentLocksAbstractQueuedSynchronizer, JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node, NSString;

@interface JavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject : NSObject <JavaUtilConcurrentLocksCondition, JavaIoSerializable>
{
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer *this$0_;
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *firstWaiter_;
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *lastWaiter_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getWaitingThreads;
- (int)getWaitQueueLength;
- (_Bool)hasWaiters;
- (_Bool)isOwnedByWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer:(id)arg1;
- (_Bool)awaitWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (_Bool)awaitUntilWithJavaUtilDate:(id)arg1;
- (long long)awaitNanosWithLong:(long long)arg1;
- (void)await;
- (void)reportInterruptAfterWaitWithInt:(int)arg1;
- (int)checkInterruptWhileWaitingWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1;
- (void)awaitUninterruptibly;
- (void)signalAll;
- (void)signal;
- (void)unlinkCancelledWaiters;
- (void)doSignalAllWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1;
- (void)doSignalWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1;
- (id)addConditionWaiter;
- (id)initWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


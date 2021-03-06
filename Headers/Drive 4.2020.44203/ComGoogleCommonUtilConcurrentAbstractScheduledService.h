//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentService-Protocol.h"

@class ComGoogleCommonUtilConcurrentAbstractService, NSString;

@interface ComGoogleCommonUtilConcurrentAbstractScheduledService : NSObject <ComGoogleCommonUtilConcurrentService>
{
    ComGoogleCommonUtilConcurrentAbstractService *delegate_;
}

+ (void)initialize;
- (void)dealloc;
- (void)awaitTerminatedWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (void)awaitTerminatedWithJavaTimeDuration:(id)arg1;
- (void)awaitTerminated;
- (void)awaitRunningWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (void)awaitRunningWithJavaTimeDuration:(id)arg1;
- (void)awaitRunning;
- (id)stopAsync;
- (id)startAsync;
- (id)failureCause;
- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;
- (id)state;
- (_Bool)isRunning;
@property(readonly, copy) NSString *description;
- (id)serviceName;
- (id)executor;
- (void)shutDown;
- (void)startUp;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPTAsyncIteration_NextValue-Protocol.h"

@class ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunnerImpl, JavaUtilConcurrentAtomicAtomicInteger, NSString;
@protocol ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner_RunWithMailConnection, JavaUtilConcurrentExecutor;

@interface ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunnerImpl_$Lambda$2 : NSObject <XPTAsyncIteration_NextValue>
{
    ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunnerImpl *this$0_;
    JavaUtilConcurrentAtomicAtomicInteger *val$iterationCount_;
    id <ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner_RunWithMailConnection> val$task_;
    id <JavaUtilConcurrentExecutor> val$executor_;
}

- (void)dealloc;
- (id)nextValueWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


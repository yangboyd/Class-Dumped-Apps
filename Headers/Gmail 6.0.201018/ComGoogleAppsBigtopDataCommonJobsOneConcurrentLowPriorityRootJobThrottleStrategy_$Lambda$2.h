//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangRunnable-Protocol.h"

@class ComGoogleAppsBigtopDataCommonJobsOneConcurrentLowPriorityRootJobThrottleStrategy, NSString, XPTAsyncThrottle_ThrottledTask;
@protocol XPTAsyncTraceSection;

@interface ComGoogleAppsBigtopDataCommonJobsOneConcurrentLowPriorityRootJobThrottleStrategy_$Lambda$2 : NSObject <JavaLangRunnable>
{
    ComGoogleAppsBigtopDataCommonJobsOneConcurrentLowPriorityRootJobThrottleStrategy *this$0_;
    XPTAsyncThrottle_ThrottledTask *val$task_;
    _Bool val$recordTraceSection_;
    id <XPTAsyncTraceSection> val$section_;
}

- (void)dealloc;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


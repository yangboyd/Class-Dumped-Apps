//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPTFlushable-Protocol.h"
#import "XPTStoppable-Protocol.h"

@class NSString, XPTExecutionGuard, XPTFlusher, XPTStopper;
@protocol JavaUtilConcurrentExecutor;

@interface XPTLifecycleManager : NSObject <XPTFlushable, XPTStoppable>
{
    // Error parsing type: AB, name: stopped_
    id lock_;
    XPTExecutionGuard *guard_;
    XPTFlusher *flusher_;
    XPTStopper *stopper_;
    id <JavaUtilConcurrentExecutor> executor_;
}

+ (void)initialize;
- (void)dealloc;
- (id)stop;
- (id)flush;
- (_Bool)isStopped;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


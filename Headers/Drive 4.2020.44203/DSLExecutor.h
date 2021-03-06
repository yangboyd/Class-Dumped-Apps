//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilConcurrentExecutor-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface DSLExecutor : NSObject <JavaUtilConcurrentExecutor>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (void)listenInPoolThread:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
+ (void)listenInPoolThread:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)executeWithJavaLangRunnable:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


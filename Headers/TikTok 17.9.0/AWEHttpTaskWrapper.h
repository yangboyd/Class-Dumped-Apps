//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEHttpTask-Protocol.h"

@class NSString, TTHttpTask;
@protocol OS_dispatch_queue;

@interface AWEHttpTaskWrapper : NSObject <AWEHttpTask>
{
    float _latestPriority;
    TTHttpTask *_httpTask;
    CDUnknownBlockType _wrapTaskBlock;
    NSObject<OS_dispatch_queue> *_lock;
    long long _retryOptions;
}

- (void).cxx_destruct;
@property(nonatomic) long long retryOptions; // @synthesize retryOptions=_retryOptions;
@property(nonatomic) float latestPriority; // @synthesize latestPriority=_latestPriority;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lock; // @synthesize lock=_lock;
@property(readonly, copy, nonatomic) CDUnknownBlockType wrapTaskBlock; // @synthesize wrapTaskBlock=_wrapTaskBlock;
@property(retain, nonatomic) TTHttpTask *httpTask; // @synthesize httpTask=_httpTask;
- (void)retryIfNeeded;
- (void)setPriority:(float)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
@property(readonly) long long state;
- (void)setTaskBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


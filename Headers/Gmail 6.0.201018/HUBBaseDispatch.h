//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBDispatch-Protocol.h"

@protocol OS_dispatch_queue;

@interface HUBBaseDispatch : NSObject <HUBDispatch>
{
}

- (id)createSerialQueueWithLabel:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *utilityQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *userInitiatedQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *userInteractiveQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *defaultQueue;
- (id)createQueueWithLabel:(id)arg1 attr:(id)arg2 targetQueue:(id)arg3;
- (id)createQueueWithLabel:(id)arg1 attr:(id)arg2;
- (id)globalQueueWithIdentifier:(long long)arg1 flags:(unsigned long long)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mainQueue;

@end


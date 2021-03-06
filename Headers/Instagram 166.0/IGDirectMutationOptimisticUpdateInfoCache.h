//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol IGDirectMutationOptimisticStateUpdatingListener, OS_dispatch_queue;

@interface IGDirectMutationOptimisticUpdateInfoCache : NSObject
{
    id <IGDirectMutationOptimisticStateUpdatingListener> _listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_optimisticUpdatesByThreadId;
}

- (void).cxx_destruct;
- (void)_saveUpdatedOptimisticInfos:(id)arg1 forThreadId:(id)arg2;
- (void)_enumerateOptimisticStateForMutationId:(id)arg1 threadId:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)dropOptimisticStateForMutationId:(id)arg1 threadId:(id)arg2;
- (void)updateStatusOfRequestForMutationId:(id)arg1 threadId:(id)arg2 updatedStatus:(id)arg3;
- (void)insertOptimisticUpdateInfo:(id)arg1;
- (id)optimisticUpdateInfos;
- (id)initWithListener:(id)arg1 queue:(id)arg2;

@end


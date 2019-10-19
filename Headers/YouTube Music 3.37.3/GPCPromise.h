//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPCAsyncRequest-Protocol.h"
#import "GPCDeferred-Protocol.h"

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface GPCPromise : NSObject <GPCAsyncRequest, GPCDeferred>
{
    _Bool _canceled;
    _Bool _completed;
    id _result;
    GPCPromise *_parent;
    NSArray *_children;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _progressBlock;
    NSObject<OS_dispatch_queue> *_blockQueue;
}

+ (void)setExceptionHandlerBlock:(CDUnknownBlockType)arg1;
+ (id)multi:(id)arg1 mode:(unsigned long long)arg2;
+ (id)sequenceWithQueue:(id)arg1 initial:(id)arg2 successBlocks:(struct NSArray *)arg3;
+ (id)globalQueueSequenceWithSuccessBlocks:(struct NSArray *)arg1;
+ (id)mainQueueSequenceWithSuccessBlocks:(struct NSArray *)arg1;
+ (id)sequenceWithQueue:(id)arg1 successBlocks:(struct NSArray *)arg2;
+ (id)anyIgnoreErrors:(id)arg1;
+ (id)any:(id)arg1;
+ (id)allIgnoreErrors:(id)arg1;
+ (id)all:(id)arg1;
+ (id)failedPromiseWithError:(id)arg1;
+ (id)completedPromiseWithResult:(id)arg1;
+ (id)waitSyncWithTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)waitSync:(CDUnknownBlockType)arg1;
+ (id)syncResult:(CDUnknownBlockType)arg1;
+ (id)syncResultWithTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)clearBlocks;
- (void)cancelParentIfNeeded;
- (void)linkToChildren:(id)arg1;
- (void)linkChild:(id)arg1;
- (void)linkToParent:(id)arg1;
- (id)withGlobalQueueOnSuccess:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2;
- (id)withGlobalQueueOnFailure:(CDUnknownBlockType)arg1;
- (id)withGlobalQueueOnSuccess:(CDUnknownBlockType)arg1;
- (id)withMainQueueOnFailure:(CDUnknownBlockType)arg1;
- (id)withMainQueueOnSuccess:(CDUnknownBlockType)arg1;
- (id)withMainQueueOnSuccess:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2 onCancel:(CDUnknownBlockType)arg3;
- (id)withMainQueueOnSuccess:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2;
- (id)withQueue:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (id)withQueue:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3 onCancel:(CDUnknownBlockType)arg4;
- (id)withQueue:(id)arg1 onFailure:(CDUnknownBlockType)arg2;
- (id)withQueue:(id)arg1 onSuccess:(CDUnknownBlockType)arg2;
- (id)withQueue:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 withProgress:(CDUnknownBlockType)arg3;
- (id)withQueue:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (id)withQueue:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3 onCancel:(CDUnknownBlockType)arg4 withProgress:(CDUnknownBlockType)arg5;
- (void)notifyChildrenOfProgress:(id)arg1;
- (void)notifyProgress:(id)arg1;
- (void)cancel;
- (void)processError:(id)arg1;
- (void)rejectChild:(id)arg1;
- (void)reject:(id)arg1;
- (void)processResult:(id)arg1;
- (void)resolveChild:(id)arg1;
- (void)resolve:(id)arg1;
- (id)gks_withMainQueueOnCompletion:(CDUnknownBlockType)arg1;
- (id)branchWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


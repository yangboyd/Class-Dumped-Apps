//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/WAReferenceCountTokenDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface WAReferenceCountController : NSObject <WAReferenceCountTokenDelegate>
{
    NSMutableArray *_completionBlocks;
    CDUnknownBlockType _persistentCompletionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    // Error parsing type: AI, name: _referenceCount
}

- (void).cxx_destruct;
- (void)referenceDidDeallocateBeforeRemoval:(id)arg1;
- (void)flushCompletionBlocksIfNeeded;
- (id)addReferenceWithOptionalCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)activeReferenceCount;
- (void)removeReference:(id)arg1;
- (id)addReferenceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)addReference;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 persistentCompletionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


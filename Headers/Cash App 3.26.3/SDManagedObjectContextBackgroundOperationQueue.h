//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class NSHashTable, NSObject;

@interface SDManagedObjectContextBackgroundOperationQueue : NSOperationQueue
{
    NSHashTable *_barrierOperations;
    NSObject *_barrierOperationsAccessLock;
}

@property(retain, nonatomic) NSObject *barrierOperationsAccessLock; // @synthesize barrierOperationsAccessLock=_barrierOperationsAccessLock;
@property(retain, nonatomic) NSHashTable *barrierOperations; // @synthesize barrierOperations=_barrierOperations;
- (void).cxx_destruct;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperation:(id)arg1;
- (void)addBarrierOperation:(id)arg1;
- (void)cancelManagedObjectContextBackgroundOperationExecutionBlocks;
- (id)init;
- (void)cancelAllOperations;

@end


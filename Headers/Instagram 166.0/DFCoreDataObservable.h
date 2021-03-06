//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol NSObject;

@interface DFCoreDataObservable : NSObject
{
    struct mutex _stateLock;
    NSPointerArray *_observerPointers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)internalDataObservables;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic) id <NSObject> latestData;
- (id)observerQueue;
- (void)onDataAccessed;
- (void)refreshIfNeeded;
- (void)refresh;
- (id)observers;
- (void)removeDataObserver:(id)arg1;
- (void)addDataObserver:(id)arg1;
- (id)init;

@end


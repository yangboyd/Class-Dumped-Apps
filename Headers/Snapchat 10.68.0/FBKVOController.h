//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface FBKVOController : NSObject
{
    NSMapTable *_objectInfosMap;
    struct _opaque_pthread_mutex_t _lock;
    id _observer;
}

+ (id)controllerWithObserver:(id)arg1;
@property(readonly, nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)unobserveAll;
- (void)unobserve:(id)arg1;
- (void)unobserve:(id)arg1 keyPath:(id)arg2;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)_unobserveAll;
- (void)_unobserve:(id)arg1;
- (void)_unobserve:(id)arg1 info:(id)arg2;
- (void)_observe:(id)arg1 info:(id)arg2;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;
- (id)initWithObserver:(id)arg1 retainObserved:(_Bool)arg2;
- (void)observe:(id)arg1 nestedKeyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)_observe:(id)arg1 nestedKeyPath:(id)arg2 options:(unsigned long long)arg3 initial:(_Bool)arg4 block:(CDUnknownBlockType)arg5;

@end


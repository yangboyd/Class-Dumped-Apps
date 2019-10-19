//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;

@interface YTEntityStoreObservers : NSObject
{
    NSMutableDictionary *_observersByKey;
    NSMapTable *_observerByKeyKeys;
    NSMutableDictionary *_observersByClass;
    NSMapTable *_observerByClassClasses;
}

- (void).cxx_destruct;
- (void)removeAllNilObservers;
- (void)removeAllKeyBasedObservers;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 fromClass:(Class)arg2;
- (void)removeObserver:(id)arg1 fromKey:(id)arg2;
- (void)addObserver:(id)arg1 toClass:(Class)arg2;
- (void)addObserver:(id)arg1 toKey:(id)arg2;
- (_Bool)haveObserversForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *classBasedObservers;
@property(readonly, copy, nonatomic) NSDictionary *keyBasedObservers;
- (id)init;

@end


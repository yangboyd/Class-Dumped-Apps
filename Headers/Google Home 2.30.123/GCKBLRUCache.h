//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKBLRUCacheEntry, NSMutableDictionary;

@interface GCKBLRUCache : NSObject
{
    GCKBLRUCacheEntry *_head;
    GCKBLRUCacheEntry *_tail;
    NSMutableDictionary *_cache;
    CDUnknownBlockType _evictionBlock;
    unsigned long long _capacity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void)unlinkEntry:(id)arg1;
- (void)linkEntry:(id)arg1;
- (void)clear;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 evictionBlock:(CDUnknownBlockType)arg2;

@end


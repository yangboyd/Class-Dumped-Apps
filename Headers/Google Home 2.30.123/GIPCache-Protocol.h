//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol GIPCache <NSObject>
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned long long cacheSize;
- (NSArray *)allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)flush;
- (id)initWithCacheSize:(unsigned long long)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

@class NSMutableArray;

@interface IGStreamingVideoCacheOutputStream : NSOutputStream
{
    _Bool _open;
    NSMutableArray *_observers;
}

- (void).cxx_destruct;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)close;
- (_Bool)hasSpaceAvailable;
- (void)addObserver:(id)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)open;
- (id)init;

@end


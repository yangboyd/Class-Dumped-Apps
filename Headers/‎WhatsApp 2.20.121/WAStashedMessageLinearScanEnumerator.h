//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStashedMessageEnumerator.h>

@class WAPersistentKeyValueStoreCursor, WAPersistentStanzaQueue;

@interface WAStashedMessageLinearScanEnumerator : WAStashedMessageEnumerator
{
    WAPersistentStanzaQueue *_persistentStanzaQueue;
    WAPersistentKeyValueStoreCursor *_cursor;
}

- (void).cxx_destruct;
- (void)fetchMoreMessageStanzas;
- (id)initWithDependencies:(struct WAStashedMessageEnumeratorDependencies)arg1 predicate:(id)arg2 mostRecentFirst:(_Bool)arg3 cacheContext:(id)arg4;

@end


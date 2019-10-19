//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCStoriesMediaStateCache : NSObject
{
    NSMutableDictionary *_stateCache;
    SCQueuePerformer *_performer;
    CDUnknownBlockType _mediaStateFetchBlock;
}

- (void).cxx_destruct;
- (id)forceablyClearAllMediaCacheEntries;
- (id)forceablyClearAllMediaCacheEntriesForCacheKeys:(id)arg1;
- (void)updateMediaCacheEntryForMedia:(id)arg1 mediaState:(long long)arg2;
- (long long)mediaStateForCacheKey:(id)arg1 dataDecodingBlock:(CDUnknownBlockType)arg2;
- (id)initWithPerformer:(id)arg1 mediaStateFetchBlock:(CDUnknownBlockType)arg2;

@end


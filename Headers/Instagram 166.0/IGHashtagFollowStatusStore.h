//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGHashtagFollowStatusStore : NSObject
{
    NSMutableDictionary *_hashtagNamesToFollowStatuses;
    NSMutableDictionary *_hashtagNamesToListeners;
}

- (void).cxx_destruct;
- (void)_sendFollowStausUpdates:(long long)arg1 forHashtagWithName:(id)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)removeUpdateListener:(id)arg1 forHashtagWithName:(id)arg2;
- (void)addUpdateListener:(id)arg1 forHashtagWithName:(id)arg2;
- (void)handleObjectsFetchedFromMainFeed:(id)arg1;
- (void)updateFollowStatus:(long long)arg1 forHashtagWithName:(id)arg2;
- (long long)followStatusForHashtagWithName:(id)arg1;
- (_Bool)isFollowingHashtagWithName:(id)arg1;
- (id)init;

@end


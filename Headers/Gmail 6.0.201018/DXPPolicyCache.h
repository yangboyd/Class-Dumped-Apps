//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface DXPPolicyCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableSet *_presentUserIDs;
    NSMutableSet *_loadedUserIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *loadedUserIDs; // @synthesize loadedUserIDs=_loadedUserIDs;
@property(readonly, nonatomic) NSMutableSet *presentUserIDs; // @synthesize presentUserIDs=_presentUserIDs;
@property(readonly, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (_Bool)markPolicyLoadedFromPersistentCacheForUserID:(id)arg1;
- (_Bool)filterCacheForActiveIdentities:(id)arg1;
- (_Bool)setPolicy:(id)arg1 forUserID:(id)arg2;
@property(readonly, nonatomic) NSDictionary *snapshot;
- (id)init;

@end


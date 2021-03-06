//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GSXShoppingListCacheManager : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheReadWriteQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)pendingRequestsContainer;
- (void)createShoppingListDirectoryIfNeeded;
- (void)saveCurrentUserID:(id)arg1;
- (id)loadCachedUserID;
- (void)clearShoppingListCacheIfUserIDChanged:(id)arg1;
- (void)clearShoppingListCache;
- (id)fetchPendingRequestsContainer;
- (void)savePendingRequests:(id)arg1;
- (void)saveShoppingListCacheContainer:(id)arg1;
- (void)loadShoppingListScreenResponseForShoppingListID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end


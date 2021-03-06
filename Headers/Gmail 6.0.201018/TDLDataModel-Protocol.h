//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class GTSClientSyncState, TDLCacheState, TDLDataModelShard, TDLUser;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JavaUtilList, TDLDataReader, TDLSyncControl;

@protocol TDLDataModel <JavaObject>
- (void)seedDataModelWithRoomResultsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (void)seedDataModelWithRoomsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (void)seedDataModelWithGTSClientSyncState:(GTSClientSyncState *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2;
- (TDLUser *)user;
- (TDLDataModelShard *)shard;
- (TDLCacheState *)cacheState;
- (id <TDLSyncControl>)syncControl;
- (id <TDLDataReader>)dataReader;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)loadDataFromStorage;
@end


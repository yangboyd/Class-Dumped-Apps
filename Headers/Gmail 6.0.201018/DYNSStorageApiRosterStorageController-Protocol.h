//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonCollectImmutableList, DYNSCommonGroupId;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol DYNSStorageApiRosterStorageController <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getInvitedRostersWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)filterNonLocalRosterIdsWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getRosterIdsNeedingSyncWithLong:(long long)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)insertOrUpdateRostersWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getRostersWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSStorageApiUserProfileCoordinator-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatSqlSqlTransaction, ComGoogleCommonCollectImmutableList;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol DYNSStorageCoordinatorsUserProfileCoordinatorInternal <DYNSStorageApiUserProfileCoordinator, JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)updateUsersAndDynamicGroupNamesWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg2;
@end


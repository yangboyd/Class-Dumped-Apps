//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataStorageSchemaItemSyncReason, ComGoogleAppsXplatStorageDbTransactionPromise, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataStorageSchemaItemSyncReasonDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByRowIdListWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByItemRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByItemRowIdAndSyncReasonRowIdWithLong:(long long)arg1 withLong:(long long)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteBySyncReasonAndSubscriptionRankCutoffWithLong:(long long)arg1 withNSString:(NSString *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteBySyncReasonRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countBySyncReasonRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryBySyncReasonRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryByItemRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryByRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryItemSummaryProtoBySyncReasonRowIdJoinItemLastBySubscriptionRankWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryItemServerPermIdBySyncReasonRowIdJoinItemWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)querySyncReasonRowIdJoinItemWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertWithComGoogleAppsBigtopDataStorageSchemaItemSyncReason:(ComGoogleAppsBigtopDataStorageSchemaItemSyncReason *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertWithJavaUtilList:(id <JavaUtilList>)arg1;
@end


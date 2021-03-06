//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsXplatStorageDbTransactionPromiseFactory;
@protocol ComGoogleAppsBigtopDataStorageSchemaLabelCountDao, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsStorageControllersLabelCountsTableController : NSObject
{
    id <ComGoogleAppsBigtopDataStorageSchemaLabelCountDao> dao_;
    id <JavaxInjectProvider> executor_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

- (void)dealloc;
- (id)replaceAllLabelCountsWithJavaUtilList:(id)arg1;
- (id)replaceAllLabelCountsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)insertOrReplaceLabelCountsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)insertOrReplaceLabelCountsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)getLabelCountsByLabelIdsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getLabelCountsByLabelIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)getAllLabelCounts;
- (id)getAllLabelCountsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;

@end


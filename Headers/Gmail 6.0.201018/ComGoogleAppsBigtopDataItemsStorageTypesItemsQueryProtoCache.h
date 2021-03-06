//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsStorageTypesProtoCache;

@interface ComGoogleAppsBigtopDataItemsStorageTypesItemsQueryProtoCache : NSObject
{
    ComGoogleAppsBigtopDataItemsStorageTypesProtoCache *threadProtoCache_;
    ComGoogleAppsBigtopDataItemsStorageTypesProtoCache *clusterProtoCache_;
}

- (void)dealloc;
- (void)filterClusterMapWithJavaUtilSet:(id)arg1;
- (void)filterThreadMapWithJavaUtilSet:(id)arg1;
- (int)getClustersCount;
- (int)getThreadsCount;
- (void)evictThreadWithNSString:(id)arg1;
- (void)putThreadWithNSString:(id)arg1 withDaggerLazy:(id)arg2 withLong:(long long)arg3;
- (id)getClusterFromSqlRowCursorWithNSString:(id)arg1 withJavaLangLong:(id)arg2 withComGoogleAppsXplatSqlSqlRowCursor:(id)arg3 withInt:(int)arg4;
- (id)getClusterFromClusterEntryWithComGoogleAppsBigtopDataStorageSchemaClusterEntry:(id)arg1;
- (id)getClusterWithNSString:(id)arg1 withLong:(long long)arg2;
- (id)getThreadFromItemWithNSString:(id)arg1 withJavaLangLong:(id)arg2 withComGoogleAppsBigtopDataStorageSchemaItemEntry:(id)arg3;
- (id)getThreadFromSqlRowCursorWithNSString:(id)arg1 withJavaLangLong:(id)arg2 withComGoogleAppsXplatSqlSqlRowCursor:(id)arg3 withInt:(int)arg4;
- (id)getThreadWithNSString:(id)arg1 withLong:(long long)arg2;

@end


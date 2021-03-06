//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataStorageSchemaClusterDao-Protocol.h"

@class ComGoogleAppsXplatStorageDbAbstractDatabase, NSString;

@interface ComGoogleAppsBigtopDataStorageSchemaClusterDao_XplatSql : NSObject <ComGoogleAppsBigtopDataStorageSchemaClusterDao>
{
    ComGoogleAppsXplatStorageDbAbstractDatabase *database_;
}

+ (void)initialize;
- (void)dealloc;
- (id)updateWithComGoogleAppsBigtopDataStorageSchemaClusterEntry:(id)arg1;
- (id)selectWithEvictionEligibilityAndWithoutReferencesWithComGoogleAppsBigtopServicesClustersEvictionEligibility:(id)arg1;
- (id)selectServerPermIdsByWriteSequenceIdGtWithJavaLangLong:(id)arg1;
- (id)selectRowIdByServerPermIdWithNSString:(id)arg1;
- (id)selectClusterTypeByServerPermIdWithNSString:(id)arg1;
- (id)selectByServerPermIdWithNSString:(id)arg1;
- (id)selectByClusterTypeBulkWithJavaUtilList:(id)arg1;
- (id)selectAllClusters;
- (id)insertWithJavaUtilList:(id)arg1;
- (id)deleteByServerPermIdWithNSString:(id)arg1;
- (id)countAllClusters;
- (id)bulkQueryServerPermIdMapByRowIdWithJavaUtilList:(id)arg1;
- (id)bulkQueryClusterMapByServerPermIdWithJavaUtilSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataStorageSchemaBtdDatabase, ComGoogleAppsXplatSqlSqlTableController;
@protocol ComGoogleAppsBigtopDataStorageSchemaItemVisibilityUpdateWorkDao;

@interface ComGoogleAppsBigtopDataItemsStorageControllersItemVisibilityUpdateWorkTableController : NSObject
{
    id <ComGoogleAppsBigtopDataStorageSchemaItemVisibilityUpdateWorkDao> dao_;
    _Bool useXplatDb_;
    ComGoogleAppsXplatSqlSqlTableController *innerController_;
    ComGoogleAppsBigtopDataStorageSchemaBtdDatabase *database_;
}

+ (void)initialize;
- (void)dealloc;
- (id)deleteAllItemsRecalculationWork;
- (id)deleteFinishedWorkWithLong:(long long)arg1;
- (id)deleteFinishedWorkWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2;
- (id)deleteWorkByRowIdWithLong:(long long)arg1;
- (id)updateLastAffectedItemRowIdWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)updateLastAffectedItemRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (id)insertItemVisibilityUpdateWorkWithComGoogleAppsBigtopDataStorageSchemaItemVisibilityUpdateWork:(id)arg1;
- (id)insertItemVisibilityUpdateWorkWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataStorageSchemaItemVisibilityUpdateWork:(id)arg2;
- (id)getAllWorkWithLimitWithInt:(int)arg1;
- (id)getAllWorkWithLimitWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withInt:(int)arg2;
- (id)getFirstUnfinishedWorkOrNull;
- (id)getFirstUnfinishedWorkOrNullWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;

@end


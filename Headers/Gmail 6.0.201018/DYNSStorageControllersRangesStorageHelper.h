//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DYNSStorageControllersRangesStorageHelper_RangeDataStorageReader, DYNSStorageControllersRangesStorageHelper_RangeStorageController, JavaxInjectProvider;

@interface DYNSStorageControllersRangesStorageHelper : NSObject
{
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSStorageControllersRangesStorageHelper_RangeDataStorageReader> rangeDataStorageReader_;
    id <DYNSStorageControllersRangesStorageHelper_RangeStorageController> rangeStorageController_;
}

- (void)dealloc;
- (id)addRangesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withId:(id)arg2 withJavaUtilSet:(id)arg3;
- (id)removeRangeWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withId:(id)arg2 withDYNSStorageApiRange:(id)arg3;
- (id)addRangeWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withId:(id)arg2 withDYNSStorageApiRange:(id)arg3;
- (id)getEnclosingRangeWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withId:(id)arg2 withLong:(long long)arg3;

@end


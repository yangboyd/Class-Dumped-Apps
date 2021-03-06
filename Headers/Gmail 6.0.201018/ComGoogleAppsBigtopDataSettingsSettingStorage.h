//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataSettingsSettingSyncStateTableController, ComGoogleAppsBigtopDataSettingsSettingsTableController, ComGoogleAppsBigtopDataStorageSchemaBtdDatabase, ComGoogleAppsXplatStorageDbTransactionPromiseFactory;

@interface ComGoogleAppsBigtopDataSettingsSettingStorage : NSObject
{
    ComGoogleAppsBigtopDataStorageSchemaBtdDatabase *database_;
    ComGoogleAppsBigtopDataSettingsSettingsTableController *tableController_;
    ComGoogleAppsBigtopDataSettingsSettingSyncStateTableController *settingSyncStateTableController_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getSettingIds;
- (id)countSettingsWithBoolean:(_Bool)arg1;
- (id)getSyncStateOrNull;
- (id)updateSyncStateWithNSString:(id)arg1;
- (id)insertSyncStateWithNSString:(id)arg1;
- (id)listSettingsWithInt:(int)arg1 withLong:(long long)arg2;
- (id)getSettingsByIdWithJavaUtilList:(id)arg1;
- (id)deleteSettingsWithJavaUtilList:(id)arg1;
- (id)deleteSettingWithNSString:(id)arg1;
- (id)insertOrUpdateChangedSettingsWithJavaUtilList:(id)arg1;

@end


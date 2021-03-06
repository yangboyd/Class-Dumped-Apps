//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GAISqlStore, NSArray, NSString;

@interface GAIAnalyticsPropertiesStore : NSObject
{
    GAISqlStore *_sqlStore;
    NSArray *_propertiesTableColumns;
    NSString *_propertiesTableSchemaSql;
    NSString *_propertiesTableUpsertSql;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *propertiesTableUpsertSql; // @synthesize propertiesTableUpsertSql=_propertiesTableUpsertSql;
@property(readonly, nonatomic) NSString *propertiesTableSchemaSql; // @synthesize propertiesTableSchemaSql=_propertiesTableSchemaSql;
@property(readonly, nonatomic) NSArray *propertiesTableColumns; // @synthesize propertiesTableColumns=_propertiesTableColumns;
@property(retain, nonatomic) GAISqlStore *sqlStore; // @synthesize sqlStore=_sqlStore;
- (void).cxx_destruct;
- (_Bool)setCheckedIAdCampaignForTrackingId:(id)arg1;
- (struct sqlite3_stmt *)selectStmtWithTrackingId:(id)arg1;
- (id)propertyRecordForTrackingId:(id)arg1;
- (id)createPropertyRecordWithTrackingId:(id)arg1 clientId:(id)arg2 hitNumber:(long long)arg3 checkedIAdCampaign:(_Bool)arg4;
- (_Bool)createPropertiesTable;
- (_Bool)createOrValidatePropertiesTable;
- (_Bool)clearPropertiesTable;
- (_Bool)hasValidPropertyColumns;
@property(readonly, nonatomic) _Bool isPropertiesTableFull;
- (_Bool)bindRecord:(id)arg1 toUpsertStatement:(struct sqlite3_stmt *)arg2;
- (_Bool)upsertPropertyRecord:(id)arg1;
@property(readonly, nonatomic) unsigned long long storageLimit;
@property(readonly, nonatomic) unsigned long long trackerIdCount;
- (id)nextHitNumberForTrackingId:(id)arg1 clientId:(id)arg2;
- (void)onOpenDatabase:(id)arg1;
- (void)dealloc;
- (id)buildPropertiesTableUpsertSql;
- (id)buildPropertiesTableSchemaSql;
- (id)initWithSqlStore:(id)arg1;

@end


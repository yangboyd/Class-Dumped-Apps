//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, NSArray, NSString;

@interface BDTrackerBaseTable : NSObject
{
    NSString *_tableName;
    FMDatabase *_database;
    NSString *_insertSql;
    NSArray *_sendingTrackIDs;
}

@property(copy, nonatomic) NSArray *sendingTrackIDs; // @synthesize sendingTrackIDs=_sendingTrackIDs;
@property(copy, nonatomic) NSString *insertSql; // @synthesize insertSql=_insertSql;
@property(retain, nonatomic) FMDatabase *database; // @synthesize database=_database;
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (void).cxx_destruct;
- (void)appendEventToData:(id)arg1;
- (id)selectSQLWithLimit:(unsigned long long)arg1;
- (id)createTableSql;
- (void)clearAllEventData;
- (void)deleteTrackCreatedBefore:(id)arg1;
- (void)onBatchEndWithResultSuccess:(_Bool)arg1;
- (void)removeTracksByID:(id)arg1;
- (void)insertTrack:(id)arg1 eventType:(id)arg2;
- (void)checkDBFile;
- (id)initWithTableName:(id)arg1 database:(id)arg2;

@end


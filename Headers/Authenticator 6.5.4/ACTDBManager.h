//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACTDBManager : NSObject
{
}

+ (int)testHookWriteData:(id)arg1 event:(id)arg2 leased:(_Bool)arg3;
+ (id)testHookReadDataAtRowId:(long long)arg1;
+ (void)flush;
+ (void)deleteStatsForTenant:(id)arg1;
+ (void)deleteEvents:(id)arg1 logReason:(id)arg2;
+ (void)retryEvents:(id)arg1 retryReason:(id)arg2 logReason:(id)arg3 component:(id)arg4;
+ (void)requeueEvents:(id)arg1 requeueReason:(id)arg2 logReason:(id)arg3 component:(id)arg4;
+ (id)getFileSizeAndEventCount;
+ (unsigned long long)getFileSize;
+ (long long)lastTimeStatsSentForTenant:(id)arg1;
+ (id)getStatsForTenant:(id)arg1;
+ (id)popPriority:(int)arg1;
+ (void)intakeMultiple:(id)arg1;
+ (void)intake:(id)arg1;
+ (void)insertAndMarkedAsLeasedForEvent:(id)arg1;
+ (void)insertStats:(id)arg1 tenantToken:(id)arg2;
+ (void)resetDBSize:(unsigned long long)arg1;
+ (_Bool)createDBMaxFileSize:(unsigned long long)arg1 filename:(id)arg2 exists:(_Bool *)arg3;
+ (int)close;
+ (int)tryLastTimeSentQuery:(id)arg1 intoInteger:(long long *)arg2;
+ (int)tryGetStatsQuery:(id)arg1 intoStatsString:(id *)arg2;
+ (int)tryPopQuery:(const char *)arg1 intoEventsArray:(id)arg2;
+ (int)leaseEventFromSqlStmt:(struct sqlite3_stmt *)arg1 intoEventArray:(id)arg2;
+ (int)markAsLeasedAtRow:(long long)arg1 currentValue:(int)arg2;
+ (int)insertToDB:(struct sqlite3 *)arg1 events:(id)arg2 data:(id)arg3 startIndex:(unsigned long long)arg4 endIndex:(unsigned long long)arg5 errorIndex:(unsigned long long *)arg6 droppedEvents:(id)arg7 corruptedEventInfo:(id)arg8;
+ (int)insertToDB:(struct sqlite3 *)arg1 tenantToken:(id)arg2 stats:(id)arg3;
+ (int)insertToDB:(struct sqlite3 *)arg1 event:(id)arg2 data:(id)arg3 leased:(_Bool)arg4 droppedEvents:(id)arg5 corruptedEventInfo:(id)arg6;
+ (int)exclusiveTransactionInsertStats:(id)arg1 tenantToken:(id)arg2;
+ (int)exclusiveTransactionInsertData:(id)arg1 event:(id)arg2 leased:(_Bool)arg3;
+ (void)updateStatsForEvent:(id)arg1 leased:(_Bool)arg2 error:(int)arg3;
+ (void)updateStatsForDroppedEvents:(id)arg1 corruptedEventInfo:(id)arg2;
+ (id)sortByPriorityForEvents:(id)arg1 andSerializeToData:(id)arg2;
+ (id)serializeEvent:(id)arg1 leased:(_Bool)arg2;
+ (_Bool)isValidDataSizeForEvent:(id)arg1 sizeInBytes:(unsigned int)arg2;
+ (_Bool)isValidTenantTokenForEvent:(id)arg1 inflight:(_Bool)arg2;
+ (id)callerHoldingSyncSelect10EventsForDeleteFromDB:(struct sqlite3 *)arg1 upToAndIncludingPriority:(int)arg2 corruptedEventInfo:(id)arg3;
+ (struct sqlite3_stmt *)prepareStmtToInsertToDB:(struct sqlite3 *)arg1 tenantToken:(id)arg2 timestamp:(long long)arg3 stats:(id)arg4;
+ (struct sqlite3_stmt *)prepareStmtToInsertToDB:(struct sqlite3 *)arg1 tenantToken:(id)arg2 priority:(int)arg3 timestamp:(long long)arg4 data:(id)arg5 leased:(_Bool)arg6;
+ (void)resetInflightForDB:(struct sqlite3 *)arg1;
+ (int)setMaxPageCountForDB:(struct sqlite3 *)arg1 forMaxSize:(unsigned long long)arg2 andDefaultPageSize:(int)arg3;
+ (int)createTablesForDB:(struct sqlite3 *)arg1;
+ (int)validateDB:(struct sqlite3 *)arg1;
+ (int)enableAutoVacuuming:(struct sqlite3 *)arg1;
+ (struct sqlite3 *)openDBFile:(id)arg1 exists:(_Bool *)arg2;
+ (int)exclusiveTransactionOnDB:(struct sqlite3 *)arg1 fromLine:(int)arg2 block:(CDUnknownBlockType)arg3;
+ (void)unlockDB:(struct sqlite3 *)arg1 fromLine:(int)arg2;
+ (int)lockDB:(struct sqlite3 *)arg1 fromLine:(int)arg2;
+ (int)tryLockDB:(struct sqlite3 *)arg1 fromLine:(int)arg2;
+ (void)synchronizedExecSqlCmd:(id)arg1 forTenant:(id)arg2 fromLine:(int)arg3;
+ (void)synchronizedExecSqlCmd:(id)arg1 forEvents:(id)arg2 fromLine:(int)arg3;
+ (id)validFilenameForFilename:(id)arg1;
+ (void)setMasterConfig:(id)arg1;
+ (void)dealloc;
+ (void)initialize;
+ (void)setDelegate:(id)arg1;
+ (id)delegate;

@end


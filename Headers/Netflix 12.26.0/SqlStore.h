//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MslClient/AppleNativeStorage-Protocol.h>

@class NSArray, NSSet, NSString, SqlDb;
@protocol StoreCrypto;

@interface SqlStore : NSObject <AppleNativeStorage>
{
    _Bool _shouldAbortMigration;
    _Bool _validateChecksum;
    NSString *_dbPath;
    SqlDb *_sqlDb;
    NSArray *_systemKeysToMigrateToAccounts;
    struct NSObject *_crypto;
    unsigned long long _readCount;
    unsigned long long _writeCount;
}

@property(nonatomic) unsigned long long writeCount; // @synthesize writeCount=_writeCount;
@property(readonly, nonatomic) _Bool validateChecksum; // @synthesize validateChecksum=_validateChecksum;
@property(nonatomic) _Bool shouldAbortMigration; // @synthesize shouldAbortMigration=_shouldAbortMigration;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
@property(readonly, nonatomic) NSObject<StoreCrypto> *crypto; // @synthesize crypto=_crypto;
@property(readonly, nonatomic) SqlDb *sqlDb; // @synthesize sqlDb=_sqlDb;
@property(readonly, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
- (void).cxx_destruct;
- (void)removeSqlDbTableProvider:(id)arg1;
- (void)addSqlDbTableProvider:(id)arg1;
- (id)sqlDbProvider;
- (_Bool)supportsSqlDbTableProviders;
- (_Bool)writeSystemConfiguration:(id)arg1 value:(id)arg2 shouldEncrypt:(_Bool)arg3;
- (_Bool)writeSystemConfiguration:(id)arg1 value:(id)arg2;
- (_Bool)writeString:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3 inDB:(struct sqlite3 *)arg4 shouldEncrypt:(_Bool)arg5;
@property(nonatomic) _Bool useAccounts;
@property(readonly, nonatomic) NSArray *systemKeysToMigrateToAccounts; // @synthesize systemKeysToMigrateToAccounts=_systemKeysToMigrateToAccounts;
@property(readonly, nonatomic) NSSet *systemConfigurationKeys;
- (void)createSqlDb;
- (_Bool)setItemOnAccount:(id)arg1 key:(id)arg2 value:(id)arg3 shouldEncrypt:(_Bool)arg4;
- (_Bool)setItemOnAccount:(id)arg1 key:(id)arg2 value:(id)arg3;
- (unsigned long long)rowCount;
- (void)closeDb;
- (_Bool)reset;
- (_Bool)removeStringForDomain:(id)arg1 forKey:(id)arg2 inDB:(struct sqlite3 *)arg3;
- (_Bool)removeItemFromAccount:(id)arg1 key:(id)arg2;
- (_Bool)removeAccount:(id)arg1;
- (id)readSystemConfiguration:(id)arg1 shouldBeEncrypted:(_Bool)arg2;
- (id)readSystemConfiguration:(id)arg1;
- (id)readStringForDomain:(id)arg1 key:(id)arg2 shouldBeEncrypted:(_Bool)arg3;
- (id)resetCount;
- (id)resetAttempt;
- (id)corruptCount;
- (_Bool)performMigrationFrom:(struct NSObject *)arg1;
- (id)getItemFromAccount:(id)arg1 key:(id)arg2 shouldBeEncrypted:(_Bool)arg3;
- (id)getItemFromAccount:(id)arg1 key:(id)arg2;
- (void)didReceivedMemoryWarning;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDbPath:(id)arg1 crypto:(struct NSObject *)arg2;
- (id)initWithDbPath:(id)arg1 crypto:(struct NSObject *)arg2 validateChecksum:(_Bool)arg3;
- (_Bool)factoryReset;
- (id)checksumFromDomain:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)auditLogblob;
- (id)accountKeysForAccount:(id)arg1;
@property(readonly, nonatomic) NSSet *accounts; // @dynamic accounts;
- (void)account:(id *)arg1 key:(id *)arg2 fromSystemKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBCDMMigrator-Protocol.h>

@class DBCDMAccount, DBCompanyDropboxModelManagerMigrationRequest, NSMutableSet, NSString;
@protocol DBCompanyDropboxModelMigrationHandler, DBObserverHandleProtocol, _TtP18ios_common_account24DBAccountManagerProtocol_;

@interface DBCompanyDropboxModelManager : NSObject <DBCDMMigrator>
{
    DBCDMAccount *_cdmAccount;
    DBCompanyDropboxModelManagerMigrationRequest *_pendingMigration;
    CDUnknownBlockType _refreshAccountInfoBlock;
    CDUnknownBlockType _userDefaultGenerator;
    id <DBObserverHandleProtocol> _pathRootObserverHandle;
    NSMutableSet *_migrationObservers;
    id <_TtP18ios_common_account24DBAccountManagerProtocol_> _accountManager;
    id <DBCompanyDropboxModelMigrationHandler> _migrationHandler;
}

+ (id)db_accountInfoPathRootDidUpdate:(id)arg1 accountInfoHomePath:(id)arg2 currentStoredPathRoot:(id)arg3 currentStoredHomePath:(id)arg4 userId:(id)arg5;
+ (_Bool)db_isBusinessAccount:(id)arg1;
+ (_Bool)db_isSameAccount:(id)arg1 asAccount:(id)arg2;
+ (id)storedMainAppHomePathWithUserId:(id)arg1;
+ (id)storedMainAppPathRootWithUserId:(id)arg1;
@property(readonly, nonatomic) __weak id <DBCompanyDropboxModelMigrationHandler> migrationHandler; // @synthesize migrationHandler=_migrationHandler;
- (void).cxx_destruct;
- (id)debug_trackedAccount;
- (void)debug_simulateCDMMigration;
- (void)db_completedMigrationWithSuccess:(_Bool)arg1;
- (void)db_startMigration:(id)arg1;
- (void)db_accountDidUnlink:(id)arg1;
- (void)db_checkForPathRootChange:(id)arg1;
- (void)db_updateWithAccountInfo:(id)arg1 ifTrackingAccount:(id)arg2;
- (void)db_stopUsingAccount:(id)arg1;
- (void)removeMigrationObserver:(id)arg1;
- (void)addMigrationObserver:(id)arg1;
- (void)db_setupAccountForMigrationTracking:(id)arg1 defaultToNonCDMStateIfNoCDMInfo:(_Bool)arg2;
- (void)refreshCurrentWorkAccount;
- (void)trackAccountForMigration:(id)arg1;
- (void)setupWithMigrationHandler:(id)arg1;
- (id)currentMigrationRequest;
- (id)pathRootForUserId:(id)arg1;
- (void)invalidPathRootErrorForUserId:(id)arg1 validPathRoot:(id)arg2;
- (void)retryMigration;
- (void)dealloc;
- (id)initForExtensionsWithAccountManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


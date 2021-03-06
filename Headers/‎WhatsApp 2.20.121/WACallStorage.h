//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAAutoMigratingStorage.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, NSUserDefaults, WACallStorageAggregateEventMutableArray, WAContactsSearchController, WAPersistentKeyValueStore, WATaskManager, WAUserSessionPreferences;
@protocol OS_dispatch_queue;

@interface WACallStorage : WAAutoMigratingStorage <WAUpgradeCallback>
{
    NSUserDefaults *_userDefaults;
    WAUserSessionPreferences *_preferences;
    NSMutableArray *_allEvents;
    NSMutableArray *_joinableEvents;
    WACallStorageAggregateEventMutableArray *_aggregateEvents;
    NSObject<OS_dispatch_queue> *_saveQueue;
    _Bool _dirty;
    WAPersistentKeyValueStore *_keyValueStore;
    WATaskManager *_taskManager;
    WAContactsSearchController *_searchController;
}

+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (id)primaryDatabaseContextConcurrencyType;
- (void).cxx_destruct;
- (void)synchronize;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)isJoinableCallsListEmpty;
- (id)joinableCallEventWithCallID:(id)arg1;
- (void)clearJoinableCallEvents;
- (void)removeJoinableEventWithCallID:(id)arg1;
- (void)updateJoinableEventWithCallID:(id)arg1 participants:(id)arg2;
- (void)addJoinableEventFromCallerJID:(id)arg1 callID:(id)arg2 groupJID:(id)arg3 participantJIDs:(id)arg4 hasVideo:(_Bool)arg5;
- (id)joinableFetchedResultsController;
- (void)nameDirectoryDidInvalidateSomeNames:(id)arg1;
- (id)pushNamesToSearchForUserJIDs:(id)arg1;
- (id)contactsToSearchForUserJIDs:(id)arg1;
- (void)aggregateEventsForTextSearchQuery:(id)arg1 context:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)newUnknownContactForUserJID:(id)arg1;
- (void)reloadAllContactNames;
@property(readonly, nonatomic) NSArray *missedCallOnlyAggregateEvents;
@property(readonly, nonatomic) NSArray *indexPathsOfUnmissedCallAggregateEvents;
@property(readonly, nonatomic) NSArray *aggregateEvents;
- (void)clearAllCallEvents;
- (void)removeAggregateCallEvent:(id)arg1;
- (void)addCallEvent:(id)arg1 suppressMissedCallCountUpdates:(_Bool)arg2;
- (void)insertAggregateEvent:(id)arg1;
@property(readonly, nonatomic) long long joinableCallCount;
- (void)setMissedCallCount:(long long)arg1;
- (void)clearMissedCallCount;
- (void)incrementMissedCallCount;
@property(readonly, nonatomic) long long missedCallCount;
@property(readonly, nonatomic) long long newMissedCallCountSinceEnteringBackground;
- (void)rebuildAggregateCallEvents;
- (void)dropEvents;
- (id)validEventsFromDisk;
- (void)loadEvents;
- (id)callEventsForUserJID:(id)arg1;
- (void)removeOldFile;
- (void)startMigration;
- (void)performMigrationIfNeeded;
- (id)allCalledUserJIDs;
- (_Bool)isCallsListEmpty;
- (id)fetchedResultsController;
- (void)cleanupOldCalls;
- (void)scheduleCleanupTaskWithManager:(id)arg1 taskKeyValueStore:(id)arg2;
@property(readonly, nonatomic) _Bool canPerformMigration;
@property(readonly, nonatomic) _Bool shouldUseDatabase;
@property(readonly, copy) NSString *backupFilePath;
@property(readonly, copy) NSString *filePath;
@property(readonly, nonatomic) _Bool forceOldStorage;
- (void)dropDeferredObjects;
- (void)loadDeferredObjects;
- (id)initWithUserDefaults:(id)arg1 preferences:(id)arg2 taskKeyValueStore:(id)arg3 taskManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


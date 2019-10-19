//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObjectContext.h"

#import "SCConflictingDocObjectContextDiagnosticInfo-Protocol.h"
#import "SCDiagnosableDocObjectContext-Protocol.h"
#import "SCDocObjectIndexBuilder-Protocol.h"

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue, SCDocObjectActivityMonitor;

@interface SCSQLiteDocObjectContext : SCDocObjectContext <SCDiagnosableDocObjectContext, SCConflictingDocObjectContextDiagnosticInfo, SCDocObjectIndexBuilder>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    id <SCDocObjectActivityMonitor> _activityMonitor;
    struct unique_ptr<SQLiteConnection, std::__1::default_delete<SQLiteConnection>> _writeConnection;
    struct unique_ptr<SC::ObjectPool<SQLiteConnection, 63>, std::__1::default_delete<SC::ObjectPool<SQLiteConnection, 63>>> _readConnections;
    _Bool _tableHasUnindexed;
    struct unordered_map<long, SCDocObjectClassFunctionPointer, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, SCDocObjectClassFunctionPointer>>> _tableFunctionPointer;
    struct unordered_map<long, std::__1::unordered_map<long long, SCDocObject *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, SCDocObject *>>>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<long long, SCDocObject *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, SCDocObject *>>>>>> _tableUpdatedObjectPool;
    struct unordered_map<long, std::__1::unordered_map<long long, SCDocObject *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, SCDocObject *>>>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<long long, SCDocObject *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, SCDocObject *>>>>>> _tableObjectPool;
    unordered_set_30ae6e39 _tableCreated;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _invalidated
    // Error parsing type: {atomic<unsigned long long>="__a_"AQ}, name: _changesTimestamp
    struct unordered_map<long, unsigned long long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, unsigned long long>>> _tableChangesTimestamp;
    // Error parsing type: {atomic<unsigned long long>="__a_"AQ}, name: _observationToken
    struct unordered_map<long, std::__1::unordered_map<long long, std::__1::unordered_map<unsigned long long, SCObjectObservation, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCObjectObservation>>>, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::unordered_map<unsigned long long, SCObjectObservation, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCObjectObservation>>>>>>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<long long, std::__1::unordered_map<unsigned long long, SCObjectObservation, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCObjectObservation>>>, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::unordered_map<unsigned long long, SCObjectObservation, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCObjectObservation>>>>>>>>> _tableObjectObservationPool;
    // Error parsing type: {atomic<unsigned long long>="__a_"AQ}, name: _fetchedResultObservationToken
    struct unordered_map<long, std::__1::unordered_map<unsigned long long, SCFetchedResultObserver, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCFetchedResultObserver>>>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<unsigned long long, SCFetchedResultObserver, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCFetchedResultObserver>>>>>> _tableFetchedResultObserverPool;
    NSMutableSet *_changeRequestClassNames;
    CDUnknownFunctionPointerType _runSql;
    CDUnknownFunctionPointerType _endSqlTransaction;
}

+ (id)SQLiteDocObjectCurrentContext;
+ (id)SQLiteDocObjectCurrentBlockFetching;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setUpdatedObject:(id)arg1 forClass:(Class)arg2 byRowid:(long long)arg3;
- (void)setFetchedObject:(id)arg1 forClass:(Class)arg2 byRowid:(long long)arg3;
- (void)buildIndexes:(vector_f96bb9f1)arg1 forTable:(long long)arg2 tableFunctionPointer:(struct SCDocObjectClassFunctionPointer)arg3;
- (id)objectForClass:(Class)arg1 byRowid:(long long)arg2 buffer:(const void *)arg3 bufferSize:(unsigned long long)arg4;
- (void)addChangeRequestClassName:(id)arg1;
- (struct SQLiteConnection *)writeConnection;
- (void)unobserveFetchedResult:(unsigned long long)arg1 fetchedResultId:(unsigned long long)arg2 table:(long long)arg3;
- (void)unobserve:(unsigned long long)arg1 rowid:(long long)arg2 table:(long long)arg3;
- (void)_buildIndexes:(const vector_f96bb9f1 *)arg1 forTable:(long long)arg2 tableFunctionPointer:(struct SCDocObjectClassFunctionPointer)arg3;
- (void)_triggerRebuildTableIndexes;
- (void)_unobserveFetchedResult:(unsigned long long)arg1 fetchedResultId:(unsigned long long)arg2 table:(long long)arg3;
- (void)_observeFetchedResult:(id)arg1 fetchedResultId:(unsigned long long)arg2 table:(const char *)arg3 token:(unsigned long long)arg4 callbackQueue:(id)arg5 changeHandler:(CDUnknownBlockType)arg6;
- (void)_unobserve:(unsigned long long)arg1 rowid:(long long)arg2 table:(long long)arg3;
- (void)_observe:(id)arg1 klass:(Class)arg2 rowid:(long long)arg3 table:(const char *)arg4 token:(unsigned long long)arg5 callbackQueue:(id)arg6 changeHandler:(CDUnknownBlockType)arg7;
- (_Bool)_performChanges:(CDUnknownBlockType)arg1;
- (void)overrideSqliteRunner:(CDUnknownFunctionPointerType)arg1 sqliteTransactionEnder:(CDUnknownFunctionPointerType)arg2;
- (id)observeFetchedResult:(id)arg1 callbackQueue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (id)observe:(id)arg1 callbackQueue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct Builder)fetchForClass:(Class)arg1;
- (id)fetchWithBlock:(CDUnknownBlockType)arg1;
- (void)shutdownAsynchronously:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 options:(CDStruct_69d7cc99)arg2 monitor:(id)arg3;
- (id)dbPath;
- (_Bool)isActive;
- (void)diagnoseForConflictingInstances:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreferences.h"

#import "SCPreferencesObservationContextDelegate-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, SCDocObjectContext, SCDocObjectLoggingActivityMonitor, SCPreferencesObservationGraph, SCSQLitePreferencesFetcher;
@protocol OS_dispatch_queue, SCDocObjectTransactionContext><SCDocObjectFetching;

@interface SCDocPreferences : SCPreferences <SCPreferencesObservationContextDelegate, SCUserSessionScoped>
{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_filePath;
    SCDocObjectContext *_docObjectContext;
    SCDocObjectLoggingActivityMonitor *_activityMonitor;
    NSMutableDictionary *_keyValues;
    id <SCDocObjectTransactionContext><SCDocObjectFetching> _currentTransactionContext;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMutableDictionary *_allBatchChangedObjects;
    SCPreferencesObservationGraph *_observationGraph;
    SCSQLitePreferencesFetcher *_SQLiteFetcher;
}

- (void).cxx_destruct;
- (id)_SQLiteFetcher;
- (id)_deserializeObject:(id)arg1;
- (id)_serializeObject:(id)arg1 key:(id)arg2 group:(id)arg3;
- (void)_removeObjectForKey:(id)arg1;
- (void)_performChanges:(CDUnknownBlockType)arg1 changedObjects:(id)arg2;
- (void)unobserveWithKeys:(id)arg1 observationToken:(id)arg2;
- (id)observe:(id)arg1 callbackQueue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)synchronize;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allKeysInNamespace:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)invalidate;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


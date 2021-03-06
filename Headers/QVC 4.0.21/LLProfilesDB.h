//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localytics/LLDBBase.h>

#import <Localytics/LLProfilesStorageProtocol-Protocol.h>

@class NSString;

@interface LLProfilesDB : LLDBBase <LLProfilesStorageProtocol>
{
}

- (void)optimizeStorage;
- (id)maxStorageCapacity;
- (_Bool)hasStorageCapacity;
- (unsigned long long)greatestDatapointId;
- (id)getUploadDataWithMaxId:(unsigned long long)arg1;
- (void)fullUploadDidFinish;
- (void)uploadBatchDidCompleteWithHighestUploadNumber:(unsigned long long)arg1;
- (_Bool)deleteAllData;
- (_Bool)clearProfileCache;
- (_Bool)clearCacheForKey:(id)arg1 andScope:(id)arg2;
- (_Bool)updateCacheWithValue:(id)arg1 andExpiration:(id)arg2 forKey:(id)arg3 andDB:(id)arg4;
- (id)getCachedValuesForKey:(id)arg1 andScope:(id)arg2;
- (unsigned long long)getTTL;
- (void)storeTTL:(unsigned long long)arg1;
- (long long)profileEventCount;
- (_Bool)deleteProfileEventTuple:(id)arg1;
- (id)getNextProfileEventTuples:(unsigned long long)arg1;
- (id)getNextProfileEventTuple;
- (_Bool)queueProfileEventTuple:(id)arg1;
- (void)migrateFromV2Database:(id)arg1;
- (_Bool)initializeDatabase:(id)arg1;
- (id)initWithLocalyticsDelegate:(id)arg1 logger:(id)arg2 databasePath:(id)arg3;
- (id)migrations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


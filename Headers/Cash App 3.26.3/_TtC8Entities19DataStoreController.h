//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDDataStoreController.h"

@interface _TtC8Entities19DataStoreController : SDDataStoreController
{
    // Error parsing type: , name: logger
}

+ (Class)migrationManagerClass;
- (void).cxx_destruct;
- (id)initWithStoreType:(id)arg1 managedObjectModel:(id)arg2 persistentStorePath:(id)arg3;
- (void)performAdditionalMigrationManagerConfiguration:(id)arg1;
- (void)didDeletePersistentStoreFileWithReason:(unsigned long long)arg1 error:(id)arg2;
- (_Bool)shouldPerformMigrationsOnBackgroundQueue;
- (_Bool)shouldAttemptPersistentStoreMigrationWithInferredMapping;

@end


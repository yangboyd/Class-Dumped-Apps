//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCDataMigrationService-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSString;
@protocol OS_dispatch_queue;

@interface GSCDataMigrationServiceImpl : NSObject <GSCDataMigrationService>
{
    _Bool _started;
    NSObject<OS_dispatch_queue> *_migrationQueue;
    GOOProvider *_accountsServiceProvider;
    GOOAccountScopedProvider *_accountDataMigratorsProvider;
    GOOProvider *_appDataMigratorsProvider;
}

- (void).cxx_destruct;
- (void)performAccountDataMigrationsWithErrorsMap:(id)arg1 callbackQueue:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)performMigrationsSync;
- (void)performMigrationsWithCallbackQueue:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithAccountsServiceProvider:(id)arg1 accountDataMigratorsProvider:(id)arg2 appDataMigratorsProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


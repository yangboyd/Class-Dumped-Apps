//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol DBAuthCredentialsManagerProtocol, DBAuthStatesProviderProtocol;

@interface DBAuthStateManagerOperationQueue : NSObject
{
    id <DBAuthStatesProviderProtocol> _authStatesProvider;
    id <DBAuthCredentialsManagerProtocol> _credentialsManager;
    CDUnknownBlockType _unlinkActionsHandler;
    NSOperationQueue *_operationQueue;
    unsigned long long _numUnlinkOperationsQueued;
    CDUnknownBlockType _credentialsErrorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType credentialsErrorHandler; // @synthesize credentialsErrorHandler=_credentialsErrorHandler;
- (void).cxx_destruct;
- (CDUnknownBlockType)db_asyncRunnerBlockForOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_queueOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queueContinueByClearingKeychainAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)queueContinueByLoadingKeychainAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitForCurrentlyQueuedOperationsCompletion:(CDUnknownBlockType)arg1;
- (void)queueSyncWithCredentialsManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)queueUpdateWithAccountInfo:(id)arg1 forUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queueAddAccountWithAccessToken:(id)arg1 accessTokenSecret:(id)arg2 forUserID:(id)arg3 withAccountInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)queueUnlinkForUserIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasUnlinkOperationsQueued;
- (id)init;
- (id)initWithAuthStatesProvider:(id)arg1 credentialsManager:(id)arg2 unlinkActionsHandler:(CDUnknownBlockType)arg3;

@end


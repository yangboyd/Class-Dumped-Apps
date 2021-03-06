//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAFailureDelegate-Protocol.h"

@class NSString, UINavigationController, UserAccount;

@interface AccountDeletionManager : NSObject <MSAFailureDelegate>
{
    UserAccount *_account;
    UINavigationController *_navigationController;
    CDUnknownBlockType _successBlock;
}

- (void).cxx_destruct;
- (void)didFailWithNeededViewController:(id)arg1;
- (void)didFailBecauseUserCancelled;
- (void)didFailWithError:(id)arg1;
- (_Bool)shouldCleanupNgcStateForAccount:(id)arg1 shadowAccount:(out id *)arg2;
- (void)cleanupAfterAccountDeletion;
- (void)deleteAccountInternal;
- (void)continueAccountDeletion;
- (void)deleteAccount:(_Bool)arg1;
- (id)getDeletionWarningTask;
- (void)deleteAccount;
- (id)init;
- (id)initWithAccount:(id)arg1 navigationController:(id)arg2 successBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


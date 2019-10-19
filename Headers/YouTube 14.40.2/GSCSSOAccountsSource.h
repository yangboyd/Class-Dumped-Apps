//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GSCAccountsExternalSource.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GSCSSOAccountsSource : NSObject <GSCAccountsExternalSource>
{
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_ssoQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <SSOService> _ssoService;
    id <GIKRemoveAccountUIService> _gikRemoveAccountUIService;
    NSMutableDictionary *_accountsDict;
    id <GSCAccountsExternalSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <GSCAccountsExternalSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)waitForSSOQueueToDrain;
- (unsigned long long)userTypeForProfile:(id)arg1;
- (id)accountFromSSOIdentity:(id)arg1 profileDict:(id)arg2;
- (id)updateAccount:(id)arg1;
- (void)updateAccount:(id)arg1 withPromise:(id)arg2;
- (id)refreshAccountWithSSOIdentity:(id)arg1;
- (void)ssoProfileDidUpdate:(id)arg1;
- (void)ssoIdentityListDidChange:(id)arg1;
- (id)deleteAccountWithId:(id)arg1 params:(id)arg2;
- (id)refreshAccountWithId:(id)arg1;
@property(readonly, nonatomic) NSArray *accounts;
- (void)dealloc;
- (id)initWithRemoveAccountUIService:(id)arg1 SSOService:(id)arg2;
- (id)initWithSSOService:(id)arg1 SSOServiceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


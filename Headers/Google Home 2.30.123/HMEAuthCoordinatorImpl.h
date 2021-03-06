//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIKExpressSignInLifecycleDelegate-Protocol.h"
#import "HMEAuthCoordinator-Protocol.h"

@class NSString, NSUserDefaults, SSOAccountService;
@protocol GIKAppDelegateService, GIKEventSubscription, GIKExpressSignInUIService, GIKForegroundAccountService, GIKMutableForegroundAccountService, HMEAuthCoordinatorDelegate, SSOService;

@interface HMEAuthCoordinatorImpl : NSObject <GIKExpressSignInLifecycleDelegate, HMEAuthCoordinator>
{
    id <HMEAuthCoordinatorDelegate> _delegate;
    id <SSOService> _SSOService;
    NSUserDefaults *_userDefaults;
    id <GIKAppDelegateService> _identityService;
    id <GIKExpressSignInUIService> _expressSignInUIService;
    id <GIKForegroundAccountService> _foregroundAccountService;
    id <GIKMutableForegroundAccountService> _mutableForegroundAccountService;
    id <GIKEventSubscription> _eventSubscription;
    SSOAccountService *_accountService;
    CDUnknownBlockType _expressSignInCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType expressSignInCompletion; // @synthesize expressSignInCompletion=_expressSignInCompletion;
@property(readonly, nonatomic) SSOAccountService *accountService; // @synthesize accountService=_accountService;
@property(readonly, nonatomic) id <GIKEventSubscription> eventSubscription; // @synthesize eventSubscription=_eventSubscription;
@property(readonly, nonatomic) id <GIKMutableForegroundAccountService> mutableForegroundAccountService; // @synthesize mutableForegroundAccountService=_mutableForegroundAccountService;
@property(readonly, nonatomic) id <GIKForegroundAccountService> foregroundAccountService; // @synthesize foregroundAccountService=_foregroundAccountService;
@property(readonly, nonatomic) id <GIKExpressSignInUIService> expressSignInUIService; // @synthesize expressSignInUIService=_expressSignInUIService;
@property(readonly, nonatomic) id <GIKAppDelegateService> identityService; // @synthesize identityService=_identityService;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(nonatomic) __weak id <HMEAuthCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)loadIdentity;
- (void)preloadProfile:(id)arg1;
- (void)foregroundAccountChanged;
- (void)didEndExpressSignInWithViewController:(id)arg1;
- (_Bool)openURL:(id)arg1 options:(id)arg2;
- (void)signOut;
- (_Bool)isSignedIn;
- (void)switchAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)expressSignInWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startAddAccountWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)autologinWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountService:(id)arg1 expressSignInUIService:(id)arg2 foregroundAccountService:(id)arg3 identityService:(id)arg4 mutableForegroundAccountService:(id)arg5 SSOService:(id)arg6 userDefaults:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


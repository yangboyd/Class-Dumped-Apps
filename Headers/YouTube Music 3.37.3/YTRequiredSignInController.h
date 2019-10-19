//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAccountsListResponseDataDelegate-Protocol.h"
#import "YTRequiredSignInViewControllerDelegate-Protocol.h"

@class GIMMe, NSString, YTAccountsListResponseData, YTGoogleAccount, YTRequiredSignInViewController, YTUserDefaults;
@protocol YTIdentityProvider;

@interface YTRequiredSignInController : NSObject <YTAccountsListResponseDataDelegate, YTRequiredSignInViewControllerDelegate>
{
    _Bool _isSignInFlowInProgress;
    GIMMe *_gimme;
    YTRequiredSignInViewController *_requiredSignInViewController;
    YTAccountsListResponseData *_accountsListResponseData;
    YTGoogleAccount *_defaultGoogleAccount;
    id <YTIdentityProvider> _identityProvider;
    YTUserDefaults *_userDefaults;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool isSignInFlowInProgress; // @synthesize isSignInFlowInProgress=_isSignInFlowInProgress;
@property(retain, nonatomic) YTUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) id <YTIdentityProvider> identityProvider; // @synthesize identityProvider=_identityProvider;
@property(retain, nonatomic) YTGoogleAccount *defaultGoogleAccount; // @synthesize defaultGoogleAccount=_defaultGoogleAccount;
@property(retain, nonatomic) YTAccountsListResponseData *accountsListResponseData; // @synthesize accountsListResponseData=_accountsListResponseData;
@property(retain, nonatomic) YTRequiredSignInViewController *requiredSignInViewController; // @synthesize requiredSignInViewController=_requiredSignInViewController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)requestHaTS;
- (void)ssoIdentityListChanged:(id)arg1;
- (void)showSignInView;
- (void)endRequiredSignIn;
- (void)startRequest;
- (void)skipRequiredSignIn;
- (void)directlySignInWithAccountItemRenderer:(id)arg1;
- (void)retry;
- (void)accountStatusDidChangeForGoogleAccount:(id)arg1 previousStatus:(unsigned long long)arg2 newStatus:(unsigned long long)arg3;
- (_Bool)isRequiredSignInFlowInProgress;
- (void)switchRequiredSignInStateIfNecessary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


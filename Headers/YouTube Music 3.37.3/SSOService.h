//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSOReauthService-Protocol.h"
#import "SSOService-Protocol.h"
#import "SSOServiceInternal-Protocol.h"
#import "SSOURLService-Protocol.h"

@class NSDateFormatter, NSError, NSMutableDictionary, NSString, NSURL, SSOConfiguration, SSOIdentity, SSOProfileSource, SSORPCService, SSOServiceExternalAuthState;
@protocol SSOIOSGuardManager, SSOServiceSafariBootstrapDelegate;

@interface SSOService : NSObject <SSOServiceInternal, SSOService, SSOReauthService, SSOURLService>
{
    NSMutableDictionary *_identities;
    NSMutableDictionary *_allIdentities;
    NSMutableDictionary *_identitiesRequiringReauth;
    SSORPCService *_RPCService;
    SSOProfileSource *_profileSource;
    NSDateFormatter *_dateFormatter;
    _Bool _isSigningInWithController;
    CDUnknownBlockType _signInCallback;
    NSMutableDictionary *_authorizerCache;
    _Bool _isAppInForeground;
    _Bool _areIdentitiesStale;
    id <SSOServiceSafariBootstrapDelegate> _safariBootstrapDelegate;
    CDUnknownBlockType _safariSignInOpenURLHandler;
    id <SSOIOSGuardManager> _iOSGuardManager;
    SSOConfiguration *_configuration;
    SSOServiceExternalAuthState *_externalAuthState;
    NSURL *_testSignInURL;
    NSError *_testSignInError;
}

+ (id)serviceBitsFromIdentity:(id)arg1;
+ (id)filterRestrictedIdentities:(id)arg1;
+ (void)setFetcherToCallBackOnMainQueue:(id)arg1;
+ (id)errorForCancelWithDismissal:(_Bool)arg1;
+ (_Bool)isSSOFetcher:(id)arg1;
+ (id)fetcherWithRequest:(id)arg1 configuration:(id)arg2;
+ (id)sortedIdentitiesByCreationDateFromIdentities:(id)arg1;
+ (id)sortedScopesStringFromScopes:(id)arg1;
+ (id)libraryAuthorizationWithClientID:(id)arg1 identity:(id)arg2 scopes:(id)arg3;
+ (void)setTestProfileSource:(id)arg1;
+ (id)deviceIdentifier;
@property(retain, nonatomic) NSError *testSignInError; // @synthesize testSignInError=_testSignInError;
@property(copy, nonatomic) NSURL *testSignInURL; // @synthesize testSignInURL=_testSignInURL;
@property(retain, nonatomic) SSOServiceExternalAuthState *externalAuthState; // @synthesize externalAuthState=_externalAuthState;
@property(nonatomic) _Bool areIdentitiesStale; // @synthesize areIdentitiesStale=_areIdentitiesStale;
@property(retain, nonatomic) SSOConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType safariSignInOpenURLHandler; // @synthesize safariSignInOpenURLHandler=_safariSignInOpenURLHandler;
@property(nonatomic) __weak id <SSOServiceSafariBootstrapDelegate> safariBootstrapDelegate; // @synthesize safariBootstrapDelegate=_safariBootstrapDelegate;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)resetNumberOfReauthPromptsShownForIdentity:(id)arg1;
- (void)incrementNumberOfReauthPromptsShownForIdentity:(id)arg1;
- (unsigned long long)numberOfReauthPromptsShownForIdentity:(id)arg1;
- (void)markIdentityAsUnselected:(id)arg1;
- (void)markIdentityAsSelected:(id)arg1;
- (id)lastUsedDateForIdentity:(id)arg1;
- (_Bool)updateKeychainForIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)writeNewlySignedInIdentity:(id)arg1 outputIdentity:(id *)arg2 error:(id *)arg3;
- (id)errorFromAuthAdvice:(id)arg1;
- (id)identitiesSortedForDefaultAccountSelection;
- (_Bool)supportsAllServiceBits:(id)arg1;
- (id)filterIdentities:(id)arg1;
- (_Bool)maybeReloadIdentitiesWithError:(id *)arg1;
- (id)identitiesWithError:(id *)arg1;
- (id)identitiesRequiringReauth;
- (id)allIdentities;
- (id)identities;
- (void)identityListDidChange:(id)arg1;
- (_Bool)handleInvalidGrantForAuth:(id)arg1;
- (void)accessTokenRefreshFailed:(id)arg1;
- (_Bool)handleAppTokenRefreshWithAuth:(id)arg1;
- (_Bool)handleLoginTokenRefreshWithAuth:(id)arg1;
- (void)accessTokenRefreshed:(id)arg1;
- (void)postDidReloadIdentitiesNotificatinWithUserInfo:(id)arg1;
- (void)postIdentitySelectionDidChangeNotificationWithUserInfo:(id)arg1;
- (void)postIdentityListChangedNotificationWithUserInfo:(id)arg1;
- (_Bool)isConsumerIdentity:(id)arg1;
- (void)reauthPromptShownForIdentity:(id)arg1;
- (_Bool)shouldShowReauthPromptForIdentity:(id)arg1;
- (void)reauthenticateUser:(id)arg1 userID:(id)arg2 UIDelegate:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)requestAccessTokenWithIdentity:(id)arg1 scopes:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)signOutURLWithTargetURL:(id)arg1 source:(id)arg2;
- (void)requestTokenAuthURLForIdentity:(id)arg1 source:(id)arg2 autoLoginArgs:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)requestTokenAuthURLForIdentity:(id)arg1 targetURL:(id)arg2 service:(id)arg3 source:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)authorizationForUserID:(id)arg1 ownerIdentity:(id)arg2 delegationType:(unsigned long long)arg3 scopes:(id)arg4;
- (id)authorizationForIdentity:(id)arg1 scopes:(id)arg2;
- (id)forgetIdentity:(id)arg1 revokeToken:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)forgetIdentity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeCachedAuthorizersForUserID:(id)arg1 shouldInvalidate:(_Bool)arg2;
- (void)clearFileCache;
- (_Bool)isValidUserID:(id)arg1;
- (_Bool)isValidIdentity:(id)arg1;
- (void)continueAuthenticationForURL:(id)arg1 externalAuthState:(id)arg2;
- (void)finishExternalSignInWithCallbackURL:(id)arg1 error:(id)arg2;
- (void)prepareExternalSignInWithVerifier:(id)arg1 expectedEmail:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)finishEmbeddedSignInWithAuth:(id)arg1 expectedEmail:(id)arg2 error:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)cancelSignIn;
- (void)signInWithUserEmail:(id)arg1 UIDelegate:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)identitiesSortedForDisplay;
@property(retain, nonatomic) SSOIdentity *userSelectedDefaultIdentity;
- (id)defaultIdentity;
- (id)recommendedIdentityForSelection;
- (id)identitiesSortedByCreationDate;
- (id)identitiesSortedBySelectionDate;
- (id)identityForHashedUserID:(id)arg1;
@property(readonly, copy, nonatomic) id <SSOIOSGuardManager> iOSGuardManager; // @synthesize iOSGuardManager=_iOSGuardManager;
- (id)profileSource;
- (id)RPCService;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


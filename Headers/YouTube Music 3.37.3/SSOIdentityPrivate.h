//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSOIdentity.h"

@class GTMSessionFetcher, NSDate, NSMutableArray, NSString, SSOConfiguration, SSOLoginScopedAuthorization, SSORPCService;
@protocol GIPGaiaAccountID;

@interface SSOIdentityPrivate : SSOIdentity
{
    NSString *_cachedUserID;
    NSString *_cachedUserEmail;
    id <GIPGaiaAccountID> _cachedAccountID;
    unsigned long long _hash;
    NSString *_hashedUserID;
    SSORPCService *_RPCService;
    _Bool _canSelect;
    NSDate *_creationDate;
    SSOConfiguration *_configuration;
    SSOLoginScopedAuthorization *_auth;
    NSString *_userFullName;
    NSString *_filterAnnotation;
    GTMSessionFetcher *_tokenRevocationFetcher;
    NSMutableArray *_pendingTokenRevocationCallbacks;
    NSDate *_cleanupDate;
}

+ (id)authorizationFromKeychainItem:(id)arg1 configuration:(id)arg2;
+ (id)stringFromDelegationType:(unsigned long long)arg1;
@property(copy, nonatomic) NSDate *cleanupDate; // @synthesize cleanupDate=_cleanupDate;
@property(retain, nonatomic) NSMutableArray *pendingTokenRevocationCallbacks; // @synthesize pendingTokenRevocationCallbacks=_pendingTokenRevocationCallbacks;
@property(retain, nonatomic) GTMSessionFetcher *tokenRevocationFetcher; // @synthesize tokenRevocationFetcher=_tokenRevocationFetcher;
@property(copy, nonatomic) NSString *filterAnnotation; // @synthesize filterAnnotation=_filterAnnotation;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
@property(copy, nonatomic) NSString *userFullName; // @synthesize userFullName=_userFullName;
@property(retain) SSOLoginScopedAuthorization *auth; // @synthesize auth=_auth;
@property(readonly, nonatomic) SSOConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (_Bool)hasValidAuth;
- (id)identityPropertyForKey:(id)arg1;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
- (id)hashedUserID;
- (id)userID;
- (id)userEmail;
- (id)accountID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) SSORPCService *RPCService;
- (id)initWithConfiguration:(id)arg1 auth:(id)arg2;
- (void)saveCleanupDate:(id)arg1;
- (void)saveServiceBits:(id)arg1;
- (id)serviceBits;
- (void)writeLibraryAccessToken;
- (id)keychainItem;
- (id)initWithConfiguration:(id)arg1 keychainItem:(id)arg2;
- (id)revokeToken:(CDUnknownBlockType)arg1;
- (void)requestAccessTokenForUserID:(id)arg1 delegationType:(unsigned long long)arg2 scopes:(id)arg3 callback:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)requestAccessTokenForScopes:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (id)extraParametersForLibraryClientID:(id)arg1;
- (void)requestLibraryAccessTokenForClientID:(id)arg1 scopes:(id)arg2 callback:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)requestLibraryAccessTokenForClientID:(id)arg1 scopes:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestAccessTokenForUserID:(id)arg1 delegationType:(unsigned long long)arg2 scopes:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)requestAccessTokenForScopes:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestCookiesForTargetURLs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestTokenAuthURLWithAutoLoginArgs:(id)arg1 source:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestTokenAuthURL:(id)arg1 service:(id)arg2 source:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end


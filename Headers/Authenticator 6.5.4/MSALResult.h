//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSALAccount, MSALAuthority, MSALTenantProfile, NSArray, NSDate, NSString, NSUUID;
@protocol MSALAuthenticationSchemeProtocol;

@interface MSALResult : NSObject
{
    _Bool _extendedLifeTimeToken;
    NSString *_accessToken;
    NSDate *_expiresOn;
    NSString *_tenantId;
    NSString *_idToken;
    NSArray *_scopes;
    MSALTenantProfile *_tenantProfile;
    MSALAccount *_account;
    NSString *_uniqueId;
    MSALAuthority *_authority;
    NSUUID *_correlationId;
    id <MSALAuthenticationSchemeProtocol> _authScheme;
}

+ (id)resultWithMSIDTokenResult:(id)arg1 authority:(id)arg2 authScheme:(id)arg3 popManager:(id)arg4 error:(id *)arg5;
+ (id)resultWithAccessToken:(id)arg1 expiresOn:(id)arg2 isExtendedLifetimeToken:(_Bool)arg3 tenantId:(id)arg4 tenantProfile:(id)arg5 account:(id)arg6 idToken:(id)arg7 uniqueId:(id)arg8 scopes:(id)arg9 authority:(id)arg10 correlationId:(id)arg11 authScheme:(id)arg12;
- (void).cxx_destruct;
@property(retain) id <MSALAuthenticationSchemeProtocol> authScheme; // @synthesize authScheme=_authScheme;
@property(readonly) NSUUID *correlationId; // @synthesize correlationId=_correlationId;
@property(readonly) MSALAuthority *authority; // @synthesize authority=_authority;
@property(readonly) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly) MSALAccount *account; // @synthesize account=_account;
@property(readonly) MSALTenantProfile *tenantProfile; // @synthesize tenantProfile=_tenantProfile;
@property(readonly) NSArray *scopes; // @synthesize scopes=_scopes;
@property(readonly) NSString *idToken; // @synthesize idToken=_idToken;
@property(readonly) NSString *tenantId; // @synthesize tenantId=_tenantId;
@property(readonly) _Bool extendedLifeTimeToken; // @synthesize extendedLifeTimeToken=_extendedLifeTimeToken;
@property(readonly) NSDate *expiresOn; // @synthesize expiresOn=_expiresOn;
@property(readonly) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly) NSString *authenticationScheme;
@property(readonly) NSString *authorizationHeader;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDCacheKey.h>

#import <MSAL/NSCopying-Protocol.h>

@class NSString;

@interface MSIDDefaultCredentialCacheKey : MSIDCacheKey <NSCopying>
{
    NSString *_homeAccountId;
    NSString *_environment;
    NSString *_realm;
    NSString *_clientId;
    NSString *_familyId;
    NSString *_target;
    NSString *_applicationIdentifier;
    long long _credentialType;
    NSString *_tokenType;
    NSString *_requestedClaims;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestedClaims; // @synthesize requestedClaims=_requestedClaims;
@property(retain, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *familyId; // @synthesize familyId=_familyId;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *homeAccountId; // @synthesize homeAccountId=_homeAccountId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)appKeyHash;
- (_Bool)isShared;
- (id)service;
- (id)account;
- (id)type;
- (id)generic;
- (id)initWithHomeAccountId:(id)arg1 environment:(id)arg2 clientId:(id)arg3 credentialType:(long long)arg4;
- (id)credentialTypeNumber:(long long)arg1;
- (id)accountIdWithHomeAccountId:(id)arg1 environment:(id)arg2;
- (id)credentialIdWithType:(long long)arg1 clientId:(id)arg2 realm:(id)arg3 applicationIdentifier:(id)arg4;
- (id)serviceWithType:(long long)arg1 clientID:(id)arg2 realm:(id)arg3 applicationIdentifier:(id)arg4 target:(id)arg5 appKey:(id)arg6 tokenType:(id)arg7 requestedClaims:(id)arg8;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface AWSCognitoAuthConfiguration : NSObject
{
    _Bool _isSFAuthenticationSessionEnabled;
    _Bool _isAuthProviderExternal;
    NSString *_appClientId;
    NSString *_appClientSecret;
    NSSet *_scopes;
    NSString *_signInRedirectUri;
    NSString *_signOutRedirectUri;
    NSString *_webDomain;
    NSString *_identityProvider;
    NSString *_idpIdentifier;
    NSString *_userPoolId;
    NSString *_signInUri;
    NSString *_tokensUri;
    NSString *_signOutUri;
    NSDictionary *_signInUriQueryParameters;
    NSDictionary *_tokensUriQueryParameters;
    NSDictionary *_signOutUriQueryParameters;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAuthProviderExternal; // @synthesize isAuthProviderExternal=_isAuthProviderExternal;
@property(retain, nonatomic) NSDictionary *signOutUriQueryParameters; // @synthesize signOutUriQueryParameters=_signOutUriQueryParameters;
@property(retain, nonatomic) NSDictionary *tokensUriQueryParameters; // @synthesize tokensUriQueryParameters=_tokensUriQueryParameters;
@property(retain, nonatomic) NSDictionary *signInUriQueryParameters; // @synthesize signInUriQueryParameters=_signInUriQueryParameters;
@property(retain, nonatomic) NSString *signOutUri; // @synthesize signOutUri=_signOutUri;
@property(retain, nonatomic) NSString *tokensUri; // @synthesize tokensUri=_tokensUri;
@property(retain, nonatomic) NSString *signInUri; // @synthesize signInUri=_signInUri;
@property(readonly, nonatomic) _Bool isSFAuthenticationSessionEnabled; // @synthesize isSFAuthenticationSessionEnabled=_isSFAuthenticationSessionEnabled;
@property(readonly, nonatomic) NSString *userPoolId; // @synthesize userPoolId=_userPoolId;
@property(readonly, nonatomic) NSString *idpIdentifier; // @synthesize idpIdentifier=_idpIdentifier;
@property(readonly, nonatomic) NSString *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(readonly, nonatomic) NSString *webDomain; // @synthesize webDomain=_webDomain;
@property(readonly, nonatomic) NSString *signOutRedirectUri; // @synthesize signOutRedirectUri=_signOutRedirectUri;
@property(readonly, nonatomic) NSString *signInRedirectUri; // @synthesize signInRedirectUri=_signInRedirectUri;
@property(readonly, nonatomic) NSSet *scopes; // @synthesize scopes=_scopes;
@property(readonly, nonatomic) NSString *appClientSecret; // @synthesize appClientSecret=_appClientSecret;
@property(readonly, nonatomic) NSString *appClientId; // @synthesize appClientId=_appClientId;
@property(readonly, nonatomic, getter=isASFEnabled) _Bool asfEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppClientIdInternal:(id)arg1 appClientSecret:(id)arg2 scopes:(id)arg3 signInRedirectUri:(id)arg4 signOutRedirectUri:(id)arg5 webDomain:(id)arg6 identityProvider:(id)arg7 idpIdentifier:(id)arg8 userPoolIdForEnablingASF:(id)arg9 enableSFAuthSessionIfAvailable:(_Bool)arg10 signInUri:(id)arg11 signOutUri:(id)arg12 tokensUri:(id)arg13 signInUriQueryParameters:(id)arg14 signOutUriQueryParameters:(id)arg15 tokenUriQueryParameters:(id)arg16 isProviderExternal:(_Bool)arg17;
- (id)initWithAppClientId:(id)arg1 appClientSecret:(id)arg2 scopes:(id)arg3 signInRedirectUri:(id)arg4 signOutRedirectUri:(id)arg5 webDomain:(id)arg6 identityProvider:(id)arg7 idpIdentifier:(id)arg8 userPoolIdForEnablingASF:(id)arg9 enableSFAuthSessionIfAvailable:(_Bool)arg10;
- (id)initWithAppClientId:(id)arg1 appClientSecret:(id)arg2 scopes:(id)arg3 signInRedirectUri:(id)arg4 signOutRedirectUri:(id)arg5 webDomain:(id)arg6 identityProvider:(id)arg7 idpIdentifier:(id)arg8 userPoolIdForEnablingASF:(id)arg9;
- (id)initWithAppClientId:(id)arg1 appClientSecret:(id)arg2 scopes:(id)arg3 signInRedirectUri:(id)arg4 signOutRedirectUri:(id)arg5 webDomain:(id)arg6;
- (id)initWithAppClientId:(id)arg1 appClientSecret:(id)arg2 scopes:(id)arg3 signInRedirectUri:(id)arg4 signOutRedirectUri:(id)arg5 webDomain:(id)arg6 identityProvider:(id)arg7 idpIdentifier:(id)arg8 signInUri:(id)arg9 signOutUri:(id)arg10 tokensUri:(id)arg11 signInUriQueryParameters:(id)arg12 signOutUriQueryParameters:(id)arg13 tokenUriQueryParameters:(id)arg14;

@end


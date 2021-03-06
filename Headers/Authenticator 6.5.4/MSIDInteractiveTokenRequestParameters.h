//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDInteractiveRequestParameters.h>

@class MSIDBrokerInvocationOptions, NSDictionary, NSString;

@interface MSIDInteractiveTokenRequestParameters : MSIDInteractiveRequestParameters
{
    _Bool _shouldValidateResultAccount;
    _Bool _enablePkce;
    long long _uiBehaviorType;
    NSString *_loginHint;
    NSString *_extraScopesToConsent;
    long long _promptType;
    NSDictionary *_extraAuthorizeURLQueryParameters;
    MSIDBrokerInvocationOptions *_brokerInvocationOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSIDBrokerInvocationOptions *brokerInvocationOptions; // @synthesize brokerInvocationOptions=_brokerInvocationOptions;
@property(nonatomic) _Bool enablePkce; // @synthesize enablePkce=_enablePkce;
@property(retain, nonatomic) NSDictionary *extraAuthorizeURLQueryParameters; // @synthesize extraAuthorizeURLQueryParameters=_extraAuthorizeURLQueryParameters;
@property(nonatomic) _Bool shouldValidateResultAccount; // @synthesize shouldValidateResultAccount=_shouldValidateResultAccount;
@property(nonatomic) long long promptType; // @synthesize promptType=_promptType;
@property(retain, nonatomic) NSString *extraScopesToConsent; // @synthesize extraScopesToConsent=_extraScopesToConsent;
@property(retain, nonatomic) NSString *loginHint; // @synthesize loginHint=_loginHint;
@property(nonatomic) long long uiBehaviorType; // @synthesize uiBehaviorType=_uiBehaviorType;
- (_Bool)validateParametersWithError:(id *)arg1;
- (id)allAuthorizeRequestExtraParameters;
- (id)allAuthorizeRequestScopes;
- (id)initWithAuthority:(id)arg1 authScheme:(id)arg2 redirectUri:(id)arg3 clientId:(id)arg4 scopes:(id)arg5 oidcScopes:(id)arg6 extraScopesToConsent:(id)arg7 correlationId:(id)arg8 telemetryApiId:(id)arg9 brokerOptions:(id)arg10 requestType:(long long)arg11 intuneAppIdentifier:(id)arg12 error:(id *)arg13;

@end


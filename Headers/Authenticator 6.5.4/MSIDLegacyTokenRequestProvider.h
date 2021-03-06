//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MSAL/MSIDTokenRequestProviding-Protocol.h>

@class MSIDLegacyTokenCacheAccessor, MSIDOauth2Factory, NSString;

@interface MSIDLegacyTokenRequestProvider : NSObject <MSIDTokenRequestProviding>
{
    MSIDOauth2Factory *_oauthFactory;
    MSIDLegacyTokenCacheAccessor *_tokenCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSIDLegacyTokenCacheAccessor *tokenCache; // @synthesize tokenCache=_tokenCache;
@property(retain, nonatomic) MSIDOauth2Factory *oauthFactory; // @synthesize oauthFactory=_oauthFactory;
- (id)silentSSOExtensionTokenRequestWithParameters:(id)arg1 forceRefresh:(_Bool)arg2;
- (id)interactiveSSOExtensionTokenRequestWithParameters:(id)arg1;
- (id)brokerTokenRequestWithParameters:(id)arg1 brokerKey:(id)arg2 brokerApplicationToken:(id)arg3 sdkCapabilities:(id)arg4 error:(id *)arg5;
- (id)silentTokenRequestWithParameters:(id)arg1 forceRefresh:(_Bool)arg2;
- (id)interactiveTokenRequestWithParameters:(id)arg1;
- (id)initWithOauthFactory:(id)arg1 legacyAccessor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


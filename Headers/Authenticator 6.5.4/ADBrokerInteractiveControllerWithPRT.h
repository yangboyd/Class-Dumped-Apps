//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSIDRequestControlling-Protocol.h"

@class ADBTokenRequestProvider, ADNonceTokenRequest, MSIDAccountMetadataCacheAccessor, MSIDInteractiveTokenRequestParameters, MSIDOauth2Factory, MSIDPrimaryRefreshToken, MSIDTokenResponseValidator, NSString;
@protocol MSIDCacheAccessor, MSIDRequestContext;

@interface ADBrokerInteractiveControllerWithPRT : NSObject <MSIDRequestControlling>
{
    _Bool _ignoreCookies;
    MSIDPrimaryRefreshToken *_prt;
    MSIDInteractiveTokenRequestParameters *_requestParameters;
    id <MSIDRequestContext> _context;
    id <MSIDCacheAccessor> _cacheAccessor;
    MSIDTokenResponseValidator *_validator;
    MSIDOauth2Factory *_oauth2Factory;
    ADBTokenRequestProvider *_requestProvider;
    MSIDAccountMetadataCacheAccessor *_accountMetadataCache;
    ADNonceTokenRequest *_nonceRequest;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreCookies; // @synthesize ignoreCookies=_ignoreCookies;
@property(retain, nonatomic) ADNonceTokenRequest *nonceRequest; // @synthesize nonceRequest=_nonceRequest;
@property(retain, nonatomic) MSIDAccountMetadataCacheAccessor *accountMetadataCache; // @synthesize accountMetadataCache=_accountMetadataCache;
@property(retain, nonatomic) ADBTokenRequestProvider *requestProvider; // @synthesize requestProvider=_requestProvider;
@property(retain, nonatomic) MSIDOauth2Factory *oauth2Factory; // @synthesize oauth2Factory=_oauth2Factory;
@property(retain, nonatomic) MSIDTokenResponseValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) id <MSIDCacheAccessor> cacheAccessor; // @synthesize cacheAccessor=_cacheAccessor;
@property(retain, nonatomic) id <MSIDRequestContext> context; // @synthesize context=_context;
@property(retain, nonatomic) MSIDInteractiveTokenRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(retain, nonatomic) MSIDPrimaryRefreshToken *prt; // @synthesize prt=_prt;
- (void)acquireTokenWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestNonceAndAcquireToken:(CDUnknownBlockType)arg1;
- (void)acquireToken:(CDUnknownBlockType)arg1;
- (id)initWithParameters:(id)arg1 primaryRefreshToken:(id)arg2 tokenResponseValidator:(id)arg3 cacheAccessor:(id)arg4 oauth2Factory:(id)arg5 accountMetadataCache:(id)arg6 ignoreCookies:(_Bool)arg7 context:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


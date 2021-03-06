//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppUser-Protocol.h"

@class GTMSessionFetcherService, NSString;
@protocol HMEAppUserContext, SSOAuthorization, SSOIdentity;

@interface AppUser : NSObject <AppUser>
{
    id <SSOAuthorization> _ssoAuth;
    long long _signInState;
    GTMSessionFetcherService *_fetcherService;
    id <SSOIdentity> _SSOIdentity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SSOIdentity> SSOIdentity; // @synthesize SSOIdentity=_SSOIdentity;
@property(retain, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
- (id)SSOScopes;
- (void)accessTokenRefreshFailed:(id)arg1;
- (id)fetcherWithRequest:(id)arg1 scopes:(id)arg2;
- (id)fetcherWithRequest:(id)arg1;
- (void)authorizeWithIdentity:(id)arg1;
- (void)setSSOAuth:(id)arg1 withIdentity:(id)arg2;
- (id)structureContextForStructureID:(id)arg1;
@property(readonly, nonatomic) id <HMEAppUserContext> userContext;
@property(readonly, nonatomic) CDUnknownBlockType helpCoordinatorFactory;
- (void)signOut;
@property(readonly, nonatomic) long long signInState; // @synthesize signInState=_signInState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


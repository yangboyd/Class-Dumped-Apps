//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAAuthDataCache, NSString;

@interface MSAAuthentication : NSObject
{
    NSString *_domain;
    NSString *_signUpDomain;
    NSString *_client;
    NSString *_signupMembernamePreference;
    MSAAuthDataCache *_authDataCache;
    _Bool _mightBeFamilyOfClientIdsApp;
}

+ (void)initialize;
@property(readonly) NSString *client; // @synthesize client=_client;
@property(readonly) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)setSignupMembernamePreference:(int)arg1;
- (void)signOutCurrentUser;
- (id)currentDisplayType;
- (id)returnSignUpViewControllerWithScope:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)returnAuthenticationViewControllerWithScope:(id)arg1 username:(id)arg2 refreshToken:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)returnAuthenticationUrlForScope:(id)arg1 username:(id)arg2;
- (void)failWithUINeededForScope:(id)arg1 refreshToken:(id)arg2 callback:(CDUnknownBlockType)arg3 failureDelegate:(id)arg4;
- (_Bool)isWebFlowNeededForErrorType:(id)arg1;
- (void)processRequestWithScope:(id)arg1 refreshToken:(id)arg2 callback:(CDUnknownBlockType)arg3 failureCallback:(id)arg4;
- (void)authenticateWithScope:(id)arg1 failureCallback:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)reportAuthInfo:(id)arg1 scope:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)persistedAuthInfoForScope:(id)arg1 persistedAuthData:(out id *)arg2;
- (id)userInfo;
- (_Bool)userHasSignedIn;
- (id)loadCachedAuthData;
- (void)logText:(id)arg1;
- (id)init;
- (id)initForEnvironment:(id)arg1 clientID:(id)arg2;

@end


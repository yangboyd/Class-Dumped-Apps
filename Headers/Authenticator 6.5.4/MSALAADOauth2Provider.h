//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSALOauth2Provider.h>

@interface MSALAADOauth2Provider : MSALOauth2Provider
{
}

- (void)initOauth2Factory;
- (id)tenantProfileWithClaims:(id)arg1 homeAccountId:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (_Bool)isSupportedAuthority:(id)arg1;
- (id)issuerAuthorityWithAccount:(id)arg1 requestAuthority:(id)arg2 instanceAware:(_Bool)arg3 error:(id *)arg4;
- (_Bool)removeAdditionalAccountInfo:(id)arg1 error:(id *)arg2;
- (id)resultWithTokenResult:(id)arg1 authScheme:(id)arg2 popManager:(id)arg3 error:(id *)arg4;

@end


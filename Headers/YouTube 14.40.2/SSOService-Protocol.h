//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SSOReauthService.h"
#import "SSOURLService.h"

@class GTMSessionFetcher, NSArray, NSDictionary, NSString, NSURL, SSOConfiguration, UIApplication;

@protocol SSOService <NSObject, SSOReauthService, SSOURLService>
@property(readonly, nonatomic) SSOConfiguration *configuration;
- (void)requestAccessTokenWithIdentity:(id <SSOIdentity>)arg1 scopes:(NSArray *)arg2 callback:(void (^)(NSString *, NSDate *, NSError *))arg3;
- (id <SSOAuthorization>)authorizationForUserID:(NSString *)arg1 ownerIdentity:(id <SSOIdentity>)arg2 delegationType:(unsigned long long)arg3 scopes:(NSArray *)arg4;
- (id <SSOAuthorization>)authorizationForIdentity:(id <SSOIdentity>)arg1 scopes:(NSArray *)arg2;
- (GTMSessionFetcher *)forgetIdentity:(id <SSOIdentity>)arg1 callback:(void (^)(NSError *))arg2;
- (void)clearFileCache;
- (_Bool)isValidUserID:(NSString *)arg1;
- (_Bool)isValidIdentity:(id <SSOIdentity>)arg1;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)markIdentityAsUnselected:(id <SSOIdentity>)arg1;
- (void)markIdentityAsSelected:(id <SSOIdentity>)arg1;
- (id <SSOIdentity>)defaultIdentity;
- (id <SSOIdentity>)recommendedIdentityForSelection;
- (NSArray *)identitiesSortedForDisplay;
- (NSArray *)identitiesSortedBySelectionDate;
- (id <SSOIdentity>)identityForHashedUserID:(NSString *)arg1;
- (NSDictionary *)identitiesRequiringReauth;
- (NSDictionary *)identitiesWithError:(id *)arg1;
- (NSDictionary *)identities;
- (id <SSOProfileSource>)profileSource;
@end

